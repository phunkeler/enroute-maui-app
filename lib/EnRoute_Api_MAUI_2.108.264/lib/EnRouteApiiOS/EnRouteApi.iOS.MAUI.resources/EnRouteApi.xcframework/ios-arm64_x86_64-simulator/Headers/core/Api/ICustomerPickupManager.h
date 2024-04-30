//------------------------------------------------------------------------------
//
// Copyright (c) 2019 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICUSTOMERPICKUPMANAGER_H__GLYMPSE__
#define ICUSTOMERPICKUPMANAGER_H__GLYMPSE__

namespace Glympse
{
    
/*O*public**/ struct ICustomerPickupManager : public IEventSink
{
    /**
     * This method establishes the current pickup order by passing in the invite code received by the customer.
     *
     * Either this method or setForeignId() must be called prior to calling other methods that act on a Pickup
     *
     * @param inviteCode The invite code received for the current Pickup
     */
    public: virtual void setInviteCode(const GString& inviteCode) = 0;
    
    /**
     * This method establishes the current pickup order by passing in a foreign id associated with the Pickup. Typically
     * this id would be an order number or some other string specified during Pickup creation in the foreign_id field.
     *
     * Either this method or setInviteCode() must be called prior to calling other methods that act on a Pickup.
     *
     * @param foreignId The foreign id associated with the current Pickup
     */
    public: virtual void setForeignId(const GString& foreignId) = 0;
    
    /**
     * Sets a user entered ETA (in milliseconds) to associate with the current Pickup order.
     *
     * Either setInviteCode() or setForeignId() must be called first.
     *
     * @param eta Manual ETA (in milliseconds) specified by the user
     * @return boolean True if an invite code or foreign id is specified. This indicates the api call can be made
     */
    public: virtual bool setManualETA(int64 eta) = 0;
    
   /**
    * Sets the current Pickup to the "arrived" phase
    *
    * Either setInviteCode() or setForeignId() must be called first.
    *
    * @return boolean True if an invite code or foreign id is specified. This indicates the api call can be made
    */
    public: virtual bool arrived() = 0;
    
    /**
     * Sets the current Pickup to the "Hold" / "Not Completed" phase
     *
     * Either setInviteCode() or setForeignId() must be called first.
     *
     * @return boolean True if an invite code or foreign id is specified. This indicates the api call can be made
     */
    public: virtual bool holdPickup() = 0;
    
   /**
    * Sends Pickup Arrival Data to be attached to the current Pickup.
    *
    * Either setInviteCode() or setForeignId() must be called first.
    *
    * Note: stall label (customer location) is required. This call will fail and return false if it's missing
    *
    * @param arrivalData Pickup Arrival Data to be attached to the Pickup. This object can be created with PickupArrivalDataBuilder.
    * @return boolean True if an invite code or foreign id is specified. This indicates the api call can be made
    */
    public: virtual bool sendArrivalData(const GPickupArrivalData& arrivalData) = 0;
    
    /**
     * Sends Pickup Feedback to be associated to the current Pickup.
     *
     * Either setInviteCode() or setForeignId() must be called first.
     *
     * The Pickup must be in the completed phase in order to send Feedback
     *
     * @param customerRating Customer rating using a scale appropriate for your organization (such as 1-5)
     * @param customerComment Customer text feedback
     * @param canContactCustomer Flag that specifies whether or not customer would like to be contacted about their feedback
     * @return boolean True if an invite code or foreign id is specified. This indicates the api call can be made
     */
    public: virtual bool sendFeedback(int32 customerRating, const GString& customerComment, bool canContactCustomer) = 0;
    
    /**
     * Returns the currently available Customer Pickup object.
     *
     * After calling setInviteCode() or setForeignId() the Pickup will be fetched and kept in sync.
     */
    public: virtual GCustomerPickup getCurrentPickup() = 0;
    
    /**
     * Sends a message to the current Pickup.
     *
     * @return true if a message can be sent. Will return false and log a reason if a message can't be sent.
     */
    public: virtual bool sendChatMessage(const GString& message) = 0;

    /**
     * Gets the list of ChatMessages associated with the current Pickup.
     *
     * May return NULL if there is no current pickup or the current pickup has no chat channel generated.
     */
    public: virtual GArray<GChatMessage>::ptr getChatMessages() = 0;
    
};

/*C*/typedef O< ICustomerPickupManager > GCustomerPickupManager;/**/
    
}

#endif // !ICUSTOMERPICKUPMANAGER_H__GLYMPSE__
