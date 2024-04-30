//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@protocol GlyGlympsePartner< NSObject >

- (GlyCommon*)getContextHolder;

- (GlyRecipientsManager*)getRecipientsManager;

- (GlyCommon*)getMessagesManager;

- (GlyCommon*)getDefaultMessagesManager;

- (GlyPlacesManager*)getPlacesManager;

- (GlyCommon*)getDiagnosticsManager;

- (GlyCommon*)getImageCache;

- (void)applyInitialProfile:(NSString*)nickname avatar:(NSString*)avatar;

- (void)overrideDebugLoggingLevel:(int)level;

- (int)getDebugLoggingLevel;

@end