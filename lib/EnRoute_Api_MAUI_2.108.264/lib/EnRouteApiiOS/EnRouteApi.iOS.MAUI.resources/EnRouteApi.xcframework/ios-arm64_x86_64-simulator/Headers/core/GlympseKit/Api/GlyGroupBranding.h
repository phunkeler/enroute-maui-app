//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyGroupBranding : GlyCommon

- (GlyArray<GlyDefinedRoute*>*)getDefinedRoutes;

- (NSString*)getPrimaryColor;

- (NSString*)getSecondaryColor;

- (NSString*)getTertiaryColor;

- (NSString*)getHeaderColor;

- (GlyImage*)getAvatar;

- (BOOL)isAvatarAppliedToMembers;

- (GlyImage*)getLogo;

- (NSString*)getHeaderHref;

- (NSString*)getTagNickname;

- (BOOL)isNicknameAppliedToMembers;

- (BOOL)shouldDisplayEntireRoute;

- (GlyArray<GlyGroupAd*>*)getAds;

@end