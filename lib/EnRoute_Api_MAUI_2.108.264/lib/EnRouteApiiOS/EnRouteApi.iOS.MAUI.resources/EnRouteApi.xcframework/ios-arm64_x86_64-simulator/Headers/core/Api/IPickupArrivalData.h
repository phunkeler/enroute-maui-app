//------------------------------------------------------------------------------
//
// Copyright (c) 2019 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPICKUPARRIVALDATA_H__GLYMPSE__
#define IPICKUPARRIVALDATA_H__GLYMPSE__

namespace Glympse
{
    
/*C*/
struct IPickupArrivalData;
typedef O< IPickupArrivalData > GPickupArrivalData;
/**/
    
/**
 * Encapsulates Data that helps a store identify the user when they arrive
 * for a Pickup
 */
/*O*public**/ struct IPickupArrivalData : public ICommon
{

    public: virtual GString getStallLabel() = 0;
        
    public: virtual GString getLicensePlate() = 0;
        
    public: virtual GString getCarMake() = 0;
        
    public: virtual GString getCarModel() = 0;
        
    public: virtual GString getCarColor() = 0;

    public: virtual bool isPickupInStore() = 0;
};

}

#endif // !IPICKUPARRIVALDATA_H__GLYMPSE__
