//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyDefinedRoute : GlyCommon< GlyPersistable >

- (void)load;

- (void)invalidateCache;

- (void)clone:(GlyDefinedRoute*)source;

- (void)applyGeoJSONData:(GlyPrimitive*)geoJSONData;

- (void)onLoadFailed;

- (NSString*)getName;

- (NSString*)getPath;

- (int)getState;

- (GlyArray<GlyLocation*>*)getRoute;

- (GlyArray<GlyPlace*>*)getPlaces;

@end