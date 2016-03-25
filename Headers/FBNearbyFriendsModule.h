//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNativeAppModule.h"

#import "FBAppService-Protocol.h"
#import "FBNuxProvider-Protocol.h"

@class FBDelayServicesOnColdStartExperimentContext, FBFNInlineUpsellDataSource, FBLocationAccessManager, FBMQTTClientManager, FBMQTTListener, FBNearbyFriendsSettingsMismatchBadgeExperimentContext, FBUserSession, NSSet, NSString;

@interface FBNearbyFriendsModule : FBNativeAppModule <FBAppService, FBNuxProvider>
{
    FBMQTTClientManager *_mqttClientManager;
    unsigned int _visibleControllerCount;
    FBMQTTListener *_friendsLocationListener;
    FBUserSession *_session;
    FBFNInlineUpsellDataSource *_upsellDataSource;
    FBDelayServicesOnColdStartExperimentContext *_delayServiceOnColdStartExperimentContext;
    FBNearbyFriendsSettingsMismatchBadgeExperimentContext *_badgeExperimentContext;
    FBLocationAccessManager *_locationAccessManager;
}

- (void).cxx_destruct;
- (BOOL)_shouldShowAlertInBookmark;
- (BOOL)_shouldShowUpsellInBookmark;
- (BOOL)_didPassBookmarkUpsellGK;
- (void)_subscribeMQTTIfNeeded;
- (void)_unsubscribeMQTTIfNeeded;
- (void)_didViewControllerStateChanged:(id)arg1;
- (void)signalAppServiceToHandleInitialSessionIdle;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (id)services;
- (id)_createSettingsDataController;
- (id)_createDataController;
- (void)_didFinishAuraNUXNotification:(id)arg1;
- (id)_viewControllerForNearbyFriendsSettingsURLSegue;
- (id)_viewControllerForLocationSettingsURLSegue;
- (id)_viewControllerForURLSegue;
- (id)URLSegues;
- (id)supportedKeys;
- (id)nuxPresenters;
- (id)viewControllerForMenuItem:(id)arg1;
- (id)defaultMenuItem;
- (BOOL)menuItemShouldShowUpsell:(id)arg1;
- (BOOL)menuItemShouldShowAlert:(id)arg1;
- (BOOL)shouldClearBookmarkCountOnTap;
- (id)ID;
- (void)dealloc;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

