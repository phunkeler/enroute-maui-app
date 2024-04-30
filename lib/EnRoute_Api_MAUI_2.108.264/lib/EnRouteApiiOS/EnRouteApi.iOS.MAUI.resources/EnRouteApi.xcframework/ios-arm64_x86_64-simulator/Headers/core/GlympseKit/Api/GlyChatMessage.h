//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyChatMessage : GlyCommon< GlyPersistable >

- (long long int)getId;

- (long long int)getCreatedTime;

- (NSString*)getContents;

- (NSString*)getAuthor;

- (long long int)getSequenceId;

- (BOOL)isAgent;

@end