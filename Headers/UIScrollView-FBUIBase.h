//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (FBUIBase)
- (void)fb_setVisibleContentEndOffset:(struct CGPoint)arg1;
- (struct CGPoint)fb_visibleContentEndOffset;
- (void)fb_setVisibleContentBeginningOffset:(struct CGPoint)arg1;
- (struct CGPoint)fb_visibleContentBeginningOffset;
- (struct CGRect)fb_scrollViewPortRect;
- (float)fb_scrollViewPortWidth;
- (float)fb_scrollViewPortHeight;
- (float)fb_maxContentOffsetY;
- (float)fb_minContentOffsetY;
- (float)fb_maxContentOffsetX;
- (float)fb_minContentOffsetX;
- (BOOL)fb_isProgrammaticallyScrolling;
- (BOOL)fb_isScrolledToBottomWithBuffer:(float)arg1;
- (BOOL)fb_isNearingEndWithBufferFactorIncludeZeroOffset:(float)arg1;
- (BOOL)fb_isNearingEndWithBufferFactor:(float)arg1;
- (BOOL)fb_isNearingOffset:(float)arg1 withBufferFactor:(float)arg2;
- (BOOL)_fb_isNearingEndWithBufferFactor:(float)arg1 includeZeroOffset:(BOOL)arg2;
- (BOOL)_fb_isNearingOffset:(float)arg1 withBufferFactor:(float)arg2 includeZeroOffset:(BOOL)arg3;
- (void)fb_stopScrollingAnimation;
- (void)fb_scrollToBottomAnimated:(BOOL)arg1;
- (void)fb_isAtLeft:(char *)arg1 isRubberBandingAtLeft:(char *)arg2 isAtRight:(char *)arg3 isRubberBandingAtRight:(char *)arg4;
@end

