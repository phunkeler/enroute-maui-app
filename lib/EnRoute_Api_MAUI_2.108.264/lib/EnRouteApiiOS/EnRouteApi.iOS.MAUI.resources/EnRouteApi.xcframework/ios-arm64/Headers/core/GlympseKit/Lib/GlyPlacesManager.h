//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPlacesManager : GlyCommon

- (void)load:(GlyCommon*)contextHolder prefix:(NSString*)prefix;

- (void)start:(GlyGlympse*)glympse;

- (void)stop;

- (void)save;

- (GlyArray<GlyPlace*>*)getPlaces;

- (void)addPlace:(GlyPlace*)place;

- (BOOL)hasPlace:(GlyPlace*)place;

- (void)removePlace:(int)index;

@end