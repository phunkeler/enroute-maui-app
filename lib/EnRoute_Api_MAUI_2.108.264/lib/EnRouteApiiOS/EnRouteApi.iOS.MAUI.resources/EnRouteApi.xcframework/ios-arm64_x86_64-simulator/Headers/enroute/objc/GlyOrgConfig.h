//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyOrgConfig : GlyCommon

- (GlyPrimitive*)asPrimitive;

- (NSString*)getBrandingId;

- (BOOL)isSchemaLaunch;

- (BOOL)shouldConfirmDuration;

- (long long int)getDefaultDuration;

- (BOOL)shouldAutoExtend;

- (BOOL)shouldShareSpeed;

- (BOOL)isPhaseSupportEnabled;

- (GlyCommon*)getPhaseConfigMap;

- (GlyArray<NSString*>*)getCompletionPhases;

- (GlyArray<NSString*>*)getChatEnabledPhases;

- (GlyArray<NSString*>*)getChatEnabledTaskPhases;

- (GlyArray<NSString*>*)getPickerDisabledTaskPhases;

- (GlyArray<NSString*>*)getFetchedPickupPhases;

- (BOOL)isSessionModeEnabled;

- (BOOL)shouldKeepLocationAlive;

- (long long int)getEtaQueryPeriod;

- (long long int)getStopDuration;

- (long long int)getActiveSessionTimeout;

- (long long int)getMinimumSessionDuration;

- (BOOL)isDeviceSupportEnabled;

- (NSString*)getSessionControlMode;

- (BOOL)isRoutingEnabled;

- (GlyPrimitive*)getRoutingProfile;

- (long long int)getBaseGeofenceRadius;

- (long long int)getTaskGeofenceRadius;

- (GlyPrimitive*)getAdvancedXoaProfile;

- (BOOL)shouldCompleteArrivedTask;

- (BOOL)shouldCompleteAfterTaskDeparture;

- (GlyPrimitive*)getCompleteAfterDepartureProfile;

- (BOOL)shouldAutoRefresh;

- (long long int)getAutoRefreshPeriod;

- (BOOL)shouldAutoFinish;

- (long long int)getAutoFinishDuration;

- (NSString*)getInitialPhase;

- (NSString*)getArrivalPhase;

- (NSString*)getFinalPhase;

- (BOOL)isVoipEnabled;

- (GlyPrimitive*)getVoipProfile;

- (BOOL)isPickupEnabled;

- (BOOL)shouldFetchIndividualPickups;

- (BOOL)areCardsEnabled;

- (BOOL)areShiftsEnabled;

- (BOOL)areShiftsTiedToAuth;

- (GlyPrimitive*)getTrackingNotificationConfig;

- (NSString*)getDefaultTravelMode;

- (BOOL)showPickupStartedNotifications;

- (BOOL)showPickupArrivalNotifications;

- (BOOL)isRemoteLoggingEnabled;

- (NSString*)getLiveTaskVisibility;

- (BOOL)isSignatureUploadEnabled;

- (BOOL)isPhotoUploadEnabled;

@end