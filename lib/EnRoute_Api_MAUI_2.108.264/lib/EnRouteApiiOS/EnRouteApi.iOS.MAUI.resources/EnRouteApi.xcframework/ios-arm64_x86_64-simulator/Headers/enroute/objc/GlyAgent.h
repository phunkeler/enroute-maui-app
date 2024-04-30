//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyAgent : GlyCommon

- (GlyPrimitive*)asPrimitive;

- (long long int)getId;

- (GlyArray<NSString*>*)getRoles;

- (GlyArray<NSString*>*)getTags;

- (NSString*)getGlympseUsername;

- (NSString*)getName;

- (NSString*)getDisplayName;

- (NSString*)getEmail;

- (NSString*)getGlympseAvatarUrl;

- (BOOL)isOnShift;

- (long long int)getOnShiftModified;

- (NSString*)getDefaultTravelMode;

- (BOOL)isRemoteLoggingEnabled;

@end