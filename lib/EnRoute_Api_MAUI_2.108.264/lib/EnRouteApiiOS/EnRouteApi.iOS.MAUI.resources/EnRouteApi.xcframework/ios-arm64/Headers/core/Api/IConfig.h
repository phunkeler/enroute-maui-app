//------------------------------------------------------------------------------
//
// Copyright (c) 2012 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICONFIG_H__GLYMPSE__
#define ICONFIG_H__GLYMPSE__

namespace Glympse 
{

/**
 * IConfig provides a way to configure behavior of Glympse API. 
 * All settings are persisted locally. So you can only set it once. 
 */ 
/*O*public**/ struct IConfig : public IEventSink
{
    /**
     * @name Basic Properties
     *
     * Setters and getters for the most commonly used properties.
     */
    
    /**
     * Overrides default platform behaviour on arrival to the destination.
     * This feature is only applied to outgoing tickets with destination specified. 
     * Glympse API is capable to notify ticket subscriber, that user is arrived
     * to destination (via GE::TICKET_ARRIVED). There is also a chance to expire
     * ticket automatically. See GC::EXPIRE_ON_ARRIVAL_* for more details. 
     *
     * You should consider referring this method, when there are no outgoing tickets.
     * It is not strict requirement, but it allows to achieve best results.  
     *
     * Glympse API operates in GC::EXPIRE_ON_ARRIVAL_NOTIFY mode by default.
     *
     * @param mode New expire on arrival mode. 
     */     
    public: virtual void setExpireOnArrival(int32 mode) = 0;
        
    /**
     * Gets current expire on arrival mode.
     *
     * @return Returns current mode. 
     */ 
    public: virtual int32 getExpireOnArrival() = 0;
    
    /**
     * Sets profile for customizing XoA logic.
     *
     * @param profile GPrimitive containing configuration values for XoA.
     */
    public: virtual void setXoaProfile(const GPrimitive& profile) = 0;
    
    /**
     * Gets current profile for customized XoA logic.
     *
     * @return Returns GPrimitive containing configuration values for customized XoA.
     */
    public: virtual GPrimitive getXoaProfile() = 0;
    
    /**
     * Modify default platform behavior by causing a ticket to delete after completion.
     * This only applies to outgoing tickets.
     *
     * See GlympseConstants::DELETE_AFTER_COMPLETE_* for modes
     */
    public: virtual void setDeleteAfterComplete(int32 mode) = 0;
    
    /**
     * Gets the current delete after complete mode.
     */
    public: virtual int32 getDeleteAfterComplete() = 0;
    
    /**
     * Enables location sharing. This feature is enabled by default. 
     * In practice, this option does not affect anything except location updates.
     * Users will still be able to send tickets even if location sharing is disabled. 
     */
    public: virtual void allowLocationSharing(bool allow) = 0;    
        
    /**
     * Checks whether location sharing is enabled. 
     */ 
    public: virtual bool isSharingLocation() = 0;    
        
    /**
     * Enables speed sharing. This feature is enabled by default. 
     * In practice, this option does not affect anything except speed property of outgoing locations.
     */    
    public: virtual void allowSpeedSharing(bool allow) = 0;    
    
    /**
     * Checks whether speed sharing is enabled. 
     */    
    public: virtual bool isSharingSpeed() = 0;
    
    /**
     * Enables watching public group automatically after sending invite to it.
     */
    public: virtual void setAutoWatchPublicGroup(bool watch) = 0;
    
    /**
     * Check whether public group will be watched automatically after sending invite to it.
     */
    public: virtual bool isPublicGroupAutoWatched() = 0;
    
    /**
     * Enables automatic trimming of GTrack length.
     */
    public: virtual void setTrackTrimmingEnabled(bool enabled) = 0;
    
    /**
     * Check whether automatic trimming of the length of a GTrack is enabled.
     */
    public: virtual bool isTrackTrimmingEnabled() = 0;
    
    /**
     * Return length of time (in milliseconds) that tracks will be trimmined to. This value is affected by wether normal track trimming is enabled or not.
     */
    public: virtual int64 getTrackTrimLength() = 0;
    
    /**
     * Returns the unix date at which the stored user account was created. 
     * This method may return 0 if the value has not been set by the server.
     */
    public: virtual int64 getAccountCreationTime() = 0;
    
    /**
     * Returns amount of time during which invite can be decoded.
     */
    public: virtual int64 getInviteLifetime() = 0;
    
    /**
     * Returns the maximum duration of a ticket in milliseconds. Tickets created with a duration in excess
     * of this value will fail. Tickets modified with a duration in excess of this value will be capped at
     * this maximum ticket duration.
     */
    public: virtual int64 getMaximumTicketDuration() = 0;
    
    /**
     * Returns the duration of transition period between "watched" and "not watched" states in milliseconds. 
     */
    public: virtual int32 getPostRatePeriod() = 0;

    /**
     * Returns the maximum length of a user's nickname, in characters. Longer nicknames will be truncated
     * to this number of characters.
     */
    public: virtual int32 getMaximumNicknameLength() = 0;

    /**
     * Returns Glympse specific device ID. This value is associated with 
     * the device, user account and application bundle lifetime. The value changes if
     * - user account is wiped;
     * - application is uninstalled. 
     */
    public: virtual GString getDeviceId() = 0;
    
    /**
     * Overrides default directions provider configuration (for directions calculated on sender side).
     */
    public: virtual bool setDirectionsProvider(const GPrimitive& provider) = 0;
    
    /**
     * Returns directions provider configuration.
     */
    public: virtual GPrimitive getDirectionsProvider() = 0;
    
    /**
     * Overrides default places provider configuration (for searching with PlaceSearchEngine)
     */
    public: virtual bool setPlacesProvider(const GPrimitive& provider) = 0;
    
    /**
     * Returns places provider configuration.
     */
    public: virtual GPrimitive getPlacesProvider() = 0;
    
    /**
     * Sets whether card handling should be enabled.
     */
    public: virtual void setCardsEnabled(bool enabled) = 0;

    /**
     * Returns if cards are enabled.
     */
    public: virtual bool areCardsEnabled() = 0;
    
    /**
     * Sets whether POI handling should be enabled.
     */
    public: virtual void setPoisEnabled(bool enabled) = 0;
    
    /**
     * Returns if POIs are enabled.
     */
    public: virtual bool arePoisEnabled() = 0;
    
    /**
     * This method is used to specify a custom Server or Scheme that a client may wish to use when
     * parsing messages for Glympse invite codes.
     *
     * For example a company "ServTech" may be setup to send invites using the format
     * https://servtech.com/[invite-code].
     *
     * In this situation, they should pass the string "servtech.com/" to this method.
     * Afterwards, when glympse->openUrl() or glympse->extractInviteCodes() is called
     * Glympse will be able to properly recognize these urls as Glympse invites.
     */
    public: virtual void addCustomSupportedServer(const GString& customServer) = 0;
    
    /**
     * Sets whether or not Diagnostic Data is logged (default true)
     */
    public: virtual void setDiagnosticDataEnabled(bool enabled) = 0;
    
    /**
     * Returns if Diagnostic data is enabled
     */
    public: virtual bool isDiagnosticDataEnabled() = 0;
    
    /**
     * Sets whether or not to upload client logs. Must be called before the platform is started to have an effect on the current session
     */
    public: virtual void setRemoteLoggingEnabled(bool enabled) = 0;
    
    /**
     * Returns if remote loggings are enabled
     */
    public: virtual bool isRemoteLoggingEnabled() = 0;
    
    /**
     * Sets the message to use for Active sharing notifications (Android only)
     */
    public: virtual void setActiveSharingNotificationMessage(const GString& message) = 0;
    
    /**
     * Gets the message that is currently set for Active Sharing notifications (Android only)
     */
    public: virtual GString getActiveSharingNotificationMessage() = 0;
    
    /**
     * Sets whether or not local chat notifications are enabled (default false)
     */
    public: virtual void setLocalChatNotificationsEnabled(bool enabled) = 0;
    
    /**
     * Returns if local chat notifications are enabled
     */
    public: virtual bool isLocalChatNotificationsEnabled() = 0;
    
    /**
     * Used to inform the SDK that it's running in an Enterprise app.
     * Typically this is set to true only by En Route SDK. (default false)
     */
    public: virtual void setEnterpriseFlag(bool isEnterprise) = 0;
    
    /**
     * Returns if the enterprise flag has been set
     */
    public: virtual bool isEnterprise() = 0;
    
    /**
     * Sets the amount of time between ETA updates in milliseconds
     */
    public: virtual void setEtaUpdateInterval(int64 interval) = 0;
    
    /**
     * Returns the amount of time between ETA updates in milliseconds
     */
    public: virtual int64 getEtaUpdateInterval() = 0;

    /**
     * @name Advanced Section
     *
     * Advanced controls for configuration management.
     */
    
    /**
     * Provides access to raw collection of all configurable properties.
     *
     * Returned object provides read/write access to the collection.
     * Platform maintains and relies on very specific structure of the data stored in this collection.
     * Host application is not allowed neither to remove nore to make any changes to existing properties.
     * 
     * Host application is allowed to add its own section as it is shown below.
     * <code>
     * /ROOT
     *     /app
     * </code>
     *
     * Made changes do not get persisted right away. save() method is exposed to
     * host application for the purpose of saving changes on demand.
     *
     * @return GPrimitive representation of underlying storage.
     */
    public: virtual GPrimitive getContents() = 0;
    
    /**
     * Saves in-memory representation of platform configuration to persistent storage.
     */
    public: virtual void save() = 0;
    
    /**
     * @name Debug Section
     *
     * Tools for manipulating debug settings.
     */
    
    /**
     * Enables debug mode. 
     * Most debugging features will not be enabled right away. It is required to restart 
     * platform to leverage advantages of debug mode.
     */      
    public: virtual void setDebug(bool debug) = 0;    
        
    /**
     * Checks whether debug mode is enabled. 
     */ 
    public: virtual bool isDebug() = 0;    
};
    
/*C*/typedef O< IConfig > GConfig;/**/
    
}

#endif // !ICONFIG_H__GLYMPSE__
