//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyAction : GlyCommon< GlyPersistable >

- (NSString*)getType;

- (NSString*)getUrl;

- (GlyPrimitive*)getHeaders;

- (NSString*)getMethod;

- (GlyPrimitive*)getJson;

@end