//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyOrganization : GlyCommon

- (GlyPrimitive*)asPrimitive;

- (long long int)getId;

- (long long int)getReferrerOrgId;

- (NSString*)getName;

- (NSString*)getAdminEmail;

- (NSString*)getGlympseApiServer;

- (NSString*)getGlympseApiKey;

- (GlyArray<GlyInvite*>*)getModerators;

- (GlyPlace*)getBaseLocation;

- (GlyGlobalConfig*)getGlobalConfig;

- (GlyOrgConfig*)getConfig;

- (GlyArray<GlyPredefinedMessage*>*)getPredefinedMessages;

- (GlyArray<NSString*>*)getTags;

@end