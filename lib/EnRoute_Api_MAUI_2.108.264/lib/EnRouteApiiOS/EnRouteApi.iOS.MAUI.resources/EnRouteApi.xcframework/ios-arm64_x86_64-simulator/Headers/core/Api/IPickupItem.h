//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPICKUPITEM_H__GLYMPSE__
#define IPICKUPITEM_H__GLYMPSE__

namespace Glympse
{
    
/*C*/
struct IPickupItem;
typedef O< IPickupItem > GPickupItem;
/**/
    
/**
 * Encapsulates Data that represents an item in a Pickup order
 */
/*O*public**/ struct IPickupItem : public ICommon
{
    public: virtual GString getId() = 0;
    public: virtual int64 getItemId() = 0;
    public: virtual int64 getPickupId() = 0;
    public: virtual int64 getQuantity() = 0;
    public: virtual GString getStatus() = 0;
    public: virtual GString getName() = 0;
    public: virtual GString getDescription() = 0;
    public: virtual GString getLocation() = 0;
    public: virtual GString getAvatarUrl() = 0;
    public: virtual GString getForeignId() = 0;
    public: virtual int64 getCreatedTime() = 0;
    public: virtual int64 getUpdatedTime() = 0;
};

}

#endif // !IPICKUPITEM_H__GLYMPSE__
