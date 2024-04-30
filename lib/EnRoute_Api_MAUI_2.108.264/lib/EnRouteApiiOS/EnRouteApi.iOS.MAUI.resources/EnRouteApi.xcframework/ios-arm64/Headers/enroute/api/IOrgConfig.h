//------------------------------------------------------------------------------
//
// Copyright (c) 2014 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IORGCONFIG_H__ENROUTE__GLYMPSE__
#define IORGCONFIG_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
        
/*O*public**/ struct IOrgConfig : public ICommon
{
    /**
     * @return GPrimitive representation of this object.
     */
    public: virtual GPrimitive asPrimitive() = 0;
    
    /**
     * @return GString representation of the branding id for this org.
     */
    public: virtual GString getBrandingId() = 0;
    
    /**
     * @return true if schema launch is to be used for this org.
     */
    public: virtual bool isSchemaLaunch() = 0;
    
    /**
     * @return true, if G-Timer should be presented when operation is started.
     */
    public: virtual bool shouldConfirmDuration() = 0;

    /**
     * @return Default operation duration.
     */
    public: virtual int64 getDefaultDuration() = 0;
    
    /**
     * @return true, if EnRouteManager should continuously extend all tickets.
     */
    public: virtual bool shouldAutoExtend() = 0;
    
    /**
     * @return true, if driver's speed should be shared.
     */
    public: virtual bool shouldShareSpeed() = 0;
    
    /**
     * @return true, if Phases are enabled for this organization
     */
    public: virtual bool isPhaseSupportEnabled() = 0;
    
    /**
     * @return Hashtable mapping phases to GPhaseConfigs
     */
    public: virtual GHashtable<GString, GPhaseConfig>::ptr getPhaseConfigMap() = 0;
    
    /**
     * @return Array of possible completion phases
     */
    public: virtual GArray<GString>::ptr getCompletionPhases() = 0;
    
    /**
     * @return Array of phases where chat is enabled for Pickups
     */
    public: virtual GArray<GString>::ptr getChatEnabledPhases() = 0;
    
    /**
     * @return Array of phases where chat is enabled for Tasks
     */
    public: virtual GArray<GString>::ptr getChatEnabledTaskPhases() = 0;
    
    /**
     * @return Array of phases where manually advancing to this phase by the Agent is disabled.
     * Phases are considered enabled by default unless specifically disabled in the PhaseConfig.
     */
    public: virtual GArray<GString>::ptr getPickerDisabledTaskPhases() = 0;
    
    /**
     * @return Array of Pickup phases that the client should fetch
     */
    public: virtual GArray<GString>::ptr getFetchedPickupPhases() = 0;
    
    /**
     * @return true, if organization opperates in Session mode
     */
    public: virtual bool isSessionModeEnabled() = 0;
    
    /**
     * @return true, if location services should be kept alive in the background (iOS only)
     */
    public: virtual bool shouldKeepLocationAlive() = 0;
    
    /**
     * @return The period between each query for an eta update.
     */
    public: virtual int64 getEtaQueryPeriod() = 0;
    
    /**
     * @return Duration for each stop
     */
    public: virtual int64 getStopDuration() = 0;
    
    /**
     * @return Timeout for the active session
     */
    public: virtual int64 getActiveSessionTimeout() = 0;
    
    /**
     * @return Minimum duration that a session can last before it can be completed.
     * This value is honored by the BaseLocationArrived endpoint to filter out false positive
     * arrivals
     */
    public: virtual int64 getMinimumSessionDuration() = 0;

    /**
     * @return true, if Devices are enabled for this organization
     */
    public: virtual bool isDeviceSupportEnabled() = 0;
    
    /**
     * @return Session control mode, determining what logic should control session progression.
     */
    public: virtual GString getSessionControlMode() = 0;
    
    /**
     * @return true, if routing is enabled.
     */
    public: virtual bool isRoutingEnabled() = 0;
    
    /**
     * @return Configuration blob to be used the DirectionsManager
     */
    public: virtual GPrimitive getRoutingProfile() = 0;
    
    /**
     * @return Radius to use for base location enter and exit geofences.
     */
    public: virtual int64 getBaseGeofenceRadius() = 0;
    
    /**
     * @return Radius to use for task arrival geofences.
     */
    public: virtual int64 getTaskGeofenceRadius() = 0;
    
    /**
     * @return Config values for advance xoa configuration
     */
    public: virtual GPrimitive getAdvancedXoaProfile() = 0;
    
    /**
     * @return true, if the task should be completed when the arrival geofence triggers
     */
    public: virtual bool shouldCompleteArrivedTask() = 0;
    
    /**
     * @return true, if the task should be completed after departure from the destination is detected
     */
    public: virtual bool shouldCompleteAfterTaskDeparture() = 0;
    
    /**
     * @return Config values for complete after departure
     */
    public: virtual GPrimitive getCompleteAfterDepartureProfile() = 0;
    
    /**
     * @return true, if session list should be periodically refreshed
     */
    public: virtual bool shouldAutoRefresh() = 0;
    
    /**
     * @return if enabled, how often to auto refresh to session list
     */
    public: virtual int64 getAutoRefreshPeriod() = 0;

    /**
     * @return true, if tasks in arrived state should be auto-finished
     */
    public: virtual bool shouldAutoFinish() = 0;
    
    /**
     * @return Duration a task must be in arrived state before if is auto finished, if auto finish is enabled.
     */
    public: virtual int64 getAutoFinishDuration() = 0;
    
    /**
     * @return Get initial phase
     */
    public: virtual GString getInitialPhase() = 0;
    
    /**
     * @return Get arrival phase
     */
    public: virtual GString getArrivalPhase() = 0;
    
    /**
     * @return Get final phase
     */
    public: virtual GString getFinalPhase() = 0;
    
    /**
     * @return Determine if a voip calling is enabled for this org.
     */
    public: virtual bool isVoipEnabled() = 0;
    
    /**
     * @return The provider specific voip configuration options.
     */
    public: virtual GPrimitive getVoipProfile() = 0;
    
    /**
     * @return true if pickups are enabled for this org.
     */
    public: virtual bool isPickupEnabled() = 0;
    
    /**
     * @return true if individual pickups should be fetched after fetching all pickups. This is only necessary if
     * the app needs pickup properties not returned in the GetPickups call. For example pickup items and legacy messaging.
     * If not all pickups need to be fetched during initial sync, the host application should use PickupManager->refreshPickup(pickupId) instead.
     */
    public: virtual bool shouldFetchIndividualPickups() = 0;
    
    /**
     * @return The org is configured to support cards api
     */
    public: virtual bool areCardsEnabled() = 0;
    
    /**
     * @return true if shifts are enabled for this org.
     */
    public: virtual bool areShiftsEnabled() = 0;
    
    /**
     * @return true if shifts are tied to authentication
     */
    public: virtual bool areShiftsTiedToAuth() = 0;
    
    /**
     * @return The configuration for displaying a notification while tracking (Android only)
     */
    public: virtual GPrimitive getTrackingNotificationConfig() = 0;
    
    /**
     * @return The default travel mode for this org
     */
    public: virtual GString getDefaultTravelMode() = 0;
    
    /**
     * @return true if Notifications should be shown when a Pickup customer
     * begins sharing
     */
    public: virtual bool showPickupStartedNotifications() = 0;
    
    /**
     * @return true if Notifications should be shown when a customer is near
     * or arriving
     */
    public: virtual bool showPickupArrivalNotifications() = 0;
    
    /**
     @return true if remote logging should be turned on for this Org
     */
    public: virtual bool isRemoteLoggingEnabled() = 0;
    
    /**
     * @return gets the Visibility setting for the Live phase if it's configured. NULL if not configured
     */
    public: virtual GString getLiveTaskVisibility() = 0;
    
    /**
     * @return true if signature capture should be attempted after arrival
     */
    public: virtual bool isSignatureUploadEnabled() = 0;

    /**
     * @return true if photo capture should be attempted after arrival
     */
    public: virtual bool isPhotoUploadEnabled() = 0;
};
    
/*C*/typedef O<IOrgConfig> GOrgConfig;/**/
        
}
}

#endif // !IORGCONFIG_H__ENROUTE__GLYMPSE__
