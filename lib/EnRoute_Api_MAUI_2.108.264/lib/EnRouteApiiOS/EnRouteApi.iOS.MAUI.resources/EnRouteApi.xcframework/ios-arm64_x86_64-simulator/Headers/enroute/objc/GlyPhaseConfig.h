//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPhaseConfig : GlyCommon

- (BOOL)isVisible;

- (NSString*)getVisibility;

- (BOOL)shouldClearEta;

- (BOOL)enabledInFlow;

- (GlyArray<GlyPrimitive*>*)getMetadata;

- (BOOL)hasRoutingConfiguration;

- (BOOL)isRoutingEnabled;

- (GlyPrimitive*)getRoutingProfile;

- (long long int)getEtaQueryPeriod;

- (BOOL)isChatEnabled;

@end