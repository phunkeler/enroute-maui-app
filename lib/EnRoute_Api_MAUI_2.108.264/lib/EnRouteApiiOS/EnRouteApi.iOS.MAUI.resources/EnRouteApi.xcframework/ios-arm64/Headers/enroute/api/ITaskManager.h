//------------------------------------------------------------------------------
//
// Copyright (c) 2015 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ITASKMANAGER_H__ENROUTE__GLYMPSE__
#define ITASKMANAGER_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
        
/*O*public**/ struct ITaskManager : public ISource
{
    /**
     * Refreshes task data. This method is not necessary to call if the app receives PUSH notifications
     * that let it know when new data is available.
     */
    public: virtual void refresh() = 0;
    
    /**
     * Gets the list of all tasks.
     */
    public: virtual GArray<GTask>::ptr getTasks() = 0;
    
    /**
     * Gets the list of pending tasks.
     */
    public: virtual GArray<GTask>::ptr getPendingTasks() = 0;
    
    /**
     * Gets the list of active operations.
     */
    public: virtual GArray<GOperation>::ptr getActiveOperations() = 0;
    
    /**
     * Look up a task using its ID
     */
    public: virtual GTask findTaskById(int64 id) = 0;
    
    /**
     * Look up an operation using a GTicket belonging to that operation.
     */
    public: virtual GOperation findOperationByTicket(const GTicket& ticket) = 0;
    
    /**
     * Starts the given task using the default duration
     */
    public: virtual bool startTask(const GTask& task) = 0;
    
    /**
     * Starts the given task using the specified duration.
     */
    public: virtual bool startTask(const GTask& task, int32 duration) = 0;
    
    /**
     * Creates a Task on the server using the data provided
     */
    public: virtual bool createTask(const GPrimitive& taskData, bool startAfterCreate) = 0;
    
    /**
     * Changes the phase of the given task.
     *
     * @param task The task to change
     * @param phase The new phase to change the operation to. See EnRouteConstants for possible phase properties.
     */
    public: virtual bool setTaskPhase(const GTask& task, const GString& phase) = 0;
    
    /**
     * Completes the given operation.
     */
    public: virtual bool completeOperation(const GOperation& operation) = 0;
    
    /**
     * Completes the given operation and supplies a reason code from EnRouteConstants::TASK_COMPLETE_REASON_*
     */
    public: virtual bool completeOperation(const GOperation& operation, int32 reasonCode) = 0;
    
    /**
     * Adds an entry to the provided task's metadata or updates the item if the provided key already exists
     */
    public: virtual void addOrUpdateMetadataItem(const GTask& task, const GString& key, const GPrimitive& value) = 0;
    
   /**
    * Sets the travel mode for the specified Task
    */
    public: virtual void setTravelModeForTask(const GTask& task, const GString& travelMode) = 0;
    
   /**
    * Gets the travel mode for a specified Task
    */
    public: virtual GString getTravelModeForTask(const GTask& task) = 0;
    
    /**
     * Send a message to chat room associated with the specified Task.
     *
     * @return true if we were able to try sending a message to this Task
     */
    public: virtual bool sendMessage(const GTask& task, const GString& message) = 0;
    
    /**
     * Send a message to chat room associated with the specified Task. This method can also specify the predefined message used to create the message.
     *
     * @return true if we were able to try sending a message to this Task
     */
    public: virtual bool sendMessage(const GTask& task, const GString& message, int64 predefinedMessageId) = 0;
    
    /**
     * Set whether or not completed Tasks should be fetched. This must be called before the platform is started in order to fetch
     * completed Tasks in the initial sync. Default setting is false.
     */
    public: virtual void setFetchCompletedTasks(bool enabled) = 0;
    
    /**
     * Store a client-side manual sort order for Tasks by supplying an array of Task Ids in the manually sorted order.
     * The GPrimitive parameter should be a PRIMITIVE_TYPE_ARRAY containing an array of PRIMITIVE_TYPE_LONG
     * Pass in NULL to clear the saved sort order.
     */
    public: virtual void saveManualSortOrder(const GPrimitive& taskIdArray) = 0;
    
    /**
     * @return The stored sort order as specified by applyManualSort. May return NULL which indicates that no manual sort is stored.
     * If available, the returned value is a PRIMITIVE_TYPE_ARRAY containing an array of PRIMITIVE_TYPE_LONG
     */
    public: virtual GPrimitive getManualSortOrder() = 0;
    
    /**
     * Set whether or not the next available Task should go Live after a Task is Auto Completed via Departure
     * In order for this to work well, Task order should be setup using saveManualSortOrder or Tasks should be created
     * so that their Due Times are set in the order they should be started.
     *
     * This value is not persisted between sessions and should be enabled after asking the user if this behavior is desired
     */
    public: virtual void setAutoStartTasksAfterAutoCompletion(bool enabled) = 0;
};
    
/*C*/typedef O<ITaskManager> GTaskManager;/**/
    
}
}

#endif // !ITASKMANAGER_H__ENROUTE__GLYMPSE__
