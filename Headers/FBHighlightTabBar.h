//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UISegmentedControl;

@interface FBHighlightTabBar : UIView
{
    UISegmentedControl *_segmentControl;
    UIView *_highlightIndicatorView;
    int _highlightedTabIndex;
    float _pagingProgress;
}

@property(nonatomic) float pagingProgress; // @synthesize pagingProgress=_pagingProgress;
@property(nonatomic) int highlightedTabIndex; // @synthesize highlightedTabIndex=_highlightedTabIndex;
- (void).cxx_destruct;
- (struct CGRect)_nonApportionFrameForHighlightIndicatorViewAtTabIndex:(unsigned int)arg1;
- (struct CGRect)_apportionFrameForHighlightIndicatorViewAtTabIndex:(unsigned int)arg1;
- (struct CGRect)_nonApportionFameForHighlightIndicatorViewWithPagingProgress:(float)arg1;
- (struct CGRect)_apportionFameForHighlightIndicatorViewWithPagingProgress:(float)arg1;
- (struct CGRect)_frameForHighlightIndicatorViewAtTabIndex:(unsigned int)arg1;
- (struct CGRect)_frameForHighlightIndicatorViewWithPagingProgress:(float)arg1;
- (void)layoutSubviews;
- (id)initWithSegmentControl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

