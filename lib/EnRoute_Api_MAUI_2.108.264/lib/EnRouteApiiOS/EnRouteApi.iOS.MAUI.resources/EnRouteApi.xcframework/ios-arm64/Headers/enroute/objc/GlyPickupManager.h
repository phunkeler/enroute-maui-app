//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPickupManager : GlyCommon< GlySource >

- (void)refresh;

- (GlyArray<GlyPickup*>*)getPickups;

- (GlyArray<GlyPickup*>*)getUnassignedPickups;

- (GlyArray<GlyPickup*>*)getMyPickups;

- (GlyPickup*)findPickupById:(NSString*)pickupId;

- (BOOL)completePickup:(GlyPickup*)pickup;

- (BOOL)setPickupPhase:(GlyPickup*)pickup phase:(NSString*)phase;

- (BOOL)claimPickup:(GlyPickup*)pickup;

- (BOOL)unclaimPickup:(GlyPickup*)pickup;

- (BOOL)sendMessageWithGlyPickup:(GlyPickup*)pickup withNSString:(NSString*)message;

- (BOOL)sendMessageWithGlyPickup:(GlyPickup*)pickup withNSString:(NSString*)message withLongLongInt:(long long int)predefinedMessageId;

@end