//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDirectionalPanGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBDirectionalPanGestureRecognizer, FBScrollKeyboardController, FBSwipeBasedDismissalScrollViewDelegate, NSDate, NSMutableSet, NSString, UIScrollView, UIView;
@protocol FBKeyboardPresenting, FBScrollViewSwipeBasedDismissalManagerDelegate;

@interface FBScrollViewSwipeBasedDismissalManager : NSObject <FBDirectionalPanGestureRecognizerDelegate, UIScrollViewDelegate>
{
    UIView *_containerView;
    UIScrollView *_scrollView;
    unsigned int _bounceMode;
    FBSwipeBasedDismissalScrollViewDelegate *_scrollViewDelegate;
    FBScrollKeyboardController *_keyboardController;
    FBDirectionalPanGestureRecognizer *_scrollViewDismissGestureRecognizer;
    NSMutableSet *_handleViewDismissGestureRecognizers;
    float _yPositionOfContainerViewBeforeGesture;
    float _scrollViewVerticalContentOffsetBeforeGesture;
    float _yPositionOfKeyboardViewBeforeGesture;
    NSDate *_lastDragInitiatedScrollActionTime;
    float _contentOffsetAtLastDragInitiatedScrollAction;
    float _scrollVelocityAtLastDragInitiatedScrollAction;
    NSDate *_lastDragInitiatedScrollStartTime;
    BOOL _scrollViewIsMovingDueToDragging;
    BOOL _wasScrolledToTopAtGestureStart;
    BOOL _wasScrolledToBottomAtGestureStart;
    BOOL _dismissalAllowed;
    BOOL _wasScrollTransferredToContainerViewPositioning;
    BOOL _delegateRespondsToProgressUpdates;
    float _dismissalActivationTranslationThreshold;
    float _dismissalActivationVelocityThreshold;
    float _translationRubberBandDampeningFactor;
    float _containerViewTranslationResetSpringBounciness;
    float _containerViewTranslationResetSpringSpeed;
    float _containerViewTranslationResetSpringThreshold;
    BOOL _enabled;
    BOOL _isMovingViews;
    BOOL _allowUserCancelByDraggingInOppositeDirection;
    id <FBScrollViewSwipeBasedDismissalManagerDelegate> _delegate;
    id <FBKeyboardPresenting> _keyboardPresenter;
}

@property(retain, nonatomic) id <FBKeyboardPresenting> keyboardPresenter; // @synthesize keyboardPresenter=_keyboardPresenter;
@property(nonatomic) BOOL allowUserCancelByDraggingInOppositeDirection; // @synthesize allowUserCancelByDraggingInOppositeDirection=_allowUserCancelByDraggingInOppositeDirection;
@property(readonly, nonatomic) BOOL isMovingViews; // @synthesize isMovingViews=_isMovingViews;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <FBScrollViewSwipeBasedDismissalManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationWillResignActive:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)_forceResetContainerView;
- (float)_rubberBandTranslationForLinearTranslation:(float)arg1;
- (void)_applyContainerViewTranslation:(float)arg1;
- (void)_animateContainerViewResetWithVerticalVelocity:(float)arg1;
- (void)_processGestureEndForRecognizer:(id)arg1 allowVelocityTriggeredDismissal:(BOOL)arg2;
- (void)_processHandleViewGesture:(id)arg1;
- (void)_willScrollTransferToContainerViewPositioning;
- (void)_processScrollViewGesture:(id)arg1;
- (void)_bounceContainerViewWithVerticalVelocity:(float)arg1;
- (void)_processScrollStop;
- (void)_processScrollAction;
- (void)_prepareInitialGestureState;
- (void)removeHandleView:(id)arg1;
- (void)addHandleView:(id)arg1;
- (void)setIsMovingViews:(BOOL)arg1;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1 scrollView:(id)arg2 bounceMode:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

