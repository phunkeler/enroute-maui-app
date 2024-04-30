//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IREMOTETRIGGER_H__GLYMPSE__
#define IREMOTETRIGGER_H__GLYMPSE__

namespace Glympse
{
    
/**
 * Extends ITrigger with additional fields for remote triggers
 */
/*O*public**/ struct IRemoteTrigger : public ITrigger
{
    /**
     * Gets invite code associated with the trigger.
     */
    public: virtual GString getInviteCode() = 0;
};
    
/*C*/typedef O< IRemoteTrigger > GRemoteTrigger;/**/
    
}

#endif // !IREMOTETRIGGER_H__GLYMPSE__
