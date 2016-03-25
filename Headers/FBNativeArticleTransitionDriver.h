//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBNativeArticleInteractionRegistry, FBNativeArticleTransition, FBTransitionFrameSetter, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol FBNativeArticleTransitionDriverDelegate;

@interface FBNativeArticleTransitionDriver : NSObject <UIGestureRecognizerDelegate>
{
    FBNativeArticleInteractionRegistry *_interactionRegistry;
    FBNativeArticleTransition *_currentTransition;
    float _currentTransitionProgress;
    struct CGPoint _currentTrackingPoint;
    BOOL _trackingTouches;
    UIView *_transitionCoordinateView;
    UIView *_gestureView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <FBNativeArticleTransitionDriverDelegate> _delegate;
}

+ (CDStruct_29228278)transitionAnimationConfiguration;
+ (id)transitionDriverWithInteractionRegistry:(id)arg1 gestureView:(id)arg2 transitionCoordinateView:(id)arg3;
@property(readonly, nonatomic) UIView *transitionCoordinateView; // @synthesize transitionCoordinateView=_transitionCoordinateView;
@property(nonatomic) __weak id <FBNativeArticleTransitionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_endTransitionAndResetState;
- (CDStruct_29228278)_transitionAnimationConfigurationWithVelocity:(float)arg1;
- (void)_animateTrackingPointToPoint:(struct CGPoint)arg1 velocity:(struct CGPoint *)arg2;
- (void)_finishTransitionWithVelocity:(struct CGPoint *)arg1;
- (void)_didFinishTransitionAnimation;
- (void)_animateToTransitionProgress:(float)arg1 animationConfiguration:(CDStruct_29228278)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setTransitionProgress:(float)arg1;
- (void)_beginTransitionToPresentationAttributes:(id)arg1 forStoryBlock:(id)arg2 withGestureRecognizer:(id)arg3 animated:(BOOL)arg4;
- (void)_beginTransitionForStoryBlock:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_handleTapFromGestureRecognizer:(id)arg1;
- (void)_setCurrentTrackingPoint:(struct CGPoint)arg1;
- (void)_handlePanFromGestureRecognizer:(id)arg1;
- (struct CGPoint)_locationFromGestureRecognizer:(id)arg1;
- (void)performTransitionToPresentationAttributes:(id)arg1 onBlock:(id)arg2 animated:(BOOL)arg3;
- (BOOL)canPerformTransitionToPresentationAttributes:(id)arg1 onBlock:(id)arg2;
@property(readonly, nonatomic) FBTransitionFrameSetter *transitionLayout;
- (id)_eligibleTransitionPresentationAttributesForGestureInDirection:(int)arg1 onBlock:(id)arg2;
- (void)stopTrackingTouches;
@property(readonly, nonatomic) BOOL isTrackingTouches;
@property(readonly, nonatomic) float transitionProgress;
@property(readonly, nonatomic) BOOL isDrivingTransition;
- (BOOL)canRespondToGestureInDirection:(int)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithInteractionRegistry:(id)arg1 gestureView:(id)arg2 transitionCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

