//------------------------------------------------------------------------------
//
//  Copyright (c) 2016 Glympse Inc. All rights reserved.
//
//------------------------------------------------------------------------------

@interface GlyConsentManager : GlyCommon< GlyEventSink >

- (NSString*)getConsentState;

- (BOOL)hasConsent;

- (void)grantConsent:(NSString*)consentType partnerId:(long long int)partnerId;

- (void)revokeConsent:(long long int)partnerId;

- (void)exemptFromConsent:(BOOL)isExempt;

@end