//------------------------------------------------------------------------------
//
// Copyright (c) 2020 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IROUTINGCONFIGPROVIDER_H__GLYMPSE__
#define IROUTINGCONFIGPROVIDER_H__GLYMPSE__

namespace Glympse
{
 
/*O*public**/ struct IRoutingConfigProvider : public ICommon
{
    /**
     * Indicates whether routing is enabled/disabled specifically for this ticket
     *
     * @return true if routing is enabled for this ticket
     */
    public: virtual bool isRoutingEnabledForTicket(const GTicket& ticket) = 0;
    
    /**
     * Retrieves a directions provider configuration for a specific ticket
     */
    public: virtual GPrimitive getDirectionsProviderForTicket(const GTicket& ticket) = 0;
    
    /**
     * Retrieves the eta interval for a Ticket if configured. Will return -1 if no interval configuration exists.
     * When no interval is available through this provider, a configuration may be present in api key config
     * or the default value ETA_UPDATE_INTERVAL can be used.
     */
    public: virtual int64 getEtaIntervalForTicket(const GTicket& ticket) = 0;
    
    /**
     * Checks to see if there is a routing configuration for the specified Ticket
     *
     * @return true if this Ticket has a Routing configuration
     */
    public: virtual bool hasRoutingConfig(const GTicket& ticket) = 0;
};
    
/*C*/typedef O< IRoutingConfigProvider > GRoutingConfigProvider;/**/
    
}

#endif // !IROUTINGCONFIGPROVIDER_H__GLYMPSE__
