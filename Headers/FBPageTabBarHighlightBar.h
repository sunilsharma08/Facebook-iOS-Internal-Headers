//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface FBPageTabBarHighlightBar : UIView
{
    unsigned int _numberOfTabs;
    UIView *_highlightIndicatorView;
    BOOL _useHighLightLine;
    int _highlightedTabIndex;
}

@property(nonatomic) int highlightedTabIndex; // @synthesize highlightedTabIndex=_highlightedTabIndex;
- (void).cxx_destruct;
- (struct CGRect)_frameForHighlightIndicatorViewAtTabIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithNumberOfTabs:(unsigned int)arg1 useHighLightLine:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

