//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBModalPresentationStackViewControllerDelegate-Protocol.h"
#import "FBNavigationCoordinator-Protocol.h"
#import "FBNavigationCoordinatorDeprecated-Protocol.h"
#import "FBPopoverOverlayNavigationCoordinatorDelegate-Protocol.h"

@class FBNavigationController, FBNavigationEventListenerAnnouncer, FBPopoverOverlayNavigationCoordinator, FBUserSession, NSMutableOrderedSet, NSString, UIViewController;
@protocol FBNavigation, FBNavigationURLHandler;

@interface FBNavigationCoordinator : NSObject <FBPopoverOverlayNavigationCoordinatorDelegate, FBModalPresentationStackViewControllerDelegate, FBNavigationCoordinator, FBNavigationCoordinatorDeprecated>
{
    FBNavigationEventListenerAnnouncer *_navigationEventListenerAnnouncer;
    FBUserSession *_session;
    FBNavigationController *_navigationController;
    NSMutableOrderedSet *_modalPresentationStackManagers;
    id <FBNavigationURLHandler> _urlHandler;
    NSMutableOrderedSet *_stackViewControllers;
    FBPopoverOverlayNavigationCoordinator *_popoverOverlayNavigationCoordinator;
}

+ (id)_stackViewControllerForViewController:(id)arg1;
@property(retain, nonatomic) FBPopoverOverlayNavigationCoordinator *popoverOverlayNavigationCoordinator; // @synthesize popoverOverlayNavigationCoordinator=_popoverOverlayNavigationCoordinator;
@property(readonly, nonatomic) NSMutableOrderedSet *stackViewControllers; // @synthesize stackViewControllers=_stackViewControllers;
@property(nonatomic) __weak id <FBNavigationURLHandler> urlHandler; // @synthesize urlHandler=_urlHandler;
- (void).cxx_destruct;
- (id)_newStackViewController;
- (void)popoverOverlayNavigationCoordinator:(id)arg1 didDismissPopoverOverlay:(id)arg2;
- (BOOL)dismissPopoverOverlayContainingContentViewController:(id)arg1 animated:(BOOL)arg2 skipShouldDismissDelegate:(BOOL)arg3;
- (BOOL)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 skipShouldDismissDelegate:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 skipShouldDismissDelegate:(BOOL)arg3;
- (void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2;
- (void)dismissFloatingViewController:(id)arg1;
- (void)presentFloatingViewController:(id)arg1 viewFrameBlock:(CDUnknownBlockType)arg2;
- (void)closeAllPopovers;
- (BOOL)hasViewControllersOnBottomStack;
- (void)zeroRatingFence:(id)arg1 wantsToDismissInterstitialController:(id)arg2;
- (void)zeroRatingFence:(id)arg1 wantsToPresentInterstitialController:(id)arg2;
- (void)_cleanupStackViewControllerOnRemoval:(id)arg1;
- (id)bottomStackViewController;
- (id)topStackViewController;
- (id)rootContainerController;
- (void)removeAllStacks;
- (void)removeViewControllerFromStack:(id)arg1;
- (void)addViewControllerOnTopStack:(id)arg1;
- (id)topViewController;
@property(readonly, nonatomic) UIViewController *viewControllerOnBottomStack;
- (void)modalPresentationStackViewController:(id)arg1 didUpdateOcclusionState:(BOOL)arg2;
- (void)modalPresentationStackViewController:(id)arg1 didRemoveModalPresentationLayer:(id)arg2 forItem:(id)arg3;
- (void)modalPresentationStackViewController:(id)arg1 willAddModalPresentationLayer:(id)arg2 forItem:(id)arg3;
- (id)modalPresentationStackManager;
- (void)_performModalDismissalForViewController:(id)arg1 containerStackViewControllers:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissSingleModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 supportStackViewController:(BOOL)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_navigationInfoWithTimestamp:(id)arg1;
@property(readonly, nonatomic) BOOL hasModalViewController;
- (BOOL)canOpenURL:(id)arg1;
@property(readonly, nonatomic) id <FBNavigation> DEPRECATED_DO_NOT_USE_fb_navigationOwner;
- (void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dismissViewController:(id)arg1;
- (BOOL)presentWithNavigationInfo:(id)arg1 shouldAnnounceCompletion:(BOOL)arg2 shouldAnnounceWhenClosed:(BOOL)arg3 animated:(BOOL)arg4;
- (BOOL)presentWithNavigationInfo:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentWithNavigationInfo:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1 navigationEventListenerAnnouncer:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

