//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyRoutingConfigProvider : GlyCommon

- (BOOL)isRoutingEnabledForTicket:(GlyTicket*)ticket;

- (GlyPrimitive*)getDirectionsProviderForTicket:(GlyTicket*)ticket;

- (long long int)getEtaIntervalForTicket:(GlyTicket*)ticket;

- (BOOL)hasRoutingConfig:(GlyTicket*)ticket;

@end