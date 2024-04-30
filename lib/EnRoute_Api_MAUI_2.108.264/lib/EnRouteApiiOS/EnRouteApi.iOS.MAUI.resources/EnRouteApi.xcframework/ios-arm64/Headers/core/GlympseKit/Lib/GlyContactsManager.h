//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyContactsManager : GlyCommon

- (void)start:(GlyGlympse*)glympse;

- (void)stop;

- (void)setActive:(BOOL)active;

- (void)addProvider:(GlyCommon*)provider;

- (void)refresh;

- (GlyPersonList*)getPersonList:(NSString*)constraint flags:(int)flags;

- (void)abort:(GlyPersonList*)list;

- (void)findPeopleForInvites:(GlyArray<GlyInvite*>*)invites ev:(GlyEvent*)ev;

- (void)clearSearch;

- (void)clearLookup;

- (void)clear;

@end