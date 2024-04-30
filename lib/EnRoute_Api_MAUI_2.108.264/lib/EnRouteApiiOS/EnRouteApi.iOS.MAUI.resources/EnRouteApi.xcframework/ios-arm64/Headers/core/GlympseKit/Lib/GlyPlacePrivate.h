//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@protocol GlyPlacePrivate< GlyPersistable >

- (NSString*)getAddressLine1;

- (NSString*)getAddressLine2;

- (NSString*)getPhoneNumber;

- (GlyImage*)getImage;

- (void)setName:(NSString*)name;

- (void)setLocation:(double)latitude longitude:(double)longitude;

- (void)setAddressLine1:(NSString*)addressLine1;

- (void)setAddressLine2:(NSString*)addressLine2;

- (void)setPhoneNumber:(NSString*)phoneNumber;

- (void)setImage:(GlyDrawable*)drawable;

@end