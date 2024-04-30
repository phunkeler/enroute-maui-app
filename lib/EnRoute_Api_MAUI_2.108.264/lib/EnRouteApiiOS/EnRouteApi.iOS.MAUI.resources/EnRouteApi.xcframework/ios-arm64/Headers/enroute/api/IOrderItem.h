//------------------------------------------------------------------------------
//
// Copyright (c) 2019 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IORDERITEM_H__ENROUTE__GLYMPSE__
#define IORDERITEM_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
    
/*O*public**/ struct IOrderItem : public ICommon
{
    /**
     * Gets the unique id of the OrderItem.
     */
    public: virtual GString getId() = 0;
    
    /**
     * Gets the name of the OrderItem
     */
    public: virtual GString getName() = 0;
    
    /**
     * Gets the status of the OrderItem
     */
    public: virtual GString getStatus() = 0;
    
    /**
     * Gets the quantity of the OrderItem
     */
    public: virtual int64 getQuantity() = 0;
    
    /**
     * Gets the location of the OrderItem
     */
    public: virtual GString getLocation() = 0;
    
    /**
     * Gets the foreign id associated with this OrderItem.
     */
    public: virtual GString getForeignId() = 0;
    
    /**
     * Gets the avatar url of the OrderItem
     */
    public: virtual GString getAvatarUrl() = 0;
    
};
    
/*C*/typedef O<IOrderItem> GOrderItem;/**/
    
}
}

#endif // !IORDERITEM_H__ENROUTE__GLYMPSE__
