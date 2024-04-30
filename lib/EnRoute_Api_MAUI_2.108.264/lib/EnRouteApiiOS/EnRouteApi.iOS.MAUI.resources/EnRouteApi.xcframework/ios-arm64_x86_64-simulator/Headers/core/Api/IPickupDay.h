//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPICKUPDAY_H__GLYMPSE__
#define IPICKUPDAY_H__GLYMPSE__

namespace Glympse
{
    
/*C*/
struct IPickupDay;
typedef O< IPickupDay > GPickupDay;
/**/
    
/**
 * Encapsulates Data that represents Store Hours a single day of the week
 */
/*O*public**/ struct IPickupDay : public ICommon
{
    public: virtual GString getStart() = 0;
    public: virtual GString getEnd() = 0;
};

}

#endif // !IPICKUPDAY_H__GLYMPSE__
