//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyCommonSink : NSObject

#ifdef __cplusplus
- (id)initWithSink:(const Glympse::GEventSink&)eventSink;
#endif

- (BOOL)addListener:(id<GlyEventListener>)listener;

- (BOOL)removeListener:(id<GlyEventListener>)listener;

- (GlyCommon *)getContext:(long long int)key;

@end
