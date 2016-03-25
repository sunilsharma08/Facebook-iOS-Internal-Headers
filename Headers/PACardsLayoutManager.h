//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PACardsScrollView, PAClotheslineAnimationController;

@interface PACardsLayoutManager : NSObject
{
    struct UIEdgeInsets _collapsedContentInset;
    struct UIEdgeInsets _expandedContentInset;
    PACardsScrollView *_cardsScrollView;
    unsigned int _interactionCardIndex;
    PAClotheslineAnimationController *_translationClotheslineController;
    struct {
        struct CGPoint original;
        struct CGPoint current;
    } _cardOffset;
}

@property(readonly, nonatomic) unsigned int interactionCardIndex; // @synthesize interactionCardIndex=_interactionCardIndex;
@property(nonatomic) struct UIEdgeInsets expandedContentInset; // @synthesize expandedContentInset=_expandedContentInset;
@property(nonatomic) struct UIEdgeInsets collapsedContentInset; // @synthesize collapsedContentInset=_collapsedContentInset;
- (void).cxx_destruct;
- (struct CGPoint)cardAlignedContentOffsetForCardAtIndex:(float)arg1 inMetrics:(struct _PACardsScrollViewMetrics)arg2 withContentInset:(struct UIEdgeInsets)arg3;
- (int)_indexForCardCenteredWithViewportGeometry:(struct _PAViewportGeometry)arg1;
- (unsigned int)_indexForCardAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)originForCardAtIndex:(unsigned int)arg1 withMetrics:(struct _PACardsScrollViewMetrics)arg2;
- (struct _PACardsScrollViewMetrics)_scaledCardMetrics;
- (void)layoutScrollViewSubviews;
@property(readonly, nonatomic) unsigned int centeredCardIndex; // @dynamic centeredCardIndex;
- (void)_updateCurrentCardOffsetForScalingProgress:(float)arg1;
- (void)_jumpToTargetContentValuesAndOffsetSubviews;
- (void)_computeTargetContentOffset:(struct CGPoint *)arg1 contentInset:(struct UIEdgeInsets *)arg2 contentSize:(struct CGSize *)arg3;
- (void)didEndScaling;
- (void)didScale:(float)arg1;
- (void)willBeginScaling;
- (void)didEndTranslatingWithGesture:(id)arg1;
- (void)didTranslateWithGesture:(id)arg1;
- (void)willBeginExpansionOrCollapseGesture:(id)arg1;
- (id)initWithCardsScrollView:(id)arg1;

@end

