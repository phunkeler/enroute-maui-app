//------------------------------------------------------------------------------
//
// Copyright (c) 2019 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPICKUPARRIVALDATABUILDER_H__GLYMPSE__
#define IPICKUPARRIVALDATABUILDER_H__GLYMPSE__

namespace Glympse
{
    
/**
 * Provides an interface for building PickupArrivalData objects.
 */
/*O*public**/ struct IPickupArrivalDataBuilder : public ICommon
{
    public: virtual void setStallLabel(const GString& stallLabel) = 0;
        
    public: virtual void setLicensePlate(const GString& licensePlate) = 0;
        
    public: virtual void setCarMake(const GString& carMake) = 0;
        
    public: virtual void setCarModel(const GString& carModel) = 0;
        
    public: virtual void setCarColor(const GString& carColor) = 0;
    
    public: virtual void setPickupInStore(bool isPickupInStore) = 0;
    
    /**
     * Get the built PickupArrivalData from the builder.
     */
    public: virtual GPickupArrivalData getPickupArrivalData() = 0;
};

/*C*/typedef O< IPickupArrivalDataBuilder > GPickupArrivalDataBuilder;/**/
    
}

#endif // !IPICKUPARRIVALDATABUILDER_H__GLYMPSE__

