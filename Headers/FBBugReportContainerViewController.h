//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBBugReportContainerView, FBBugReportCoordinator, FBBugReportShakeHandler, NSString, NSTimer;
@protocol FBBugReportContainerViewControllerChildViewControllerDelegate, FBBugReportContainerViewControllerDelegate;

@interface FBBugReportContainerViewController : UIViewController <UIGestureRecognizerDelegate>
{
    FBBugReportContainerView *_containerView;
    UIViewController *_footerViewController;
    UIViewController<FBBugReportContainerViewControllerChildViewControllerDelegate> *_previousViewController;
    struct CGRect _enclosingViewOriginalFrame;
    BOOL _panGestureCanBeInvalid;
    BOOL _panGestureIsValid;
    NSTimer *_dismissalTimer;
    FBBugReportShakeHandler *_shakeHandler;
    FBBugReportCoordinator *_coordinator;
    id <FBBugReportContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBBugReportContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)setRightBarButtonItemEnabled:(BOOL)arg1;
- (void)sendGeneralFeedback:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)dismissBugComposerAndStartVideoRecording;
- (void)dismissBugComposerAndAllowUserToTakeScreenshot;
- (void)presentPhotoPermissionsRequest;
- (id)screenshotsDirectory;
- (void)willChangeCategory;
- (id)getBugDescription;
- (void)setBugDescription:(id)arg1;
- (void)sendBugWithDescription:(id)arg1 category:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (id)chosenCategory;
- (void)setChosenCategory:(id)arg1;
- (void)resetNumReportAfterShakeOn;
- (void)incrementNumReportIfShakeOff;
- (void)resetNumCancelAfterShakeOff;
- (void)incrementNumCancelIfShakeOn;
- (void)hideNavigationBar;
- (void)showNavigationBar;
- (void)hideFooter;
- (void)showFooter:(id)arg1;
- (id)bugReportCategories;
- (void)setShakeToReportDisabled;
- (void)setShakeToReportEnabled;
- (BOOL)shakeToReportIsEnabled;
- (void)pushNavigationItem:(id)arg1;
- (struct CGRect)frameForContainerView:(struct CGRect)arg1;
- (struct CGRect)frameForContentController:(id)arg1;
- (void)cycleToViewController:(id)arg1 cardResizeAnimationTime:(float)arg2 animationStyle:(int)arg3;
- (void)presentHelpCenterForPrivacy;
- (void)presentHelpCenterForGeneralFeedback;
- (void)presentHelpCenterForAbusiveContent;
- (void)closeWithShrinkingAnimation:(BOOL)arg1 fadeDuration:(float)arg2;
- (void)close;
- (void)displayContentController:(id)arg1;
- (void)userDidPan:(id)arg1;
- (void)loadView;
- (void)stopDismissalTimerAndDisablePanGestureRecognizer:(BOOL)arg1;
- (void)startDismissalTimer;
- (id)initWithShakeHandler:(id)arg1 coordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

