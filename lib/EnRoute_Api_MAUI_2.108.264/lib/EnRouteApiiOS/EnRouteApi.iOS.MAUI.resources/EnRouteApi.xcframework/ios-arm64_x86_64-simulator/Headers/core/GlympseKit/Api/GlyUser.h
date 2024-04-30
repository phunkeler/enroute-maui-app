//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyUser : GlyCommon< GlyEventSink >

- (NSString*)getId;

- (BOOL)isSelf;

- (NSString*)getNickname;

- (GlyImage*)getAvatar;

- (GlyImage*)getLogo;

- (NSString*)getPrimaryColor;

- (NSString*)getSecondaryColor;

- (GlyLocation*)getLocation;

- (GlyTicket*)getActive;

- (GlyTicket*)getActiveStandalone;

- (GlyArray<GlyTicket*>*)getTickets;

- (GlyTicket*)findTicketByInviteCode:(NSString*)code;

- (BOOL)setNickname:(NSString*)nickname;

- (BOOL)setAvatar:(GlyDrawable*)avatar;

- (BOOL)isUploadingAvatar;

- (BOOL)stopWatching;

@end