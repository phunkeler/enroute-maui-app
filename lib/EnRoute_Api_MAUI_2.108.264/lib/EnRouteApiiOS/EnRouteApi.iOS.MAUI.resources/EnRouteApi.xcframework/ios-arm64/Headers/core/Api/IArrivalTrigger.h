//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IARRIVALTRIGGER_H__GLYMPSE__
#define IARRIVALTRIGGER_H__GLYMPSE__

namespace Glympse
{
    
/**
 * A trigger that uses the configured arrival provider to fire when the user has arrived at the ticket's destination
 */
/*O*public**/ struct IArrivalTrigger : public ITrigger
{
    /**
     * Gets ticket whose arrival is being tracked by the trigger.
     */
    public: virtual GTicket getMonitoredTicket() = 0;
    
    /**
     * Gets configuration options provided to the arrival provider
     */
    public: virtual GPrimitive getConfig() = 0;
};

/*C*/typedef O< IArrivalTrigger > GArrivalTrigger;/**/
    
}

#endif // !IARRIVALTRIGGER_H__GLYMPSE__
