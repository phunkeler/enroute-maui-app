//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPerson : GlyCommon

- (long long int)getId;

- (NSString*)getFirstName;

- (NSString*)getNormalizedFirstName;

- (NSString*)getLastName;

- (NSString*)getNormalizedLastName;

- (NSString*)getName;

- (NSString*)getNormalizedName;

- (NSString*)getCompany;

- (NSString*)getNormalizedCompany;

- (GlyArray<GlyContact*>*)getContacts;

- (GlyImage*)getAvatar;

- (void)addContact:(GlyContact*)contact;

- (void)sortContacts;

- (void)prepareAvatar;

- (int)getSpan;

@end