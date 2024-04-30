//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyChatRoom : GlyCommon< GlyPersistable >

- (long long int)getCreatedTime;

- (NSString*)getName;

- (GlyArray<GlyChatMessage*>*)getChatMessages;

- (long long int)getSequenceNumber;

- (long long int)getLastReadSequenceNumber;

@end