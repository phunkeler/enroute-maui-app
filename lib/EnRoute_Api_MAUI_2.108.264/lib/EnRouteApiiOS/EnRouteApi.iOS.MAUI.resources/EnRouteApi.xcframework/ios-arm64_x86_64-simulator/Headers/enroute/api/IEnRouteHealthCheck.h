//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef IENROUTEHEALTHCHECK_H__ENROUTE__GLYMPSE__
#define IENROUTEHEALTHCHECK_H__ENROUTE__GLYMPSE__

namespace Glympse
{
namespace EnRoute
{
    
/*O*public**/ struct IEnRouteHealthCheck : public ICommon
{
    
    public: virtual GArray<GHealthReport>::ptr getEnRouteHealthReport() = 0;
    
    public: virtual GHealthReport checkLoggedInState() = 0;
    
    public: virtual GHealthReport checkSharingCompliance() = 0;
};

/*C*/typedef O<IEnRouteHealthCheck> GEnRouteHealthCheck;/**/
    
}
}

#endif // !IENROUTEHEALTHCHECK_H__ENROUTE__GLYMPSE__
