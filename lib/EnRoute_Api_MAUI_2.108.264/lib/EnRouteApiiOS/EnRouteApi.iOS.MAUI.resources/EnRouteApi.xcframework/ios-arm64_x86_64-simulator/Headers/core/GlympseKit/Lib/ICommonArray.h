//------------------------------------------------------------------------------
//
// Copyright (c) 2016 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICOMMONARRAY_H__GLYMPSE__
#define ICOMMONARRAY_H__GLYMPSE__

namespace Glympse
{
    
/**
 * Intended to wrap generic IArray into array of GCommon objects.
 */
struct ICommonArray : public ICommon
{
    /**
     * Gets a number of elements in the underlying array.
     */
    public: virtual int32 length() = 0;
        
    /**
     * Extracts element at given index.
     */
    public: virtual GCommon at(int32 index) = 0;
};
    
typedef O< ICommonArray > GCommonArray;
    
}

#endif // !ICOMMONARRAY_H__GLYMPSE__
