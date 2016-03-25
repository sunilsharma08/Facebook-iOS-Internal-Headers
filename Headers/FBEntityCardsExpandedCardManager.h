//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDirectionalPanGestureRecognizerDelegate-Protocol.h"
#import "FBEntityCardsExpandingCardViewDelegate-Protocol.h"
#import "POPAnimationDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBAnimationPerformanceLogger, FBDirectionalPanGestureRecognizer, FBEntityCardsAnalytics, FBEntityCardsCollectionView, FBEntityCardsExpandingCardView, FBEntityCardsView, FBUserSession, NSIndexPath, NSMutableDictionary, NSString, NSTimer, POPBasicAnimation, POPSpringAnimation, UIView, UIViewController;
@protocol FBEntityCardSwipableViewControllerProtocol, FBEntityCardsExpandedCardManagerDelegate, UIScrollViewDelegate;

@interface FBEntityCardsExpandedCardManager : NSObject <FBDirectionalPanGestureRecognizerDelegate, FBEntityCardsExpandingCardViewDelegate, UIScrollViewDelegate, POPAnimationDelegate>
{
    FBUserSession *_session;
    NSMutableDictionary *_expandedCardViewControllersCache;
    FBEntityCardsAnalytics *_analytics;
    FBEntityCardsView *_entityCardsView;
    FBEntityCardsCollectionView *_collectionView;
    FBEntityCardsExpandingCardView *_containerView;
    FBDirectionalPanGestureRecognizer *_swipeUpGestureRecognizer;
    FBDirectionalPanGestureRecognizer *_swipeDownGestureRecognizer;
    unsigned int _cardState;
    NSIndexPath *_preconfiguredCardIndexPath;
    NSTimer *_preconfigurationTimer;
    NSIndexPath *_indexPathForCardToExpand;
    UIView *_cardView;
    id <FBEntityCardSwipableViewControllerProtocol> _swipableViewController;
    struct CGRect _originalCardFrame;
    struct CGPoint _stopPoint;
    id <UIScrollViewDelegate> _originalScrollViewDelegate;
    struct CGPoint _contentOffsetWhenDraggingStarted;
    POPBasicAnimation *_scrollToTopAnimation;
    POPSpringAnimation *_cardBounceAnimation;
    FBAnimationPerformanceLogger *_swipeupPerfTracker;
    BOOL _shouldRecognizeGesturesSimultaneously;
    struct CGPoint _contentOffsetWhenScrollingBegan;
    float _entityCardsInitialTransformFactor;
    BOOL _gestureRecognizersEnabled;
    id <FBEntityCardsExpandedCardManagerDelegate> _delegate;
    UIViewController *_expandedViewController;
    UIViewController *_entityCardsViewController;
}

+ (id)supportedSurfaces;
@property(nonatomic) __weak UIViewController *entityCardsViewController; // @synthesize entityCardsViewController=_entityCardsViewController;
@property(readonly, nonatomic) UIViewController *expandedViewController; // @synthesize expandedViewController=_expandedViewController;
@property(nonatomic) BOOL gestureRecognizersEnabled; // @synthesize gestureRecognizersEnabled=_gestureRecognizersEnabled;
@property(nonatomic) __weak id <FBEntityCardsExpandedCardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pop_animationDidApply:(id)arg1;
- (id)_scrollToTopAnimation;
- (id)_bounceAnimationForFullView;
- (id)_decayAnimationForFullView;
- (void)_scrollOnFullViewWithVelocity:(struct CGPoint)arg1;
- (void)_scrollOnFullViewWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isDragging:(BOOL)arg3;
- (void)_removePOPAnimationsFromFullView;
- (void)_initiateSwipeDown;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_restoreScrollViewDelegate;
- (void)_setScrollViewDelegate;
- (BOOL)_didSwipeFastEnough:(struct CGPoint)arg1 isSwipingUp:(BOOL)arg2;
- (BOOL)_didSwipeFarEnough:(struct CGPoint)arg1 isSwipingingUp:(BOOL)arg2;
- (void)_animateCenterForView:(id)arg1 initialValue:(float)arg2 finalValue:(float)arg3 progress:(float)arg4 delta:(float)arg5;
- (void)_animateTransformForView:(id)arg1 startScale:(struct CGAffineTransform)arg2 endScale:(struct CGAffineTransform)arg3 progress:(float)arg4 delta:(float)arg5;
- (void)_preconfigureExpandedViewController;
- (id)_viewControllerForExpandedCardAtIndexPath:(id)arg1 isPreconfiguring:(BOOL)arg2;
- (void)_addRoundedCornersToExpandingView;
- (float)_interpolateFromInitialValue:(float)arg1 toFinalValue:(float)arg2 forSwipeProgress:(float)arg3 delta:(float)arg4;
- (void)_setCardState:(unsigned int)arg1 transitionPoint:(struct CGPoint)arg2 shouldAnimate:(BOOL)arg3;
- (void)_setCardState:(unsigned int)arg1 transitionPoint:(struct CGPoint)arg2;
- (struct CGRect)_selectedCardFrameInExpandedCardView;
- (void)_restoreFullView:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_restoreExpandedViewPropertiesToDefault;
- (void)_restoreAuxilliaryViewPropertiesToDefault;
- (void)_restoreCardViewPropertiesToDefault;
- (void)_showCardsAndHideFullView;
- (struct CGPoint)_sanitizedVelocityForVelocity:(struct CGPoint)arg1;
- (void)_animateCenterWithBounceForView:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 originalVelocity:(struct CGPoint)arg4 delegate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_cleanUpAfterSwipeDown;
- (void)_restoreCardView:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_adjustCenterForEntityCardsViewForTranslation:(struct CGPoint)arg1;
- (void)_completeCardViewTransition:(struct CGPoint)arg1 cancelled:(BOOL)arg2 shouldAnimate:(BOOL)arg3;
- (void)_continueCardViewTransition:(struct CGPoint)arg1;
- (void)_prepareForCardViewTransition:(struct CGPoint)arg1;
- (void)_didSwipeDownCard:(id)arg1;
- (void)_prepareCardCellForSwipeUp:(id)arg1;
- (void)_completeFullViewTransition:(struct CGPoint)arg1 cancelled:(BOOL)arg2;
- (void)_continueFullViewTransition:(struct CGPoint)arg1;
- (BOOL)_shouldadjustCenterOnEntityCardsViewForTranslation:(struct CGPoint)arg1;
- (BOOL)_shouldScrollOnFullViewForTranslation:(struct CGPoint)arg1;
- (void)_prepareForFullViewTransition:(struct CGPoint)arg1;
- (void)_didSwipeUpCard:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 hitTestView:(id)arg3;
- (void)preconfigureExpandedCardControllerForSelectedCard;
- (void)restoreToCardView;
@property(readonly, nonatomic) BOOL hasExpandedCard;
- (void)dealloc;
- (id)initWithSession:(id)arg1 entityCardsViewController:(id)arg2 analytics:(id)arg3 entityCardsView:(id)arg4 collectionView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

