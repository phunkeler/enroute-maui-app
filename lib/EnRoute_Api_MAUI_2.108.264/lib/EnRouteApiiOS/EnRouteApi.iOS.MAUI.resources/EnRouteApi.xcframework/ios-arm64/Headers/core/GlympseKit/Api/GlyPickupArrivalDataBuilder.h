//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPickupArrivalDataBuilder : GlyCommon

- (void)setStallLabel:(NSString*)stallLabel;

- (void)setLicensePlate:(NSString*)licensePlate;

- (void)setCarMake:(NSString*)carMake;

- (void)setCarModel:(NSString*)carModel;

- (void)setCarColor:(NSString*)carColor;

- (void)setPickupInStore:(BOOL)isPickupInStore;

- (GlyPickupArrivalData*)getPickupArrivalData;

@end