//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, UIView;
@protocol FBStickyHeaderDelegate;

@interface FBStickyHeader : NSObject
{
    float _headerViewPositionRestorationPreviousOriginY;
    id <FBStickyHeaderDelegate> _delegate;
    UIView *_headerView;
    UIView *_bottomAccessoryView;
    float _headerBottomAccessoryViewVerticalSpacing;
    NSNumber *_visibilityThreshold;
    struct UIEdgeInsets _headerViewMargins;
}

@property(readonly, copy, nonatomic) NSNumber *visibilityThreshold; // @synthesize visibilityThreshold=_visibilityThreshold;
@property(nonatomic) float headerBottomAccessoryViewVerticalSpacing; // @synthesize headerBottomAccessoryViewVerticalSpacing=_headerBottomAccessoryViewVerticalSpacing;
@property(readonly, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(nonatomic) struct UIEdgeInsets headerViewMargins; // @synthesize headerViewMargins=_headerViewMargins;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <FBStickyHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animateView:(id)arg1 toFrame:(struct CGRect)arg2 animationDidApplyBlock:(CDUnknownBlockType)arg3;
- (void)_animateViewsToFinalPositionInScrollView:(id)arg1;
- (float)_finalHeaderViewOriginYInScrollView:(id)arg1;
- (float)_bottomAccessoryViewOriginYInScrollView:(id)arg1 withBottomAccessoryViewHeight:(float)arg2 headerViewFrame:(struct CGRect)arg3;
- (float)_headerViewOriginYInScrollView:(id)arg1 withHeaderViewHeight:(float)arg2;
- (BOOL)_shouldHeaderViewBeHiddenInScrollView:(id)arg1;
- (void)_updateViewsPositionsInScrollView:(id)arg1;
- (void)_updateViewsVisibilityInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)restoreHeaderViewPositionWithContentOffsetYDelta:(float)arg1 inScrollView:(id)arg2;
- (void)saveHeaderViewPositionForScrollRestoration;
- (void)layoutBottomAccessoryViewWithFrame:(struct CGRect)arg1 relativeToHeaderViewFrame:(struct CGRect)arg2 inScrollView:(id)arg3;
- (void)layoutHeaderViewWithFrame:(struct CGRect)arg1 inScrollView:(id)arg2;
- (void)attachToScrollView:(id)arg1;
- (id)initWithHeaderView:(id)arg1 bottomAccessoryView:(id)arg2 visibilityThreshold:(id)arg3;

@end

