//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBClassProvidable-Protocol.h"
#import "FBMessengerInterstitialViewDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBSyncEngineJobListener-Protocol.h"

@class FBMessengerInterstitialController, FBMessengerInterstitialView, FBMessengerSyncEngineManager, FBViewMarginCalculator, NSString, UIView;

@interface FBDiodeRootViewController : UIViewController <FBMessengerInterstitialViewDelegate, FBPresentableViewController, FBSyncEngineJobListener, FBClassProvidable>
{
    FBMessengerSyncEngineManager *_syncEngineManager;
    FBMessengerInterstitialController *_interstitialController;
    FBMessengerInterstitialView *_interstitialView;
    FBViewMarginCalculator *_viewMarginCalculator;
    UIView *_wrappingCard;
    int _location;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (id)_leftNavBarButtonForLocation:(int)arg1;
- (void)_configureInterstitial;
- (BOOL)_shouldDisplayInsideCard;
- (void)syncEngineDidCompleteSync:(unsigned int)arg1;
- (void)syncEngineDidBeginSync:(unsigned int)arg1 isInitialSync:(BOOL)arg2;
- (void)interstitialViewSelectRedirect:(id)arg1;
- (void)interstitialViewSelectLearnMore:(id)arg1;
- (void)interstitialViewSelectInstall:(id)arg1;
- (id)analyticsModule;
- (BOOL)fb_showNavigationJewels;
- (struct CGSize)contentSizeForViewInPopover;
- (int)preferredStatusBarStyle;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (BOOL)fb_showNavBarSearchField;
- (BOOL)fb_showAuxiliaryViewController;
- (BOOL)fb_enableChatBarButton;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)configureForLocation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithSyncEngineManager:(id)arg1 interstitialController:(id)arg2 interstitialView:(id)arg3 session:(id)arg4;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

