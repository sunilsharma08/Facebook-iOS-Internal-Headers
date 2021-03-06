//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedSeeMoreContentUpsellViewDelegate-Protocol.h"
#import "FBInvalidating-Protocol.h"

@class FBAppFeedUpsellExperimentContext, FBDismissalDoneButton, FBSeeMoreAppsUpsellViewController, FBUserSession, NSString, UIView, UIWindow;
@protocol FBNavigationCoordinator;

@interface FBSeeMoreAppsModalController : NSObject <FBFeedSeeMoreContentUpsellViewDelegate, FBInvalidating>
{
    BOOL _valid;
    FBUserSession *_session;
    FBAppFeedUpsellExperimentContext *_experimentContext;
    UIWindow *_seeMoreAppsWindow;
    UIView *_backgroundView;
    FBDismissalDoneButton *_dismissButton;
    id <FBNavigationCoordinator> _coordinator;
    FBSeeMoreAppsUpsellViewController *_viewController;
    id _applicationInactiveObserver;
}

- (void).cxx_destruct;
- (void)seeMoreContentUpsellViewDidDismiss:(id)arg1;
- (void)seeMoreContentUpsellViewDidPresent:(id)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
@property(readonly, nonatomic) BOOL canPresentModal;
- (void)presentModalFromCoordinator:(id)arg1;
- (void)_unobserveApplication;
- (void)_observeApplication;
- (void)_dismissViewAndDiscardCoordinator;
- (id)initWithSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

