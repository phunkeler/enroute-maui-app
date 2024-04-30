//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyEnRouteEvents : NSObject
{
}

+ (int)LISTENER_ENROUTE_MANAGER;

+ (int)LISTENER_TASKS;

+ (int)LISTENER_AGENTS;

+ (int)LISTENER_SESSIONS;

+ (int)LISTENER_ACTIVE_AGENTS;

+ (int)LISTENER_ETA_PLANNER;

+ (int)LISTENER_PICKUPS;

+ (int)ENROUTE_MANAGER_LOGIN_COMPLETED;

+ (int)ENROUTE_MANAGER_LOGGED_OUT;

+ (int)ENROUTE_MANAGER_STARTED;

+ (int)ENROUTE_MANAGER_STOPPED;

+ (int)ENROUTE_MANAGER_SYNCED;

+ (int)ENROUTE_MANAGER_SHOW_NOTIFICATION;

+ (int)ENROUTE_MANAGER_AUTHENTICATION_NEEDED;

+ (int)ENROUTE_MANAGER_ORG_CONFIG_UPDATED;

+ (int)ENROUTE_MANAGER_SELF_AGENT_UPDATED;

+ (int)ENROUTE_MANAGER_SHIFT_STARTED;

+ (int)ENROUTE_MANAGER_SHIFT_COMPLETED;

+ (int)ENROUTE_MANAGER_SHIFT_START_FAILED;

+ (int)ENROUTE_MANAGER_SHIFT_COMPLETE_FAILED;

+ (int)ENROUTE_MANAGER_LOCATION_ACCURACY_UPDATED;

+ (int)ENROUTE_MANAGER_ORG_PREDEFINED_MESSAGES_UPDATED;

+ (int)TASKS_TASK_LIST_CHANGED;

+ (int)TASKS_TASK_STARTED;

+ (int)TASKS_TASK_START_FAILED;

+ (int)TASKS_OPERATION_COMPLETED;

+ (int)TASKS_OPERATION_COMPLETION_FAILED;

+ (int)TASKS_TASK_PHASE_CHANGED;

+ (int)TASKS_OPERATION_TICKET_CHANGED;

+ (int)TASKS_TASK_METADATA_UPDATE_SUCCEEDED;

+ (int)TASKS_TASK_METADATA_UPDATE_FAILED;

+ (int)TASKS_TASK_TRAVEL_MODE_CHANGED;

+ (int)TASKS_TASK_DURATION_CHANGED;

+ (int)TASKS_TASK_DESTINATION_CHANGED;

+ (int)TASKS_TASK_TRANSFERRED;

+ (int)TASKS_TASK_CHAT_MESSAGES_CHANGED;

+ (int)TASKS_TASK_ROUTE_CHANGED;

+ (int)TASKS_TASK_CREATED;

+ (int)TASKS_TASK_CREATE_FAILED;

+ (int)ETA_PLANNER_ETAS_UPDATED;

+ (int)AGENTS_AGENT_LIST_CHANGED;

+ (int)AGENTS_AGENT_CREATED;

+ (int)AGENTS_AGENT_CREATION_FAILED;

+ (int)AGENTS_AGENT_UPDATED;

+ (int)AGENTS_AGENT_UPDATE_FAILED;

+ (int)SESSIONS_SESSION_LIST_CHANGED;

+ (int)SESSIONS_SESSION_STARTED;

+ (int)SESSIONS_SESSION_START_FAILED;

+ (int)SESSIONS_SESSION_COMPLETED;

+ (int)SESSIONS_SESSION_COMPLETION_FAILED;

+ (int)SESSIONS_SESSION_ACTIVE_TASK_CHANGED;

+ (int)SESSIONS_SESSION_ACTIVE_TASK_PHASE_CHANGED;

+ (int)ACTIVE_AGENTS_AGENT_LIST_CHANGED;

+ (int)ACTIVE_AGENTS_AGENT_REGISTERED;

+ (int)PICKUPS_PICKUP_LIST_CHANGED;

+ (int)PICKUPS_PICKUP_ACCEPTED;

+ (int)PICKUPS_PICKUP_COMPLETED;

+ (int)PICKUPS_PICKUP_FAILED_TO_COMPLETE;

+ (int)PICKUPS_PICKUP_PHASE_UPDATED;

+ (int)PICKUPS_PICKUP_PHASE_UPDATE_FAILED;

+ (int)PICKUPS_PICKUP_ASSIGNED;

+ (int)PICKUPS_PICKUP_ASSIGN_FAILED;

+ (int)PICKUPS_PICKUP_TICKET_AVAILABLE;

+ (int)PICKUPS_PICKUP_MESSAGES_CHANGED;

+ (int)PICKUPS_PICKUP_CHANGED;

+ (int)PICKUPS_PICKUP_CHAT_MESSAGES_CHANGED;

@end