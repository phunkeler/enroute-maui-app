//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyConfig : GlyCommon< GlyEventSink >

- (void)setExpireOnArrival:(int)mode;

- (int)getExpireOnArrival;

- (void)setXoaProfile:(GlyPrimitive*)profile;

- (GlyPrimitive*)getXoaProfile;

- (void)setDeleteAfterComplete:(int)mode;

- (int)getDeleteAfterComplete;

- (void)allowLocationSharing:(BOOL)allow;

- (BOOL)isSharingLocation;

- (void)allowSpeedSharing:(BOOL)allow;

- (BOOL)isSharingSpeed;

- (void)setAutoWatchPublicGroup:(BOOL)watch;

- (BOOL)isPublicGroupAutoWatched;

- (void)setTrackTrimmingEnabled:(BOOL)enabled;

- (BOOL)isTrackTrimmingEnabled;

- (long long int)getTrackTrimLength;

- (long long int)getAccountCreationTime;

- (long long int)getInviteLifetime;

- (long long int)getMaximumTicketDuration;

- (int)getPostRatePeriod;

- (int)getMaximumNicknameLength;

- (NSString*)getDeviceId;

- (BOOL)setDirectionsProvider:(GlyPrimitive*)provider;

- (GlyPrimitive*)getDirectionsProvider;

- (BOOL)setPlacesProvider:(GlyPrimitive*)provider;

- (GlyPrimitive*)getPlacesProvider;

- (void)setCardsEnabled:(BOOL)enabled;

- (BOOL)areCardsEnabled;

- (void)setPoisEnabled:(BOOL)enabled;

- (BOOL)arePoisEnabled;

- (void)addCustomSupportedServer:(NSString*)customServer;

- (void)setDiagnosticDataEnabled:(BOOL)enabled;

- (BOOL)isDiagnosticDataEnabled;

- (void)setRemoteLoggingEnabled:(BOOL)enabled;

- (BOOL)isRemoteLoggingEnabled;

- (void)setActiveSharingNotificationMessage:(NSString*)message;

- (NSString*)getActiveSharingNotificationMessage;

- (void)setLocalChatNotificationsEnabled:(BOOL)enabled;

- (BOOL)isLocalChatNotificationsEnabled;

- (void)setEnterpriseFlag:(BOOL)isEnterprise;

- (BOOL)isEnterprise;

- (void)setEtaUpdateInterval:(long long int)interval;

- (long long int)getEtaUpdateInterval;

- (GlyPrimitive*)getContents;

- (void)save;

- (void)setDebug:(BOOL)debug;

- (BOOL)isDebug;

@end