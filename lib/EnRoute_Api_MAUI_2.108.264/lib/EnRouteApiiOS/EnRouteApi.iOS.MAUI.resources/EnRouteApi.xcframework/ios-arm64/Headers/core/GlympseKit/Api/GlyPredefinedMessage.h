//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPredefinedMessage : GlyCommon< GlyPersistable >

- (long long int)getId;

- (long long int)getCreatedTime;

- (NSString*)getMessage;

@end