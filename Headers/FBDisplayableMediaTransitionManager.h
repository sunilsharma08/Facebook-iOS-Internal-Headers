//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBStateMachineDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class FBDirectionalPanGestureRecognizer, FBDisplayableMediaDefaultAnimator, FBDisplayableMediaViewProviderContext, FBStateMachine, NSString, UIView;
@protocol FBDisplayableMediaTransitionManagerDelegate, FBDisplayableMediaTransitioningDelegate;

@interface FBDisplayableMediaTransitionManager : NSObject <FBStateMachineDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIViewControllerInteractiveTransitioning>
{
    FBDisplayableMediaDefaultAnimator *_animator;
    id <FBDisplayableMediaTransitionManagerDelegate> _transitionManagerDelegate;
    id <FBDisplayableMediaTransitioningDelegate> _transitioningDelegate;
    FBDisplayableMediaViewProviderContext *_fromMediaViewProviderContext;
    FBDisplayableMediaViewProviderContext *_mediaViewControllerMediaViewProviderContext;
    struct FBMediaViewControllerTransitionDismissingContext _dismissalContext;
    int _orientationBeforeAnimation;
    UIView *_rotationView;
    UIView *_animationBoundingView;
    UIView *_containerViewForCustomAnimation;
    struct CGPoint _interactiveStartingPosition;
    FBDirectionalPanGestureRecognizer *_panGestureRecognizer;
    BOOL _isPresenting;
    FBStateMachine *_animationStateMachine;
}

@property(readonly, nonatomic) FBStateMachine *animationStateMachine; // @synthesize animationStateMachine=_animationStateMachine;
@property(readonly, nonatomic) BOOL isPresenting; // @synthesize isPresenting=_isPresenting;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setPanGestureRecognizerOnViewInViewController:(id)arg1;
- (unsigned int)_preferredDismissalType;
- (unsigned int)_adjustedDismissalType:(unsigned int)arg1;
- (void)_cleanUpAnimationWithTransitionContext:(id)arg1;
- (void)_setupAnimationWithTransitionContext:(id)arg1;
- (void)_logMediaViewProviderContext:(id)arg1 withString:(id)arg2;
- (void)_setupAnimationViewsWithTransitionContext:(id)arg1;
- (void)_updateInteractiveTransitionWithTranslation:(struct CGPoint)arg1;
- (void)_handlePanForInteractiveTransition:(id)arg1;
- (void)_endInteractiveTransitionWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 allowCancelling:(BOOL)arg3;
- (struct CGRect)_calculateToFrameForMediaViewOrLayer;
- (void)_finishDismissalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_beginInteractiveTransition;
- (void)_executeClosingAnimationWithFromMediaViewProviderContext:(id)arg1;
- (void)_executeOpeningAnimationWithFromMediaViewProviderContext:(id)arg1 toMediaViewProviderContext:(id)arg2 transitionContext:(id)arg3;
- (void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(readonly, nonatomic) FBDirectionalPanGestureRecognizer *panGestureRecognizer;
@property(readonly, nonatomic) BOOL interactiveTransitionWasCancelled;
- (id)initWithFromMediaViewProvider:(id)arg1 mediaViewControllerMediaViewProvider:(id)arg2 transitionManagerDelegate:(id)arg3 transitioningDelegate:(id)arg4 animator:(id)arg5;
- (id)initWithFromMediaViewProvider:(id)arg1 mediaViewControllerMediaViewProvider:(id)arg2 transitionManagerDelegate:(id)arg3 transitioningDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

