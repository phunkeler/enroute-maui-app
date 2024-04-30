//------------------------------------------------------------------------------
//
// Copyright (c) 2015 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IPHASECONFIG_H__ENROUTE__GLYMPSE__
#define IPHASECONFIG_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
    
/*O*public**/ struct IPhaseConfig : public ICommon
{
    /**
     * @return true, if location is visible for this phase.
     */
    public: virtual bool isVisible() = 0;
    
    /**
     * @return visibility setting for this phase. One of "visible", "cloaked", or "hidden"
     * Constant values are in GlympseConstants as TICKET_VISIBILITY_LOCATION_*
     */
    public: virtual GString getVisibility() = 0;
    
    /**
     * @return true, if eta should be cleared when this phase is set.
     */
    public: virtual bool shouldClearEta() = 0;
    
    /**
     * @return true, if this phase should be available in the task flow.
     */
    public: virtual bool enabledInFlow() = 0;
    
    /**
     * @return List of metadata primitives to set when this phase is applied.
     */
    public: virtual GArray<GPrimitive>::ptr getMetadata() = 0;
    
    /**
     * @return true, if there is a routing configuration specific to this phase.
     * This is an important property to check before using any other routing properties in this class
     * because it indicates that there is a routing configuration for this phase and we're not providing
     * default values.
     *
     * For example isRoutingEnabled() will return false if there is no routing configuration AND it will
     * return false if there is a routing configuration and routing for this phase is disabled. The first case
     * should cause the platform to use the global routing config, the second case should disable routing.
     */
    public: virtual bool hasRoutingConfiguration() = 0;
    
    /**
     * @return true, if routing configuration is enabled specifically for this phase.
     * @return false, if there is no routing config for this phase or it was disabled in the config.
     * Check hasRoutingConfiguration() to see which one.
     */
    public: virtual bool isRoutingEnabled() = 0;
    
    /**
     * @return GPrimitive routing profile for this phase.
     */
    public: virtual GPrimitive getRoutingProfile() = 0;
    
    /**
     * @return int64 how frequently to perform routing queries
     */
    public: virtual int64 getEtaQueryPeriod() = 0;
    
    /**
     * @return true if chat is enabled for this phase
     */
    public: virtual bool isChatEnabled() = 0;

};

/*C*/typedef O<IPhaseConfig> GPhaseConfig;/**/
    
}
}

#endif // !IPHASECONFIG_H__ENROUTE__GLYMPSE__
