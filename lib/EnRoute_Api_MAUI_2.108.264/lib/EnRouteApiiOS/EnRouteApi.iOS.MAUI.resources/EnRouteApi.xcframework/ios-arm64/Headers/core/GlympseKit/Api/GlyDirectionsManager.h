//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyDirectionsManager : GlyCommon

- (void)enableActivityRecognition:(BOOL)enable;

- (BOOL)isActivityRecognitionEnabled;

- (int)getDeviceActivity;

- (BOOL)isDeviceStationary;

- (void)setTravelMode:(int)mode;

- (void)setTravelModeForTicket:(GlyTicket*)ticket mode:(int)mode;

- (int)getTravelMode;

- (void)setEtaQueryMode:(int)mode;

- (int)getEtaQueryMode;

- (void)setRoutingConfigProvider:(GlyRoutingConfigProvider*)routingConfigProvider;

- (GlyRoutingConfigProvider*)getRoutingConfigProvider;

- (GlyDirections*)queryDirections:(GlyLatLng*)origin destination:(GlyLatLng*)destination travelMode:(int)travelMode directionsProvider:(GlyPrimitive*)directionsProvider;

@end