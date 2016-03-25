//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "POPAnimationDelegate-Protocol.h"

@class CALayer, NSArray, NSMutableDictionary, NSString, POPSpringAnimation, UIView, UIViewController, UIWindow, _FBSwipeAnimationOriginatingLayerState;
@protocol FBAnimatedSwipeGestureEnabledViewController;

@interface FBViewControllerSwipeGestureAnimationController : NSObject <POPAnimationDelegate>
{
    BOOL _shouldRecedeBackground;
    BOOL _hasCleanedUp;
    BOOL _iOS8DismissalHackStateChanged;
    CALayer *_originatingLayer;
    UIViewController<FBAnimatedSwipeGestureEnabledViewController> *_viewController;
    _FBSwipeAnimationOriginatingLayerState *_originatingLayerState;
    id _retainedViewController;
    int _currentInterfaceOrientation;
    NSMutableDictionary *_animationCompletionBlocks;
    UIView *_animationContainerView;
    UIWindow *_hostingWindow;
    CALayer *_animationBoundingLayer;
    UIView *_fadingAnimationBlackView;
    POPSpringAnimation *_popOpenLayerSizeAnimation;
    POPSpringAnimation *_popOpenLayerPositionAnimation;
    CALayer *_dismissalLayer;
    POPSpringAnimation *_throwClosedLayerSizeAnimation;
    POPSpringAnimation *_throwClosedLayerPositionAnimation;
    POPSpringAnimation *_throwClosedTransientLayerPositionAnimation;
    POPSpringAnimation *_closeTransientLayerScaleAnimation;
    NSArray *_fadingLayers;
    struct CGPoint _dismissalLayerPreThrowPosition;
    struct CGSize _dismissalLayerSize;
    struct CGRect _hostingContentFrame;
    struct CGRect _animationBoundingLayerFrame;
}

@property(nonatomic) BOOL iOS8DismissalHackStateChanged; // @synthesize iOS8DismissalHackStateChanged=_iOS8DismissalHackStateChanged;
@property(nonatomic) BOOL hasCleanedUp; // @synthesize hasCleanedUp=_hasCleanedUp;
@property(nonatomic) BOOL shouldRecedeBackground; // @synthesize shouldRecedeBackground=_shouldRecedeBackground;
@property(retain, nonatomic) NSArray *fadingLayers; // @synthesize fadingLayers=_fadingLayers;
@property(retain, nonatomic) POPSpringAnimation *closeTransientLayerScaleAnimation; // @synthesize closeTransientLayerScaleAnimation=_closeTransientLayerScaleAnimation;
@property(retain, nonatomic) POPSpringAnimation *throwClosedTransientLayerPositionAnimation; // @synthesize throwClosedTransientLayerPositionAnimation=_throwClosedTransientLayerPositionAnimation;
@property(retain, nonatomic) POPSpringAnimation *throwClosedLayerPositionAnimation; // @synthesize throwClosedLayerPositionAnimation=_throwClosedLayerPositionAnimation;
@property(retain, nonatomic) POPSpringAnimation *throwClosedLayerSizeAnimation; // @synthesize throwClosedLayerSizeAnimation=_throwClosedLayerSizeAnimation;
@property(nonatomic) struct CGSize dismissalLayerSize; // @synthesize dismissalLayerSize=_dismissalLayerSize;
@property(nonatomic) struct CGPoint dismissalLayerPreThrowPosition; // @synthesize dismissalLayerPreThrowPosition=_dismissalLayerPreThrowPosition;
@property(retain, nonatomic) CALayer *dismissalLayer; // @synthesize dismissalLayer=_dismissalLayer;
@property(retain, nonatomic) POPSpringAnimation *popOpenLayerPositionAnimation; // @synthesize popOpenLayerPositionAnimation=_popOpenLayerPositionAnimation;
@property(retain, nonatomic) POPSpringAnimation *popOpenLayerSizeAnimation; // @synthesize popOpenLayerSizeAnimation=_popOpenLayerSizeAnimation;
@property(retain, nonatomic) UIView *fadingAnimationBlackView; // @synthesize fadingAnimationBlackView=_fadingAnimationBlackView;
@property(nonatomic) struct CGRect animationBoundingLayerFrame; // @synthesize animationBoundingLayerFrame=_animationBoundingLayerFrame;
@property(retain, nonatomic) CALayer *animationBoundingLayer; // @synthesize animationBoundingLayer=_animationBoundingLayer;
@property(retain, nonatomic) UIWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property(retain, nonatomic) UIView *animationContainerView; // @synthesize animationContainerView=_animationContainerView;
@property(retain, nonatomic) NSMutableDictionary *animationCompletionBlocks; // @synthesize animationCompletionBlocks=_animationCompletionBlocks;
@property(nonatomic) int currentInterfaceOrientation; // @synthesize currentInterfaceOrientation=_currentInterfaceOrientation;
@property(retain, nonatomic) id retainedViewController; // @synthesize retainedViewController=_retainedViewController;
@property(retain, nonatomic) _FBSwipeAnimationOriginatingLayerState *originatingLayerState; // @synthesize originatingLayerState=_originatingLayerState;
@property(nonatomic) __weak UIViewController<FBAnimatedSwipeGestureEnabledViewController> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) struct CGRect hostingContentFrame; // @synthesize hostingContentFrame=_hostingContentFrame;
@property(retain, nonatomic) CALayer *originatingLayer; // @synthesize originatingLayer=_originatingLayer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_animateTransientLayerDismissalWithShrink:(CDUnknownBlockType)arg1;
- (void)_animateTransientLayerDismissalWithThrowVelocity:(float)arg1 doAfter:(CDUnknownBlockType)arg2;
- (void)_animateOriginatingLayerDismissalWithThrowVelocity:(float)arg1 doAfter:(CDUnknownBlockType)arg2;
- (void)_restoreFadingLayers;
- (void)_restoreOriginatingLayerAfterAnimation;
- (void)_prepareOriginatingLayerForAnimation;
- (CDUnknownBlockType)_copyCompletionBlockForKey:(id)arg1;
- (void)_cacheSingleUseCompletionBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)_prepareForDeleteDismissal;
- (void)_setupAnimations;
- (void)_prepareForDismissal;
- (id)_dismissalContentLayer;
- (BOOL)transformBackground;
- (void)_animateOriginatingLayerOpenToRect:(struct CGRect)arg1 doAfter:(CDUnknownBlockType)arg2;
- (void)_cancelDismissalThrowWithGestureRecognizer:(id)arg1;
- (void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)completeDismissalAfterAnimationForAction:(int)arg1;
- (void)stopAllAnimations;
- (void)dismissWithThrowVelocity:(float)arg1 action:(int)arg2 presentingViewController:(id)arg3;
@property(readonly, nonatomic) BOOL isAnimatingDismissal; // @dynamic isAnimatingDismissal;
- (void)dismissWithoutAnimation;
- (void)_transitionCoordinator:(id)arg1 performBlockAfterCompletion:(CDUnknownBlockType)arg2;
- (void)dismissWithDoneButtonAndPresentingViewController:(id)arg1;
- (void)dismissForDeletionWithPresentingViewController:(id)arg1;
- (void)setOriginatingLayerForCurrentAnimation:(id)arg1 window:(id)arg2;
- (void)handlePan:(id)arg1 withPresentingViewController:(id)arg2;
- (void)_updateForInterfaceOrientation:(int)arg1 forceRotation:(BOOL)arg2;
- (void)updateForInterfaceOrientation:(int)arg1;
- (void)cleanUpAfterViewDidAppear:(BOOL)arg1;
- (void)_scaleDownAndFadeOutBackgroundView;
- (void)presentFromLayer:(id)arg1 initialContents:(struct CGImage *)arg2 animationSourceSize:(struct CGSize)arg3 gestureRecognizer:(id)arg4 fadingLayers:(id)arg5 focusRect:(struct CGRect)arg6;
- (void)presentFromLayer:(id)arg1 animationSourceSize:(struct CGSize)arg2 gestureRecognizer:(id)arg3 fadingLayers:(id)arg4 focusRect:(struct CGRect)arg5;
- (void)presentFromLayer:(id)arg1 initialContents:(struct CGImage *)arg2 gestureRecognizer:(id)arg3 fadingLayers:(id)arg4 focusRect:(struct CGRect)arg5;
- (id)backgroundViews;
- (void)dealloc;
- (id)initWithHostingWindow:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

