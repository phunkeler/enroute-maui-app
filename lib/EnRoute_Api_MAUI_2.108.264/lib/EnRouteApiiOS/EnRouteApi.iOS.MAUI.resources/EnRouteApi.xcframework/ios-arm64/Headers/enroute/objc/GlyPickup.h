//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPickup : GlyCommon

- (NSString*)getId;

- (NSString*)getDescription;

- (NSString*)getInviteCode;

- (long long int)getCreatedTime;

- (long long int)getDueTime;

- (long long int)getCompletedTime;

- (long long int)getArrivedTime;

- (NSString*)getPhase;

- (NSString*)getForeignId;

- (GlyArray<GlyPrimitive*>*)getMetadata;

- (long long int)getAgentId;

- (NSString*)getCustomerName;

- (GlyTicket*)getCustomerTicket;

- (GlyPickupArrivalData*)getCustomerArrivalData;

- (GlyArray<GlyOrderItem*>*)getOrderItems;

- (GlyArray<GlyCustomerMessage*>*)getMessages;

- (long long int)getManualEta;

- (NSString*)getChatRoomId;

- (NSString*)getNotes;

@end