//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IDEPARTURETRIGGER_H__GLYMPSE__
#define IDEPARTURETRIGGER_H__GLYMPSE__

namespace Glympse
{
    
/**
 * A trigger that uses the configured departure provider to fire when the user has departed a location
 */
/*O*public**/ struct IDepartureTrigger : public ITrigger
{
    /**
     * Gets location that is being tracked by the trigger.
     */
    public: virtual GPlace getLocation() = 0;
    
    /**
     * Gets configuration options provided to the departure provider
     */
    public: virtual GPrimitive getConfig() = 0;
};

/*C*/typedef O< IDepartureTrigger > GDepartureTrigger;/**/
    
}

#endif // !IDEPARTURETRIGGER_H__GLYMPSE__

