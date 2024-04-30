//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyEnRouteConstants : NSObject
{
}

+ (int)AUTH_MODE_NONE;

+ (int)AUTH_MODE_CREDENTIALS;

+ (int)AUTH_MODE_TOKEN;

+ (int)TASK_STATE_CREATED;

+ (int)TASK_STATE_STARTING;

+ (int)TASK_STATE_STARTED;

+ (int)TASK_STATE_FAILED_TO_START;

+ (int)TASK_STATE_COMPLETED;

+ (int)OPERATION_STATE_ACTIVE;

+ (int)OPERATION_STATE_COMPLETING;

+ (int)OPERATION_STATE_COMPLETE;

+ (int)OPERATION_STATE_FAILED_TO_COMPLETE;

+ (int)LOGOUT_REASON_UNKNOWN;

+ (int)LOGOUT_REASON_USER_ACTION;

+ (int)LOGOUT_REASON_OLD_VERSION;

+ (int)LOGOUT_REASON_INVALID_CREDENTIALS;

+ (int)LOGOUT_REASON_INVALID_TOKEN;

+ (int)LOGOUT_REASON_LOCATION_SERVICES_UNAVAILABLE;

+ (int)LOGOUT_REASON_SERVER_ERROR;

+ (int)LOGOUT_REASON_INVALID_SUBSCRIPTION;

+ (int)LOGOUT_REASON_APP_FLAVOR_MISMATCH;

+ (int)TASK_COMPLETE_REASON_UNKNOWN;

+ (int)TASK_COMPLETE_REASON_MANUAL_ARRIVAL;

+ (int)TASK_COMPLETE_REASON_ARRIVAL_DETECTED;

+ (int)TASK_COMPLETE_REASON_CANCELLED;

+ (int)TASK_COMPLETE_REASON_TICKET_EXPIRED;

+ (int)TASK_COMPLETE_REASON_TASK_REMOVED;

+ (int)TASK_COMPLETE_REASON_DEPARTURE_DETECTED;

+ (int)SESSION_COMPLETION_REASON_UNKNOWN;

+ (int)SESSION_COMPLETION_REASON_GEOFENCE;

+ (int)SESSION_COMPLETION_REASON_USER_ACTION;

+ (int)TICKET_EXTEND_CHECK;

+ (int)TICKET_EXTEND_CUTOFF;

+ (int)TICKET_EXTEND_LENGTH;

+ (long long int)MINIMUM_MANUAL_ETA;

+ (int)DIAGNOSTICS_COLLECTOR_MAX_CAPACITY;

+ (int)DIAGNOSTICS_COLLECTOR_UPLOAD_DELAY_MS;

+ (int)INDEX_BEFORE;

+ (int)INDEX_AFTER;

+ (int)SESSION_STATE_UNKNOWN;

+ (int)SESSION_STATE_CREATED;

+ (int)SESSION_STATE_STARTING;

+ (int)SESSION_STATE_STARTED;

+ (int)SESSION_STATE_COMPLETING;

+ (int)SESSION_STATE_COMPLETED;

+ (int)BATCH_MAXIMUM_ENDPOINTS;

+ (int)MINIMUM_AUTO_REFRESH_PERIOD;

+ (long long int)PICKUP_COMPLETED_KEEP_THRESHOLD_MS;

+ (long long int)TASK_COMPLETED_KEEP_THRESHOLD_MS;

+ (long long int)TASK_LOOKAHEAD_FOR_AUTO_COMPLETE_MS;

+ (NSString*)PHASE_PROPERTY_KEY;

+ (NSString*)PHASE_PROPERTY_UNKNOWN;

+ (NSString*)PHASE_PROPERTY_PRE;

+ (NSString*)PHASE_PROPERTY_ETA;

+ (NSString*)PHASE_PROPERTY_NEW;

+ (NSString*)PHASE_PROPERTY_LIVE;

+ (NSString*)PHASE_PROPERTY_ARRIVED;

+ (NSString*)PHASE_PROPERTY_FEEDBACK;

+ (NSString*)PHASE_PROPERTY_COMPLETING;

+ (NSString*)PHASE_PROPERTY_COMPLETED;

+ (NSString*)PHASE_PROPERTY_NOT_COMPLETED;

+ (NSString*)PHASE_PROPERTY_CANCELLED;

+ (NSString*)PHASE_PROPERTY_READY;

+ (NSString*)PHASE_PROPERTY_SCHEDULED;

+ (NSString*)PHASE_PROPERTY_QUASI;

+ (NSString*)PICKUP_TRIGGER_GEOFENCE;

+ (NSString*)PICKUP_TRIGGER_ETA;

+ (NSString*)SESSION_CONTROL_MODE_MANUAL;

+ (NSString*)SESSION_CONTROL_MODE_SHUTTLE_SERVICE;

+ (NSString*)SESSION_CONTROL_MODE_FOOD_DELIVERY;

+ (NSString*)TRAVEL_MODE_DRIVING;

+ (NSString*)TRAVEL_MODE_WALKING;

+ (NSString*)TRAVEL_MODE_TRANSIT;

+ (NSString*)TRAVEL_MODE_BICYCLE;

+ (NSString*)CONFIRMATION_IMAGE_NONE;

+ (NSString*)CONFIRMATION_IMAGE_SIGNATURE;

+ (NSString*)CONFIRMATION_IMAGE_PHOTO;

@end