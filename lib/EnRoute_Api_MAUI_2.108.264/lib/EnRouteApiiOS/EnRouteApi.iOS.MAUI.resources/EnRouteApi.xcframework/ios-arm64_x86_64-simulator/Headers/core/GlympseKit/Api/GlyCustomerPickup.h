//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyCustomerPickup : GlyCommon

- (NSString*)getId;

- (long long int)getOrgId;

- (NSString*)getInviteCode;

- (long long int)getCreatedTime;

- (long long int)getDueTime;

- (long long int)getCompletedTime;

- (long long int)getArrivedTime;

- (NSString*)getPhase;

- (NSString*)getForeignId;

- (GlyArray<GlyPrimitive*>*)getMetadata;

- (GlyArray<GlyPickupItem*>*)getPickupItems;

- (GlyPickupArrivalData*)getCustomerArrivalData;

- (long long int)getManualEta;

- (NSString*)getChatRoomId;

- (NSString*)getNotes;

- (NSString*)getCustomerName;

- (GlyArray<NSString*>*)getChatEnabledPhases;

- (GlyPickupHours*)getPickupHours;

- (GlyPickupHours*)getStoreHours;

- (NSString*)getOrgForeignId;

- (NSString*)getPickupInstructions;

- (BOOL)hasFeedback;

- (long long int)getFeedbackCreatedTime;

- (long long int)getFeedbackCustomerRating;

- (NSString*)getFeedbackCustomerComment;

- (BOOL)getFeedbackCanContact;

@end