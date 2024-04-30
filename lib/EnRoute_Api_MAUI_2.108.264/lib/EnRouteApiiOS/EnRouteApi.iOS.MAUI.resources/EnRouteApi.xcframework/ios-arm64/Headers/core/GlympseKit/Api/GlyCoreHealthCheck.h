//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyCoreHealthCheck : GlyCommon

- (GlyArray<GlyHealthReport*>*)getCoreHealthReport;

- (GlyHealthReport*)checkLocationAuth;

- (GlyHealthReport*)checkNotificationAuth;

- (GlyHealthReport*)checkBatteryOptimization;

- (GlyHealthReport*)checkLocationAccuracyAuth;

- (GlyHealthReport*)checkMobileDataAvailability;

- (GlyHealthReport*)checkRestrictBackgroundStatus;

- (GlyHealthReport*)checkIsWifiScanningEnabled;

- (GlyHealthReport*)checkIsBluetoothScanningEnabled;

@end