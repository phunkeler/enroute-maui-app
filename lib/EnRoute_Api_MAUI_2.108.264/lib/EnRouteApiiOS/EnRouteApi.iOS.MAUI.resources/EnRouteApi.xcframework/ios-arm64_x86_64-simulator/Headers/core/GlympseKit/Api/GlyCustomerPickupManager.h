//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyCustomerPickupManager : GlyCommon< GlyEventSink >

- (void)setInviteCode:(NSString*)inviteCode;

- (void)setForeignId:(NSString*)foreignId;

- (BOOL)setManualETA:(long long int)eta;

- (BOOL)arrived;

- (BOOL)holdPickup;

- (BOOL)sendArrivalData:(GlyPickupArrivalData*)arrivalData;

- (BOOL)sendFeedback:(int)customerRating customerComment:(NSString*)customerComment canContactCustomer:(BOOL)canContactCustomer;

- (GlyCustomerPickup*)getCurrentPickup;

- (BOOL)sendChatMessage:(NSString*)message;

- (GlyArray<GlyChatMessage*>*)getChatMessages;

@end