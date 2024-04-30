//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyChatManager : GlyCommon< GlyEventSink >

- (BOOL)isSynced;

- (BOOL)isConnected;

- (void)registerChannel:(NSString*)roomId;

- (void)unregisterChannel:(NSString*)roomId;

- (GlyChatRoom*)getChatRoom:(NSString*)roomId;

- (GlyArray<GlyChatRoom*>*)getChatRoomList;

- (BOOL)fetchPredefinedMessages:(NSString*)orgId;

- (GlyArray<GlyPredefinedMessage*>*)getPredefinedMessages:(NSString*)orgId;

- (void)sendMessageWithNSString:(NSString*)message withNSString:(NSString*)roomId;

- (void)sendMessageWithNSString:(NSString*)message withNSString:(NSString*)roomId withLongLongInt:(long long int)predefinedMessageId;

- (void)setRoomAsRead:(NSString*)roomId;

@end