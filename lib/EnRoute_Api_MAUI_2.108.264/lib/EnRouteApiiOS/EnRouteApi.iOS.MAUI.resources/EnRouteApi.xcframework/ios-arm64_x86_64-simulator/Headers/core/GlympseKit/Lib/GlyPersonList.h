//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPersonList : GlyCommon< GlyEventSink >

- (GlyArray<GlyPerson*>*)getPeople;

- (int)getPercentage;

@end