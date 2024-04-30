//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyCoreFactory : NSObject
{
}

+ (GlyDrawable*)createDrawable;

+ (GlyDrawable*)createDrawableWithNSString:(NSString*)resource withInt:(int)rotation;

+ (GlyStorageUnit*)createStorage:(NSObject*)context name:(NSString*)name;

+ (GlyPrimitive*)createPrimitiveWithInt:(int)type;

+ (GlyPrimitive*)createPrimitiveWithDouble:(double)value;

+ (GlyPrimitive*)createPrimitiveWithLongLongInt:(long long int)value;

+ (GlyPrimitive*)createPrimitiveWithBool:(BOOL)value;

+ (GlyPrimitive*)createPrimitiveWithNSString:(NSString*)value;

+ (GlyPrimitive*)createPrimitive;

+ (GlyLocation*)createLocationWithLongLongInt:(long long int)time withDouble:(double)latitude withDouble:(double)longitude withFloat:(float)speed withFloat:(float)bearing withFloat:(float)altitude withFloat:(float)haccuracy withFloat:(float)vaccuracy;

+ (GlyLocation*)createLocationWithDouble:(double)latitude withDouble:(double)longitude;

+ (GlyRegion*)createRegion:(double)latitude longitude:(double)longitude radius:(double)radius rid:(NSString*)rid;

+ (id<GlyLocationProvider>)createLocationProvider:(NSObject*)context;

+ (GlyLocationProfileBuilder*)createLocationProfileBuilder:(int)profileId;

+ (NSString*)getOsName;

+ (void)enableSignalHandlers:(BOOL)enable;

+ (BOOL)areSignalHandlersEnabled;

@end
