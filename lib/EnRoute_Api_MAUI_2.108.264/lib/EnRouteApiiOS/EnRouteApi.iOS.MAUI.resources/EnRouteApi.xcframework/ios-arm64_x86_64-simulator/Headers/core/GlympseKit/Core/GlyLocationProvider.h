//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@protocol GlyLocationProvider< NSObject >

- (void)setLocationListener:(id<GlyLocationListener>)locationListener;

- (void)start;

- (void)stop;

- (BOOL)isStarted;

- (GlyLocation*)getLastKnownLocation;

- (int)getLocationAccuracyAuth;

- (int)getLocationPermission;

- (BOOL)isLocationServicesEnabled;

- (void)applyProfile:(GlyLocationProfile*)profile;

@end