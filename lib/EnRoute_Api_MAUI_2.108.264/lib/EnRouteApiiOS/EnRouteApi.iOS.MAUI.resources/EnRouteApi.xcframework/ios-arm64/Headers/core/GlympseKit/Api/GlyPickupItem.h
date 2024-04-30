//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPickupItem : GlyCommon

- (NSString*)getId;

- (long long int)getItemId;

- (long long int)getPickupId;

- (long long int)getQuantity;

- (NSString*)getStatus;

- (NSString*)getName;

- (NSString*)getDescription;

- (NSString*)getLocation;

- (NSString*)getAvatarUrl;

- (NSString*)getForeignId;

- (long long int)getCreatedTime;

- (long long int)getUpdatedTime;

@end