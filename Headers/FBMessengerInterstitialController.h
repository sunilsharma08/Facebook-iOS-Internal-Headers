//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"

@class FBSyncStore, FBUserSession, NSString;
@protocol FBMessengerInterstitialViewConfiguration, FBMessengerPromotionProperties;

@interface FBMessengerInterstitialController : NSObject <FBSessionClassProvidable>
{
    id <FBMessengerPromotionProperties> _appProperties;
    FBUserSession *_session;
    FBSyncStore *_syncStore;
    id <FBMessengerInterstitialViewConfiguration> _viewConfiguration;
}

- (void).cxx_destruct;
- (id)_experimentAnalyticsInfoForView:(id)arg1;
- (id)_experimentAnalyticsInfoForLocation:(int)arg1;
- (void)didRedirectToMessengerFromLocation:(int)arg1;
- (void)interstitialViewDidSelectRedirect:(id)arg1;
- (void)interstitialViewDidSelectInstall:(id)arg1;
- (void)interstitialViewDidSelectLearnMore:(id)arg1;
- (void)interstitialViewDidAppear:(id)arg1;
- (id)learnMoreViewController:(id)arg1;
- (void)configureInterstitialView:(id)arg1 withContext:(id)arg2;
- (int)interstitialType;
- (BOOL)shouldSuppressChatHeads;
- (BOOL)isInDiode;
- (id)initWithAppProperties:(id)arg1 syncStore:(id)arg2 session:(id)arg3 viewConfiguration:(id)arg4;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

