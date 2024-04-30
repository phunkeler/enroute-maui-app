//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICUSTOMERPICKUP_H__ENROUTE__GLYMPSE__
#define ICUSTOMERPICKUP_H__ENROUTE__GLYMPSE__

namespace Glympse
{
    
/*O*public**/ struct ICustomerPickup : public ICommon
{
    /**
     * Gets the unique id of the Pickup.
     */
    public: virtual GString getId() = 0;
    
    /**
     * Gets the id of the Organization this Pickup belongs to
     */
    public: virtual int64 getOrgId() = 0;
    
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
     * Gets an array of PickupItems belonging to this Pickup
     */
    public: virtual GArray<GPickupItem>::ptr getPickupItems() = 0;
    
    /**
     * Gets the customer arrival data.
     *
     * Will return NULL until the customer arrives and provides this data
     */
    public: virtual GPickupArrivalData getCustomerArrivalData() = 0;
    
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
    
    /**
     * Gets the customer name associated with this Pickup. The name is parsed from the request delivery channels
     *
     * Will return NULL if a name was not available.
     */
    public: virtual GString getCustomerName() = 0;
    
    /**
     * Gets a list of strings representing the names of phases where chat is permitted for this Pickup.
     *
     * Will return NULL if this configuration doesn't exist.
     */
    public: virtual GArray<GString>::ptr getChatEnabledPhases() = 0;
    
    /**
     * Gets a Primitive object that contains a dictionary of days of the week.
     * Each day is a Primitive containing two keys "start" and "end" which is a string representing the start and end time
     * of the Pickup hours for that day.
     * ex: { "monday": { "start": "8:00:00", "end": "16:00:00" }, "tuesday": { "start": "8:00:00", "end": "16:00:00" }, ... }
     */
    public: virtual GPickupHours getPickupHours() = 0;
    
    /**
     * Gets a Primitive object that contains a dictionary of days of the week.
     * Each day is the key whose value is a string representation of the start and end time.
     * ex: { "monday": "11 am - 7 pm", "tuesday": "11 am - 7 pm", ... }
     */
    public: virtual GPickupHours getStoreHours() = 0;
    
    /**
     * Gets the foreign_id stored in org_metadata. The purpose of this field is to hold a
     * foreign id of the Pickup org such as a store id. This is not the same as
     * the Glympse orgId which is retrieved using getOrgId()
     */
    public: virtual GString getOrgForeignId() = 0;
    
    /**
     * Returns a string containing pickup instructions that have been configured for this org
     */
    public: virtual GString getPickupInstructions() = 0;
    
    /**
     * Returns true if this pickup has feedback data
     */
    public: virtual bool hasFeedback() = 0;
    
    /**
     * Returns the feedback creation time
     */
    public: virtual int64 getFeedbackCreatedTime() = 0;
    
    /**
     * Returns the feedback customer rating
     */
    public: virtual int64 getFeedbackCustomerRating() = 0;
    
    /**
     * Returns the feedback customer comment content
     */
    public: virtual GString getFeedbackCustomerComment() = 0;
    
    /**
     * Returns true if the customer specified that they are willing to be contacted about feedback
     */
    public: virtual bool getFeedbackCanContact() = 0;
};
    
/*C*/typedef O<ICustomerPickup> GCustomerPickup;/**/
    
}

#endif // !ICUSTOMERPICKUP_H__ENROUTE__GLYMPSE__
