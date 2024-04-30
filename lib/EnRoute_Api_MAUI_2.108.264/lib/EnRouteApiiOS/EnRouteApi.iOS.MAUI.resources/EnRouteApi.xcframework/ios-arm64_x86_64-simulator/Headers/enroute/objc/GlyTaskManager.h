//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyTaskManager : GlyCommon< GlySource >

- (void)refresh;

- (GlyArray<GlyTask*>*)getTasks;

- (GlyArray<GlyTask*>*)getPendingTasks;

- (GlyArray<GlyOperation*>*)getActiveOperations;

- (GlyTask*)findTaskById:(long long int)id;

- (GlyOperation*)findOperationByTicket:(GlyTicket*)ticket;

- (BOOL)startTaskWithGlyTask:(GlyTask*)task;

- (BOOL)startTaskWithGlyTask:(GlyTask*)task withInt:(int)duration;

- (BOOL)createTask:(GlyPrimitive*)taskData startAfterCreate:(BOOL)startAfterCreate;

- (BOOL)setTaskPhase:(GlyTask*)task phase:(NSString*)phase;

- (BOOL)completeOperationWithGlyOperation:(GlyOperation*)operation;

- (BOOL)completeOperationWithGlyOperation:(GlyOperation*)operation withInt:(int)reasonCode;

- (void)addOrUpdateMetadataItem:(GlyTask*)task key:(NSString*)key value:(GlyPrimitive*)value;

- (void)setTravelModeForTask:(GlyTask*)task travelMode:(NSString*)travelMode;

- (NSString*)getTravelModeForTask:(GlyTask*)task;

- (BOOL)sendMessageWithGlyTask:(GlyTask*)task withNSString:(NSString*)message;

- (BOOL)sendMessageWithGlyTask:(GlyTask*)task withNSString:(NSString*)message withLongLongInt:(long long int)predefinedMessageId;

- (void)setFetchCompletedTasks:(BOOL)enabled;

- (void)saveManualSortOrder:(GlyPrimitive*)taskIdArray;

- (GlyPrimitive*)getManualSortOrder;

- (void)setAutoStartTasksAfterAutoCompletion:(BOOL)enabled;

@end