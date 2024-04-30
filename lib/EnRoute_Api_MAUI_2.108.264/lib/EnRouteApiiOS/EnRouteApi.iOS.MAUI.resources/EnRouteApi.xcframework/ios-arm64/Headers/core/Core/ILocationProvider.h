//------------------------------------------------------------------------------
//
// Copyright (c) 2012 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ILOCATIONPROVIDER_H__GLYMPSE__
#define ILOCATIONPROVIDER_H__GLYMPSE__

namespace Glympse 
{
 
/**
 * Host application implements ILocationProvider to supply Glympse API with location information
 * aquired from proprietary source (external location API or service).
 * 
 * Location manager expects to receive updates (through ILocationListener interface) between
 * calls to start() and stop() methods. 
 *
 * Location manager never pulls location points on its own. It always relies on location provider
 * to call ILocationListener#locationChanged(const GLocation&), when new location point is available.
 *
 * Here is how to set external provider. It is only allowed to call IGlympse#getLocationManager()
 * method after starting the platform (by calling IGlympse#start()).
 *
 * @code
 * GGlympse glympse = ...;
 * glympse->start();
 * glympse->getLocationManager()->setLocationProvider(new CustomLocationProvider());
 * @endcode
 *
 * Custom location provider implementation can optionally support location profiles dictated
 * by location manager. Profiles are applied through applyProfile(). 
 */ 
/*O*public**/ struct ILocationProvider : public ICommon
{
    /**
     * Attaches location listener to the provider.
     */
    public: virtual void setLocationListener(const GLocationListener& locationListener) = 0;

    /**
     * Starts the provider.
     */
    public: virtual void start() = 0;

    /**
     * Stops the provider.
     */
    public: virtual void stop() = 0;
    
    /**
     * Checks if provider is started. 
     */    
    public: virtual bool isStarted() = 0;
    
    /**
     * Returns the last known location acquired by underlying location provider, 
     * or NULL if no location has ever been acquired from the device.
     */
    public: virtual GLocation getLastKnownLocation() = 0;
    
    /**
     * Gets the current accuracy authorization for this provider
     * This method should return a value included in CoreConstants::LOCATION_ACCURACY_AUTH_*
     */
    public: virtual int32 getLocationAccuracyAuth() = 0;
    
    /**
     * Gets the current location permission granted to the app
     * This method should return a value from CoreConstants::LOCATION_PERMISSION_*
     */
    public: virtual int32 getLocationPermission() = 0;
    
    /**
     * Checks the platform's location services setting to see if location services are currently enabled.
     * Where possible this value represents the device's location settings that are applied to all apps.
     */
    public: virtual bool isLocationServicesEnabled() = 0;
    
    /**
     * Tells provider to apply specified profile. 
     *
     * Location provider can either access profile properties or apply configuration based
     * on profile ID (see ILocationProfile#getProfile()).
     *
     * ILocationProfile#isEnabled() property should be ignored by the provider. 
     * Location manager starts and stops location provider independently from applying profiles.
     * 
     * Location provider should be able to handle NULL value, which means that 
     * provider should restore its state to original settings (best accuracy in most cases). 
     *
     * @param profile Location profile object or NULL.
     */
    public: virtual void applyProfile(const GLocationProfile& profile) = 0;
};
    
/*C*/typedef O< ILocationProvider > GLocationProvider;/**/
    
}

#endif // !ILOCATIONPROVIDER_H__GLYMPSE__
