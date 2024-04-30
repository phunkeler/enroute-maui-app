//------------------------------------------------------------------------------
//
//  Copyright (c) 2018 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyPlatform : NSObject
{
}

+ (NSString*)generateDeviceId;

+ (double)random;

+ (int)getContactsSortOrder;

+ (long)getCurrentTU;

+ (long)getThreadId;

+ (NSString*)getThreadName;

+ (NSString*)getRandom4Hex;

+ (NSString*)getAppId:(GlyCommon*)context;

+ (NSString*)getAppName:(GlyCommon*)context;

+ (NSString*)getAppVersion:(GlyCommon*)context;

+ (NSString*)getAppBuildNumber:(GlyCommon*)context;

+ (NSString*)getPushType;

+ (int)getPushAvailability;

+ (NSString*)getOsName;

+ (NSString*)getOsVersion;

+ (NSString*)getDeviceBrand;

+ (NSString*)getDeviceModel;

+ (NSString*)getDeviceName;

+ (NSString*)getSysCtlString:(char*)name defaultString:(NSString*)defaultString;

+ (long)secondsFromGMT;

+ (NSString*)getLanguage;

+ (NSString*)getRegion;

+ (NSString*)timeToString:(long)time;

+ (NSString*)sha1:(char*)data length:(int)length;

+ (NSString*)sha1:(NSString*)text;

+ (NSString*)rsa:(NSString*)key text:(NSString*)text;

+ (NSString*)rsa:(NSString*)text;

+ (NSString*)serverKeyId;

+ (NSString*)lowercaseString:(NSString*)text;

+ (int)compareStrings:(NSString*)text1 text2:(NSString*)text2;

+ (GlyPrimitive*)getPropertyMap;

@end
