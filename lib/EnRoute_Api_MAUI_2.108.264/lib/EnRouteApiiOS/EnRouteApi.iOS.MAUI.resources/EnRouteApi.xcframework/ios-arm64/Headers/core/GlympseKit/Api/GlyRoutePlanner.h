//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyRoutePlanner : GlyCommon< GlyEventSink >

- (void)addStop:(GlyPlace*)place;

- (void)addStops:(GlyArray<GlyPlace*>*)places;

- (void)removeStop:(GlyPlace*)place;

- (void)moveStop:(int)fromIndex toIndex:(int)toIndex;

- (GlyArray<GlyLocation*>*)getRoute;

- (GlyArray<GlyPlace*>*)getStops;

@end