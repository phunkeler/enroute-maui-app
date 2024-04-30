//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyEnRouteHealthCheck : GlyCommon

- (GlyArray<GlyHealthReport*>*)getEnRouteHealthReport;

- (GlyHealthReport*)checkLoggedInState;

- (GlyHealthReport*)checkSharingCompliance;

@end