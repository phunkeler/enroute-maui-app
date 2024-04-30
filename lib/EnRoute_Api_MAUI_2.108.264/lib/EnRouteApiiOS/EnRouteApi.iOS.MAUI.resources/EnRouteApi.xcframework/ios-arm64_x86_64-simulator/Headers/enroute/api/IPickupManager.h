//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPICKUPMANAGER_H__ENROUTE__GLYMPSE__
#define IPICKUPMANAGER_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
    
/*O*public**/ struct IPickupManager : public ISource
{
    /**
     * Refreshes pickup data. This method is not necessary to call if the app receives PUSH notifications
     * that let it know when new data is available.
     */
    public: virtual void refresh() = 0;
    
    /**
     * Gets the list of all pickups.
     */
    public: virtual GArray<GPickup>::ptr getPickups() = 0;
    
    /**
     * Gets the list of unassigned pickups.
     */
    public: virtual GArray<GPickup>::ptr getUnassignedPickups() = 0;
    
    /**
     * Gets the list of pickups assigned to the current agent.
     */
    public: virtual GArray<GPickup>::ptr getMyPickups() = 0;
    
    /**
     * Look up a pickup using its ID
     */
    public: virtual GPickup findPickupById(const GString& pickupId) = 0;
    
    /**
     * Completes the given pickup
     */
    public: virtual bool completePickup(const GPickup& pickup) = 0;
    
    /**
     * Changes the phase of the given pickup.
     *
     * @param pickup The pickup to change
     * @param phase The new phase to change the operation to. See EnRouteConstants for possible phase properties.
     */
    public: virtual bool setPickupPhase(const GPickup& pickup, const GString& phase) = 0;
    
    /**
     * Attempts to assign ownership of a pickup to the self agent
     */
    public: virtual bool claimPickup(const GPickup& pickup) = 0;
    
    /**
     * Release ownership of a pickup
     */
    public: virtual bool unclaimPickup(const GPickup& pickup) = 0;
    
    /**
     * Send a message to chat room associated with the specified Pickup.
     *
     * @return true if we were able to try sending a message to this Pickup
     */
    public: virtual bool sendMessage(const GPickup& pickup, const GString& message) = 0;
    
    /**
     * Send a message to chat room associated with the specified Pickup. This method can also specify the predefined message used to create the message.
     *
     * @return true if we were able to try sending a message to this Pickup
     */
    public: virtual bool sendMessage(const GPickup& pickup, const GString& message, int64 predefinedMessageId) = 0;
};
    
/*C*/typedef O<IPickupManager> GPickupManager;/**/
    
}
}

#endif // !IPICKUPMANAGER_H__ENROUTE__GLYMPSE__
