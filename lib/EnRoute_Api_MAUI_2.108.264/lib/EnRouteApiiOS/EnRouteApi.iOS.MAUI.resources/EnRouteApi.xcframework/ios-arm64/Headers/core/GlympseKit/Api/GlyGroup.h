//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyGroup : GlyCommon< GlyEventSink >

- (NSString*)getId;

- (int)getState;

- (NSString*)getName;

- (BOOL)isOwned;

- (NSString*)getOwnerId;

- (BOOL)isPremium;

- (BOOL)hasPassword;

- (long long int)getExpirationTime;

- (GlyGroupBranding*)getBranding;

- (GlyImage*)getAvatar;

- (GlyArray<GlyGroupMember*>*)getMembers;

- (GlyArray<GlyGroupMember*>*)getMembersWithBool:(BOOL)sorted;

- (GlyArray<GlyInvite*>*)getInvites;

- (void)clearInvites;

- (GlyGroupMember*)findMemberByUserId:(NSString*)userId;

- (void)modify:(NSString*)name avatar:(GlyImage*)avatar;

- (BOOL)send:(GlyInvite*)invite message:(NSString*)message;

- (void)leave;

@end