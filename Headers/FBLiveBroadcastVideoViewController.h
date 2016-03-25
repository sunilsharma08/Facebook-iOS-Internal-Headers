//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBCommentComposerViewDelegate-Protocol.h"
#import "FBDisplayableMediaTransitionManagerDelegate-Protocol.h"
#import "FBDisplayableMediaViewProvider-Protocol.h"
#import "FBFacecastEndBroadcastViewDelegate-Protocol.h"
#import "FBFacecastLiveCommentStoreDelegate-Protocol.h"
#import "FBFacecastViewerNuxViewDelegate-Protocol.h"
#import "FBKeyboardObserverDelegate-Protocol.h"
#import "FBVideoPlaybackEventListener-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBCommentComposerView, FBFacecastEndBroadcastView, FBFacecastLiveCommentStore, FBFacecastLiveCommentTickerView, FBFacecastPillView, FBFacecastViewerCommentsExperimentContext, FBFacecastViewerNuxView, FBFeedbackCommentPublisher, FBFeedbackPublishingAuthorFetcher, FBKeyboardObserver, FBMediaUFIBarController, FBMemFeedStory, FBMemVideo, FBUserSession, FBVideoViewManager, NSMutableSet, NSString, UIButton, UIImageView, UIView;
@protocol FBAvatarProtocol, FBLiveBroadcastVideoViewControllerDelegate, FBMediaUFIBarControllerDelegate, FBNavigationCoordinator;

@interface FBLiveBroadcastVideoViewController : UIViewController <FBVideoPlaybackEventListener, FBFacecastLiveCommentStoreDelegate, FBCommentComposerViewDelegate, FBKeyboardObserverDelegate, UIScrollViewDelegate, FBFacecastViewerNuxViewDelegate, FBFacecastEndBroadcastViewDelegate, FBDisplayableMediaViewProvider, FBDisplayableMediaTransitionManagerDelegate>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBVideoViewManager *_viewManager;
    FBMemFeedStory *_originalStory;
    FBMemVideo *_videoObject;
    FBUserSession *_session;
    BOOL _isDismissing;
    BOOL _hasRecordedViewerWatch;
    BOOL _renderedWatchingNux;
    FBFacecastLiveCommentStore *_liveCommentTickerStore;
    FBFeedbackCommentPublisher *_commentPublisher;
    FBFeedbackPublishingAuthorFetcher *_authorFetcher;
    id <FBAvatarProtocol> _actorForCommenting;
    FBKeyboardObserver *_keyboardObserver;
    FBMediaUFIBarController *_ufiBarController;
    id <FBMediaUFIBarControllerDelegate> _ufiDelegate;
    UIView *_clearViewOverlayForVideo;
    UIButton *_dismissButton;
    FBFacecastEndBroadcastView *_endBroadcastView;
    FBFacecastLiveCommentTickerView *_commentTickerView;
    FBCommentComposerView *_commentComposerView;
    FBFacecastViewerNuxView *_viewerWatchingNux;
    FBFacecastPillView *_newCommentsPill;
    UIImageView *_gradientView;
    UIImageView *_bottomGradientView;
    FBFacecastViewerCommentsExperimentContext *_experimentContext;
    int _numCommentsShown;
    NSMutableSet *_viewerOptimisticComments;
    BOOL _liveStreamEnded;
    id <FBLiveBroadcastVideoViewControllerDelegate> _delegate;
}

@property(nonatomic, getter=isLiveStreamEnded) BOOL liveStreamEnded; // @synthesize liveStreamEnded=_liveStreamEnded;
@property(nonatomic) __weak id <FBLiveBroadcastVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveNewWatchingEvents:(id)arg1 existingViewers:(BOOL)arg2;
- (void)setUFIDelegate:(id)arg1;
- (void)dismissNuxButtonWasTapped:(id)arg1;
- (void)endBroadcastViewDoneButtonTapped:(id)arg1;
- (void)_setupMediaUFIBarController;
- (void)_showEndBroadcastFlow;
- (void)_newCommentsPillTapped;
- (void)_hideCommentsPill;
- (void)_showCommentsPill:(id)arg1;
- (float)_initialCommentBoxHeightForLayout;
- (void)_dismissKeyboard;
- (void)_resizeContainerWithKeyboardEndFrame:(struct CGRect)arg1 beginFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(int)arg4;
- (void)_addCommentToTicker:(id)arg1 commentView:(id)arg2 forceScrollDown:(BOOL)arg3;
- (void)_postedCommentWithLegacyAPIPostID:(id)arg1;
- (void)_commentPostFailedWithError:(id)arg1;
- (void)_didFetchAuthor:(id)arg1;
- (void)_dismiss;
- (void)_setupPluginWithViewerCount:(BOOL)arg1;
- (BOOL)getWatchingNuxViewedState;
- (void)setWatchingNuxViewed;
- (void)_arrangeSubviewsAfterAnimation;
- (struct CGRect)_videoFrame;
- (void)videoPlaybackControllerDidFinishPlayback:(id)arg1;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2;
- (id)analyticsModule;
- (void)scrollViewDidScroll:(id)arg1;
- (void)transitionManager:(id)arg1 willPresentWithMediaViewProviderInfo:(id)arg2;
- (id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1;
- (unsigned int)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2;
- (void)transitionManagerNeedsDismissal:(id)arg1;
- (void)didFinishAnimatingViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3;
- (void)didAddMediaViewInfo:(id)arg1 forMedia:(id)arg2 sender:(id)arg3;
- (id)needsMediaViewInfoForSourceInfo:(id)arg1 sender:(id)arg2;
- (void)recordViewerWatchForDuration:(double)arg1;
- (void)_applicationWillEnterForegroundDuringLiveBroadcast;
- (void)_applicationWillResignActiveDuringLiveBroadcast;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)commentComposerViewNeedsResize:(id)arg1;
- (void)commentComposerViewDidTapSendButton:(id)arg1;
- (void)facecastLiveCommentStore:(id)arg1 withNextComment:(id)arg2 commentView:(id)arg3;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigationCoordinator:(id)arg1 viewManager:(id)arg2 originalStory:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

