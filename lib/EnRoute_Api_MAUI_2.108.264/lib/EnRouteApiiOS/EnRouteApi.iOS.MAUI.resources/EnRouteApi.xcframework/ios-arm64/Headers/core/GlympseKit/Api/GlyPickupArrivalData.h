//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPickupArrivalData : GlyCommon

- (NSString*)getStallLabel;

- (NSString*)getLicensePlate;

- (NSString*)getCarMake;

- (NSString*)getCarModel;

- (NSString*)getCarColor;

- (BOOL)isPickupInStore;

@end