//------------------------------------------------------------------------------
//
// Copyright (c) 2018 Glympse Inc.  All rights reserved.
//
//------------------------------------------------------------------------------

#ifndef ICONSENT_MANAGER_H__GLYMPSE__
#define ICONSENT_MANAGER_H__GLYMPSE__

namespace Glympse
{
    
/**
 * Manages the status of user granted consent to collect data
 *
 * Corresponding events are fired when status is updated
 * See GE::LISTENER_CONSENT for details.
 */
/*O*public**/ struct IConsentManager : public IEventSink
{
    public: virtual GString getConsentState() = 0;
    
    /**
     * Convenience method for checking that getConsentState() == GlympseConstants::USER_CONSENT_YES
     */
    public: virtual bool hasConsent() = 0;
    
    public: virtual void grantConsent(const GString& consentType, int64 partnerId) = 0;
    
    public: virtual void revokeConsent(int64 partnerId) = 0;
    
    /**
     * In some cases it may be necessary for an app to declare that its users are exempt
     * from giving consent.
     *
     * Next: Currently this is only handled locally but at some point
     * it may be enforced server-side. At that point this method will need to be able
     * to inform the server that this user is exempt.
     */
    public: virtual void exemptFromConsent(bool isExempt) = 0;
};
    
/*C*/typedef O< IConsentManager > GConsentManager;/**/
    
}

#endif // !ICONSENT_MANAGER_H__GLYMPSE__
