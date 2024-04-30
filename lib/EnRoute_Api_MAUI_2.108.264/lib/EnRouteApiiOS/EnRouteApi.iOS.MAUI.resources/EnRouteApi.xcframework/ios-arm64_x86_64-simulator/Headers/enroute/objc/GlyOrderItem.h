//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyOrderItem : GlyCommon

- (NSString*)getId;

- (NSString*)getName;

- (NSString*)getStatus;

- (long long int)getQuantity;

- (NSString*)getLocation;

- (NSString*)getForeignId;

- (NSString*)getAvatarUrl;

@end