//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPICKUPHOURS_H__GLYMPSE__
#define IPICKUPHOURS_H__GLYMPSE__

namespace Glympse
{
    
/*C*/
struct IPickupHours;
typedef O< IPickupHours > GPickupHours;
/**/
    
/**
 * Encapsulates Data that represents Store Hours for an org
 */
/*O*public**/ struct IPickupHours : public ICommon
{
    public: virtual GPickupDay getSunday() = 0;
    public: virtual GPickupDay getMonday() = 0;
    public: virtual GPickupDay getTuesday() = 0;
    public: virtual GPickupDay getWednesday() = 0;
    public: virtual GPickupDay getThursday() = 0;
    public: virtual GPickupDay getFriday() = 0;
    public: virtual GPickupDay getSaturday() = 0;
};

}

#endif // !IPICKUPHOURS_H__GLYMPSE__
