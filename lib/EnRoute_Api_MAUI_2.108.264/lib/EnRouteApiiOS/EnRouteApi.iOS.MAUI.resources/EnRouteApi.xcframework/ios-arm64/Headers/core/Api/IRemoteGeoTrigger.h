//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IREMOTEGEOTRIGGER_H__GLYMPSE__
#define IREMOTEGEOTRIGGER_H__GLYMPSE__

namespace Glympse
{
    
/**
 * Extends IGeoTrigger with additional fields for remote triggers
 */
/*O*public**/ struct IRemoteGeoTrigger : public IGeoTrigger
{
    /**
     * Gets invite code associated with the trigger.
     */
    public: virtual GString getInviteCode() = 0;
};
    
/*C*/typedef O< IRemoteGeoTrigger > GRemoteGeoTrigger;/**/
    
}

#endif // !IREMOTEGEOTRIGGER_H__GLYMPSE__
