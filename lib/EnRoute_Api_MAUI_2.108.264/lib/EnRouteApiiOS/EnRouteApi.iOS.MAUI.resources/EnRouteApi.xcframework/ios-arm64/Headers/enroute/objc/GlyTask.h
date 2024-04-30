//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyTask : GlyCommon

- (int)getState;

- (long long int)getId;

- (GlyOperation*)getOperation;

- (NSString*)getDescription;

- (long long int)getAgentId;

- (long long int)getDueTime;

- (long long int)getCompletedTime;

- (GlyTicket*)getTicket;

- (NSString*)getPhase;

- (NSString*)getForeignId;

- (GlyArray<GlyPrimitive*>*)getMetadata;

- (NSString*)getCardId;

- (NSString*)getChatRoomId;

@end