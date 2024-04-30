//------------------------------------------------------------------------------
//
// Copyright (c) 2014 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IAGENT_H__ENROUTE__GLYMPSE__
#define IAGENT_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
        
/*O*public**/ struct IAgent : public ICommon
{
    /**
     * Gets the primitive representation of this agent.
     */
    public: virtual GPrimitive asPrimitive() = 0;
    
    /**
     * Gets the unique id of the task.
     */
    public: virtual int64 getId() = 0;
    
    /**
     * Gets the list of roles this agent has.
     */
    public: virtual GArray<GString>::ptr getRoles() = 0;
    
    /**
     * Gets the list of tags this agent has.
     */
    public: virtual GArray<GString>::ptr getTags() = 0;
    
    /**
     * Gets the username of the Glympse user associated with this agent.
     */
    public: virtual GString getGlympseUsername() = 0;
    
    /**
     * Gets the name of this agent.
     */
    public: virtual GString getName() = 0;
    
    /**
     * Gets the display name of this Agent.
     */
    public: virtual GString getDisplayName() = 0;
    
    /**
     * Gets the email address of this agent.
     */
    public: virtual GString getEmail() = 0;
    
    /**
     * Gets the avatar of the Glympse user associated with this agent.
     */
    public: virtual GString getGlympseAvatarUrl() = 0;
    
    /**
     * Gets the current shift status of this agent.
     */
    public: virtual bool isOnShift() = 0;
    
    /**
     * Gets the timestamp of the last change in shift status. That is, if the user is on shift,
     * this timestamp is when that shift began.
     */
    public: virtual int64 getOnShiftModified() = 0;
    
    /**
     * Gets the default travel mode for this Agent.
     * Will return NULL if no travel mode has been configured.
     */
    public: virtual GString getDefaultTravelMode() = 0;
    
    /**
     @return true if remote logging should be turned on for this Agent
     */
    public: virtual bool isRemoteLoggingEnabled() = 0;
};
    
/*C*/typedef O<IAgent> GAgent;/**/
    
}
}

#endif // !IAGENT_H__ENROUTE__GLYMPSE__
