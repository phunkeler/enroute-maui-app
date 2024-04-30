//------------------------------------------------------------------------------
//
// Copyright (c) 2016 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef COMMONARRAY_H__GLYMPSE__
#define COMMONARRAY_H__GLYMPSE__

namespace Glympse
{

template< class T > class CommonArray : public Common< ICommonArray >
{
    public: typedef typename GArray<T>::ptr ArrayType;
    
    private: ArrayType _array;
    
    public: CommonArray(const ArrayType& array)
    {
        _array = array;
    }
    
    public: virtual int32 length()
    {
        if ( NULL != _array )
        {
            return _array->length();
        }
        return 0;
    }

    public: virtual GCommon at(int32 index)
    {
        if ( NULL != _array )
        {
            return _array->at(index);
        }
        return NULL;
    }
};
    
}

#endif // !COMMONARRAY_H__GLYMPSE__
