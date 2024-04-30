//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyContact : GlyCommon

- (int)getType;

- (int)getSortRank;

- (NSString*)getLabel;

- (NSString*)getAddress;

- (NSString*)getNormalizedAddress;

@end