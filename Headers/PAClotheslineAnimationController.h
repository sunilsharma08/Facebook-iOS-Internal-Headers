//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, PACardsScrollView;

@interface PAClotheslineAnimationController : NSObject
{
    PACardsScrollView *_cardsScrollView;
    CDUnknownBlockType _toValueCompletionBlock;
    NSMapTable *_cardTranslationAnimationToCardViewModelMap;
    unsigned int _contentMotionDirection;
    unsigned int _contentMotionState;
    unsigned int _firstCardIndexOfClotheslineSystem;
    unsigned int _lastCardIndexOfClotheslineSystem;
    struct CGPoint _cachedScrollViewVelocity;
    unsigned int _numberOfCardsUsedForPresentationTransitions;
    unsigned int _draggedCardIndex;
}

@property(nonatomic) unsigned int contentMotionDirection; // @synthesize contentMotionDirection=_contentMotionDirection;
@property(nonatomic) __weak PACardsScrollView *cardsScrollView; // @synthesize cardsScrollView=_cardsScrollView;
@property(nonatomic) unsigned int numberOfCardsUsedForPresentationTransitions; // @synthesize numberOfCardsUsedForPresentationTransitions=_numberOfCardsUsedForPresentationTransitions;
- (void).cxx_destruct;
- (void)pop_animationDidApply:(id)arg1;
- (id)_cardViewAtIndex:(unsigned int)arg1;
- (void)_updateCardsSurroundingViewAtIndex:(unsigned int)arg1 basedOnDraggedCardIndex:(unsigned int)arg2;
- (void)_removeAllCardAnimations;
- (id)_cardTranslationAnimationForCardIndex:(unsigned int)arg1;
- (BOOL)_cardIndexIsPartOfClotheslineSystem:(unsigned int)arg1;
- (struct CGPoint)_nextTranslationForCardAtIndex:(unsigned int)arg1 withMotionDirection:(unsigned int)arg2 relativeToCards:(id)arg3 nextCardIndex:(unsigned int *)arg4;
- (void)_resetLayoutForCardAtIndex:(unsigned int)arg1 withVelocity:(struct CGPoint)arg2;
- (void)endTranslatingCardAtIndex:(unsigned int)arg1 withVelocity:(struct CGPoint)arg2;
- (void)translateCardAtIndex:(unsigned int)arg1 translation:(struct CGPoint)arg2;
- (void)beginTranslatingCardAtIndex:(unsigned int)arg1;
- (void)_clotheslineHasFinishedAnimating;
- (void)ejectContentOffscreenWithDirection:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)launchContentOnscreenWithDirection:(unsigned int)arg1 toCardIndex:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_layoutCardsOffscreenAtCardIndex:(unsigned int)arg1 withDirection:(unsigned int)arg2;
- (id)initWithCardsScrollView:(id)arg1;
- (id)init;

@end

