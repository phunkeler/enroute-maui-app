//------------------------------------------------------------------------------
//
// Copyright (c) 2016 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef BINDERBASE_H__GLYMPSE__
#define BINDERBASE_H__GLYMPSE__

namespace Glympse
{
    
class NSObjectStrongWrapper : public Common< ICommon >
{
    public: __strong id _obj;
        
    public: NSObjectStrongWrapper()
        : _obj(nil)
    {
    }
        
    public: NSObjectStrongWrapper(id obj)
        : _obj(obj)
    {
    }
};
    
struct IBinder
{
    public: virtual id bind(const GCommon& obj) = 0;
};
    
class StringBinder : public IBinder
{
    public: virtual id bind(const GCommon& obj)
    {
        GString str = (GString)obj;
        return [NSString stringWithCString:str->getBytes() encoding:NSUTF8StringEncoding];
    }
};

class ObjectBinder : public IBinder
{
    private: Class _cls;
        
    public: ObjectBinder(Class cls)
        : _cls(cls)
    {
    }
        
    public: virtual id bind(const GCommon& obj)
    {
        return [[_cls alloc] initWithCommon: obj];
    }
};
    
template< class T > class ArrayBinder : public IBinder
{
    public: virtual id bind(const GCommon& obj)
    {
        GCommonArray commonArray = new CommonArray<T>(obj);
        return [[GlyArray alloc] initWithCommon:commonArray];
    }
};
    
class WrapperBinder : public IBinder
{
    public: virtual id bind(const GCommon& obj)
    {
        O<NSObjectStrongWrapper> wrapper = (O<NSObjectStrongWrapper>)obj;
        return wrapper->_obj;
    }
};
    
class BinderCache
{
    public: static ExtendedMap<size_t, IBinder*> _cache;
    
    public: template<class T> static inline void string()
    {
        _cache[hashCode(typeid(T))] = new StringBinder();
    }
    
    public: template<class T> static inline void object(Class cls)
    {
        _cache[hashCode(typeid(T))] = new ObjectBinder(cls);
    }
        
    public: template<class T> static inline void array()
    {
        _cache[hashCode(typeid(Vector<T>))] = new ArrayBinder<T>();
    }
    
    public: static inline void wrapper()
    {
        _cache[hashCode(typeid(NSObjectStrongWrapper))] = new WrapperBinder();
    }
    
    public: static inline id bind(const GCommon& obj)
    {
        if ( NULL == obj )
        {
            return nil;
        }

        O<NSObjectStrongWrapper> wrapper = obj->extractObject();
        if ( NULL == wrapper )
        {
            wrapper = new NSObjectStrongWrapper();
            obj->attachObject(wrapper);
        }
        else if ( nil != wrapper->_obj )
        {
            return wrapper->_obj;
        }
        
        ICommon* ptr = obj.operator->();
        const std::type_info& typeInfo = typeid(*ptr);
        size_t typeId = hashCode(typeInfo);
        IBinder* binder = BinderCache::_cache[typeId];
        if ( NULL == binder )
        {
            [NSException raise:@"BindingFailure" format:@"Failed to find an ObjectiveC class to bind to %s", typeInfo.name()];
        }
        GlyCommon* common = binder->bind(obj);
        wrapper->_obj = common;
        obj->retain();
        return common;
    }
    
    public: static inline void bind(const GCommon& obj, id ido)
    {
        if ( ( NULL == obj ) || ( nil == ido ) )
        {
            return;
        }
        
        O<NSObjectStrongWrapper> wrapper = new NSObjectStrongWrapper(ido);
        obj->attachObject(wrapper);
    }
    
    public: static GCommon unwrap(id ido)
    {
        if ( nil == ido )
        {
            return NULL;
        }
        
        if ( [ido isKindOfClass:[NSString class]] )
        {
            NSString* str = (NSString*)ido;
            return CoreFactory::createString([str UTF8String]);
        }
        else if ( [ido isKindOfClass:[GlyCommon class]] )
        {
            GlyCommon* cmn = (GlyCommon*)ido;
            return cmn.object;
        }
        else
        {
            return new NSObjectStrongWrapper(ido);
        }
    }
    
    // TypeInfo hash_code implementation from
    // libcxx.llvm: https://github.com/llvm/llvm-project/blob/master/libcxx/src/typeinfo.cpp
    private: static size_t hashCode(const std::type_info& typeInfo)
    {
        const char* name = typeInfo.name();
        constexpr size_t fnv_offset_basis = 2166136261ull;
        constexpr size_t fnv_prime = 16777619ull;
        
        size_t value = fnv_offset_basis;
        for (const char* c = name; *c; ++c) {
            value ^= static_cast<size_t>(static_cast<unsigned char>(*c));
            value *= fnv_prime;
        }
        
        return value;
    }
};
    
}

#endif // !BINDERBASE_H__GLYMPSE__
