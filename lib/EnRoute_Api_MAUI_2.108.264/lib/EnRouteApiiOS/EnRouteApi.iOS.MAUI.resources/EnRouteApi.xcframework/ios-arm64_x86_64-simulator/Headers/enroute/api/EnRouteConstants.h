//------------------------------------------------------------------------------
//
// Copyright (c) 2014 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ENROUTECONSTANTS_H__ENROUTE__GLYMPSE__
#define ENROUTECONSTANTS_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
        
/*O*public**/ class EnRouteConstants
{
    /**
     * @name Authentication modes
     */
    
    public: static const int32 AUTH_MODE_NONE = 0;
    public: static const int32 AUTH_MODE_CREDENTIALS = 1;
    public: static const int32 AUTH_MODE_TOKEN = 2;
    
    /**
     * @name Task states
     */
    
    public: static const int32 TASK_STATE_CREATED = 1;
    public: static const int32 TASK_STATE_STARTING = 2;
    public: static const int32 TASK_STATE_STARTED = 3;
    public: static const int32 TASK_STATE_FAILED_TO_START = 4;
    public: static const int32 TASK_STATE_COMPLETED = 5;
    
    /**
     * @name Operation states
     */
    
    public: static const int32 OPERATION_STATE_ACTIVE = 1;
    public: static const int32 OPERATION_STATE_COMPLETING = 2;
    public: static const int32 OPERATION_STATE_COMPLETE = 3;
    public: static const int32 OPERATION_STATE_FAILED_TO_COMPLETE = 4;
    
    /**
     * @name Logout reasons
     */
    
    public: static const int32 LOGOUT_REASON_UNKNOWN = 0;
    public: static const int32 LOGOUT_REASON_USER_ACTION = 1;
    public: static const int32 LOGOUT_REASON_OLD_VERSION = 2;
    public: static const int32 LOGOUT_REASON_INVALID_CREDENTIALS = 3;
    public: static const int32 LOGOUT_REASON_INVALID_TOKEN = 4;
    public: static const int32 LOGOUT_REASON_LOCATION_SERVICES_UNAVAILABLE = 5;
    public: static const int32 LOGOUT_REASON_SERVER_ERROR = 6;
    public: static const int32 LOGOUT_REASON_INVALID_SUBSCRIPTION = 7;
    public: static const int32 LOGOUT_REASON_APP_FLAVOR_MISMATCH = 8;
    
    /**
     * @name Task completion reasons
     */
    public: static const int32 TASK_COMPLETE_REASON_UNKNOWN = 0;
    public: static const int32 TASK_COMPLETE_REASON_MANUAL_ARRIVAL = 1;
    public: static const int32 TASK_COMPLETE_REASON_ARRIVAL_DETECTED = 2;
    public: static const int32 TASK_COMPLETE_REASON_CANCELLED = 3;
    public: static const int32 TASK_COMPLETE_REASON_TICKET_EXPIRED = 4;
    public: static const int32 TASK_COMPLETE_REASON_TASK_REMOVED = 5;
    public: static const int32 TASK_COMPLETE_REASON_DEPARTURE_DETECTED = 6;
    
    /**
     * @name Session completion reasons
     */
    
    /**
     * Completion reason for when a session is completed for an unknown reason.
     */
    public: static const int32 SESSION_COMPLETION_REASON_UNKNOWN = 0x00000000;
    
    /**
     * Completion reason for when a session is completed due to a geofence trigger.
     */
    public: static const int32 SESSION_COMPLETION_REASON_GEOFENCE = 0x00000001;
    
    /**
     * Completion reason for when a session is completed due to manual user action.
     */
    public: static const int32 SESSION_COMPLETION_REASON_USER_ACTION = 0x00000002;
    
    /**
     * @name Ticket extension constants
     */

    public: static const int32 TICKET_EXTEND_CHECK = 300000;
    public: static const int32 TICKET_EXTEND_CUTOFF = 3600000;
    public: static const int32 TICKET_EXTEND_LENGTH = 14400000;
    
    /**
     * @name ETA constants
     */
    
    public: static const int64 MINIMUM_MANUAL_ETA = 300000;
    
    /**
     * @name Diagnostics constants
     */
    
    public: static const int32 DIAGNOSTICS_COLLECTOR_MAX_CAPACITY = 200;
    public: static const int32 DIAGNOSTICS_COLLECTOR_UPLOAD_DELAY_MS = 5000;
    
    /**
     * @name Index constants
     *
     * Used to keep track of indices of stages when the active stage index is outside the normal range.
     */
    
    public: static const int32 INDEX_BEFORE = -2;
    public: static const int32 INDEX_AFTER = -1;
    
    /**
     * @name Session states
     */
    
    public: static const int32 SESSION_STATE_UNKNOWN = 0;
    public: static const int32 SESSION_STATE_CREATED = 1;
    public: static const int32 SESSION_STATE_STARTING = 2;
    public: static const int32 SESSION_STATE_STARTED = 3;
    public: static const int32 SESSION_STATE_COMPLETING = 4;
    public: static const int32 SESSION_STATE_COMPLETED = 5;
    
    /**
     * @name Batch constants
     */
    
    public: static const int32 BATCH_MAXIMUM_ENDPOINTS = 16;
    
    /**
     * @name Minimum auto refresh period
     */
    public: static const int32 MINIMUM_AUTO_REFRESH_PERIOD = 10000;
    
    /**
     * @name Completed Pickup Keep Threshold
     * Pickups older than this value should be discarded
     * Value is 48 hours in ms
     */
    
    public: static const int64 PICKUP_COMPLETED_KEEP_THRESHOLD_MS = 172800000;
    
    /**
     * @name Completed Task Keep Threshold
     * Tasks older than this value should be discarded
     * Value is 48 hours in ms
     */
    
    public: static const int64 TASK_COMPLETED_KEEP_THRESHOLD_MS = 172800000;
    
    /**
     * @name Lookahead value when fetching Tasks with auto-complete enabled
     * This is to prevent fetching Tasks from too far in the future when an Org is setup for auto-start / auto-complete
     * Value is 24 hours in ms
     */
    public: static const int64 TASK_LOOKAHEAD_FOR_AUTO_COMPLETE_MS = 86400000;
    
    /**
     * @name Phase properties
     */
    
    public: static GString PHASE_PROPERTY_KEY()
    {
        return CoreFactory::createString("phase");
    }
    public: static GString PHASE_PROPERTY_UNKNOWN()
    {
        return CoreFactory::createString("unknown");
    }
    public: static GString PHASE_PROPERTY_PRE()
    {
        return CoreFactory::createString("pre");
    }
    public: static GString PHASE_PROPERTY_ETA()
    {
        return CoreFactory::createString("eta");
    }
    public: static GString PHASE_PROPERTY_NEW()
    {
        return CoreFactory::createString("new");
    }
    public: static GString PHASE_PROPERTY_LIVE()
    {
        return CoreFactory::createString("live");
    }
    public: static GString PHASE_PROPERTY_ARRIVED()
    {
        return CoreFactory::createString("arrived");
    }
    public: static GString PHASE_PROPERTY_FEEDBACK()
    {
        return CoreFactory::createString("feedback");
    }
    public: static GString PHASE_PROPERTY_COMPLETING()
    {
        return CoreFactory::createString("completing");
    }
    public: static GString PHASE_PROPERTY_COMPLETED()
    {
        return CoreFactory::createString("completed");
    }
    public: static GString PHASE_PROPERTY_NOT_COMPLETED()
    {
        return CoreFactory::createString("not_completed");
    }
    public: static GString PHASE_PROPERTY_CANCELLED()
    {
        return CoreFactory::createString("cancelled");
    }
    public: static GString PHASE_PROPERTY_READY()
    {
        return CoreFactory::createString("ready");
    }
    public: static GString PHASE_PROPERTY_SCHEDULED()
    {
        return CoreFactory::createString("scheduled");
    }
    public: static GString PHASE_PROPERTY_QUASI()
    {
        return CoreFactory::createString("quasi");
    }
    
    /**
     * @name Pickup remote trigger names
     */
    public: static GString PICKUP_TRIGGER_GEOFENCE()
    {
        return CoreFactory::createString("pickup_geocircle");
    }
    public: static GString PICKUP_TRIGGER_ETA()
    {
        return CoreFactory::createString("pickup_eta");
    }
    
    /**
     * @name Session control modes
     */
    public: static GString SESSION_CONTROL_MODE_MANUAL()
    {
        return CoreFactory::createString("manual");
    }
    
    public: static GString SESSION_CONTROL_MODE_SHUTTLE_SERVICE()
    {
        return CoreFactory::createString("sdk_shuttle_service");
    }
    
    public: static GString SESSION_CONTROL_MODE_FOOD_DELIVERY()
    {
        return CoreFactory::createString("sdk_food_delivery");
    }
    
    /**
     * @name Travel modes
     */
    public: static GString TRAVEL_MODE_DRIVING()
    {
        return CoreFactory::createString("drive");
    }
    
    public: static GString TRAVEL_MODE_WALKING()
    {
        return CoreFactory::createString("walk");
    }
    
    public: static GString TRAVEL_MODE_TRANSIT()
    {
        return CoreFactory::createString("transit");
    }
    
    public: static GString TRAVEL_MODE_BICYCLE()
    {
        return CoreFactory::createString("cycle");
    }
    
    /**
     * @name Confirmation Image modes
     */
    public: static GString CONFIRMATION_IMAGE_NONE()
    {
        return CoreFactory::createString("none");
    }
    
    public: static GString CONFIRMATION_IMAGE_SIGNATURE()
    {
        return CoreFactory::createString("signature");
    }
    
    public: static GString CONFIRMATION_IMAGE_PHOTO()
    {
        return CoreFactory::createString("photo");
    }
    
};
    
}
}

#endif // !ENROUTECONSTANTS_H__ENROUTE__GLYMPSE__
