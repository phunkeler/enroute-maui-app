//------------------------------------------------------------------------------
//
// Copyright (c) 2021 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICOREHEALTHCHECK_H__GLYMPSE__
#define ICOREHEALTHCHECK_H__GLYMPSE__

namespace Glympse
{
    
/*O*public**/ struct ICoreHealthCheck : public ICommon
{
    public: virtual GArray<GHealthReport>::ptr getCoreHealthReport() = 0;
    
    public: virtual GHealthReport checkLocationAuth() = 0;
    
    public: virtual GHealthReport checkNotificationAuth() = 0;
    
    public: virtual GHealthReport checkBatteryOptimization() = 0;
    
    public: virtual GHealthReport checkLocationAccuracyAuth() = 0;
        
    public: virtual GHealthReport checkMobileDataAvailability() = 0;
        
    public: virtual GHealthReport checkRestrictBackgroundStatus() = 0;
    
    public: virtual GHealthReport checkIsWifiScanningEnabled() = 0;
    
    public: virtual GHealthReport checkIsBluetoothScanningEnabled() = 0;
};
    
/*C*/typedef O< ICoreHealthCheck > GCoreHealthCheck;/**/
    
}

#endif // !ICOREHEALTHCHECK_H__GLYMPSE__
