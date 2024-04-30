//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPICKUP_H__ENROUTE__GLYMPSE__
#define IPICKUP_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
    
/*O*public**/ struct IPickup : public ICommon
{
    /**
     * Gets the unique id of the Pickup.
     */
    public: virtual GString getId() = 0;
    
    /**
     * Gets a description of the Pickup
     */
    public: virtual GString getDescription() = 0;
    
    /**
     * Gets the invite code of the Pickup
     */
    public: virtual GString getInviteCode() = 0;
    
    /**
     * Gets the creation date of the Pickup.
     */
    public: virtual int64 getCreatedTime() = 0;
    
    /**
     * Gets the due date of the Pickup.
     */
    public: virtual int64 getDueTime() = 0;
    
    /**
     * Gets the completed time of the Pickup. If the Pickup is not yet completed
     * this will return -1.
     */
    public: virtual int64 getCompletedTime() = 0;
    
    /**
     * Gets the arrived time of the Pickup. If the pickup doesn't have an arrival time
     * this will return -1.
     */
    public: virtual int64 getArrivedTime() = 0;

    /**
     * Gets the phase of this Pickup.
     */
    public: virtual GString getPhase() = 0;
    
    /**
     * Gets the foreign id associated with this Pickup.
     */
    public: virtual GString getForeignId() = 0;
    
    /**
     * Gets an array of metadata associated with this Pickup.
     */
    public: virtual GArray<GPrimitive>::ptr getMetadata() = 0;
    
    /**
     * Gets the agent id of the agent that owns this pickup object
     */
    public: virtual int64 getAgentId() = 0;
    
    /**
     * Gets the customer name associated with this pickup
     *
     * Will return NULL if no customer name is available
     */
    public: virtual GString getCustomerName() = 0;
    
    /**
     * Gets the Ticket the customer is sharing to this Pickup
     *
     * Will return NULL if there is currently no associated Ticket
     */
    public: virtual GTicket getCustomerTicket() = 0;
    
    /**
     * Gets the customer arrival data.
     *
     * Will return NULL until the customer arrives and provides this data
     */
    public: virtual GPickupArrivalData getCustomerArrivalData() = 0;
    
    /**
     * Gets the order items associated with this Pickup.
     *
     * Will return NULL if the items have not been fetched
     */
    public: virtual GArray<GOrderItem>::ptr getOrderItems() = 0;
    
    /**
     * Gets the messages associated with this Pickup
     */
    public: virtual GArray<GCustomerMessage>::ptr getMessages() = 0;
    
    /**
     * Gets the manual eta set on this Pickup by the customer
     *
     * Will return -1 if no manual eta has been set on this Pickup
     */
    public: virtual int64 getManualEta() = 0;
    
    /**
     * Gets the chat room id associated with this Pickup
     *
     * Will return NULL if no such id exists
     */
    public: virtual GString getChatRoomId() = 0;
    
    /**
     * Gets notes associated with this Pickup. This is a freeform string with no format expectations
     *
     * Will return NULL if no notes exist
     */
    public: virtual GString getNotes() = 0;
};
    
/*C*/typedef O<IPickup> GPickup;/**/
    
}
}

#endif // !IPICKUP_H__ENROUTE__GLYMPSE__
