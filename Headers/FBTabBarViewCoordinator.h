//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedSwitcherDelegate-Protocol.h"
#import "FBTabBarContainerViewControllerAppearanceTransitioningListener-Protocol.h"
#import "FBTabNavigationViewControllerDelegate-Protocol.h"

@class FBAppModuleManager, FBAppSectionManager, FBApplicationSecretPanelManager, FBFeedSwitcherExperimentContext, FBFeedSwitcherViewController, FBNavigationViewCoordinatorConfig, FBTabBarContainerViewController, FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer, FBTabNavigationViewController, FBUserSession, NSDate, NSString, UIViewController;

@interface FBTabBarViewCoordinator : NSObject <FBFeedSwitcherDelegate, FBTabNavigationViewControllerDelegate, FBTabBarContainerViewControllerAppearanceTransitioningListener>
{
    FBUserSession *_session;
    FBFeedSwitcherExperimentContext *_feedSwitcherExperimentContext;
    FBFeedSwitcherViewController *_feedSwitcherViewController;
    FBApplicationSecretPanelManager *_secretPanelManager;
    UIViewController *_contentViewController;
    FBTabBarContainerViewController *_tabBarContainerViewController;
    FBTabNavigationViewController *_tabBarNavigationViewController;
    FBNavigationViewCoordinatorConfig *_config;
    FBAppSectionManager *_appSectionManager;
    FBAppModuleManager *_moduleManager;
    id _foregroundObserver;
    id _backgroundObserver;
    NSDate *_backgroundedDate;
    FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer *_tabBarContainerViewControllerAnnouncer;
    double _resetToDefaultTabTimeout;
}

@property(retain, nonatomic) FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer *tabBarContainerViewControllerAnnouncer; // @synthesize tabBarContainerViewControllerAnnouncer=_tabBarContainerViewControllerAnnouncer;
@property(retain, nonatomic) NSDate *backgroundedDate; // @synthesize backgroundedDate=_backgroundedDate;
@property(nonatomic) id backgroundObserver; // @synthesize backgroundObserver=_backgroundObserver;
@property(nonatomic) id foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(retain, nonatomic) FBAppModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
@property(retain, nonatomic) FBAppSectionManager *appSectionManager; // @synthesize appSectionManager=_appSectionManager;
@property(retain, nonatomic) FBNavigationViewCoordinatorConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) FBTabNavigationViewController *tabBarNavigationViewController; // @synthesize tabBarNavigationViewController=_tabBarNavigationViewController;
@property(retain, nonatomic) FBTabBarContainerViewController *tabBarContainerViewController; // @synthesize tabBarContainerViewController=_tabBarContainerViewController;
@property(nonatomic) double resetToDefaultTabTimeout; // @synthesize resetToDefaultTabTimeout=_resetToDefaultTabTimeout;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (BOOL)_isCurrentViewControllerScrolledToTop;
- (BOOL)_isCurrentViewControllerRoot;
- (BOOL)_shouldToggleFeedSwitcherOnReselect;
- (void)_openFeedSwitcherIfPossibleWithMethod:(id)arg1;
- (void)_feedSwitcherTitleTapped;
- (void)_handleRotation;
- (void)_dismissFeedSwitcherWithAnimation:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_isFeedSwitcherItem:(id)arg1;
- (void)feedSwitcherDidTapDimmingView:(id)arg1;
- (void)feedSwitcher:(id)arg1 didSelectSettingsButtonForMenuItem:(id)arg2;
- (void)feedSwitcher:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)tabBarContainerViewControllerViewDidAppear:(BOOL)arg1;
- (BOOL)tabNavigationViewController:(id)arg1 shouldReselectAppSection:(id)arg2;
- (void)tabNavigationViewController:(id)arg1 willSelectAppSection:(id)arg2;
- (BOOL)tabNavigationViewController:(id)arg1 isFeedSwitcherItem:(id)arg2;
- (void)tabNavigationViewController:(id)arg1 didLongPressOnTabWithAppSectionID:(id)arg2;
- (id)_selectedRootViewController;
- (void)_didForegroundWithNotification:(id)arg1;
- (void)_didBackgroundWithNotification:(id)arg1;
- (void)updateForVisibleViewController:(id)arg1 navigationOperation:(int)arg2;
- (id)rootViewController;
- (void)updateSelectedTab;
- (void)_setupObservers;
@property(readonly, nonatomic) BOOL isNuxBeingDisplayed;
- (void)setNavigationBar:(id)arg1;
- (void)dealloc;
- (id)initWithViewCoordinatorConfig:(id)arg1 appSectionManager:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

