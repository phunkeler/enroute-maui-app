//------------------------------------------------------------------------------
//
// Copyright (c) 2023 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IDEFINEDROUTE_H__GLYMPSE__
#define IDEFINEDROUTE_H__GLYMPSE__

namespace Glympse
{

/*C*/
struct IDefinedRoute;
typedef O< IDefinedRoute > GDefinedRoute;
/**/

/*O*public**/ struct IDefinedRoute : public IPersistable
{
    public: virtual void load() = 0;
    public: virtual void invalidateCache() = 0;
    public: virtual void clone(const GDefinedRoute& source) = 0;
    public: virtual void applyGeoJSONData(const GPrimitive& geoJSONData) = 0;
    public: virtual void onLoadFailed() = 0;
    public: virtual GString getName() = 0;
    public: virtual GString getPath() = 0;
    public: virtual int32 getState() = 0;
    public: virtual GArray<GLocation>::ptr getRoute() = 0;
    public: virtual GArray<GPlace>::ptr getPlaces() = 0;
};

}

#endif // !IDEFINEDROUTE_H__GLYMPSE__
