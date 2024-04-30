//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyRecipientsManager : GlyCommon

- (void)start:(GlyGlympse*)glympse;

- (void)stop;

- (GlyArray<GlyInvite*>*)getRecipients;

- (GlyArray<GlyInvite*>*)getRecipientsWithNSString:(NSString*)constraint;

- (void)addRecipient:(GlyInvite*)recipient;

- (BOOL)hasRecipient:(GlyInvite*)recipient;

- (void)removeRecipient:(int)index;

@end