//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBNativeArticleCloseBarMetrics;

@interface FBNativeArticleView : UIView
{
    UIView *_storyView;
    UIView *_closeBarView;
    FBNativeArticleCloseBarMetrics *_closeBarMetrics;
    float _closeBarVerticalVisibilityPercentage;
    BOOL _closeBarVisible;
    BOOL _closeBarContentsVisible;
}

@property(retain, nonatomic) UIView *storyView; // @synthesize storyView=_storyView;
- (void).cxx_destruct;
- (void)setCloseBarContentsVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCloseBarVisible:(BOOL)arg1 animationConfig:(CDStruct_29228278)arg2;
- (void)_layoutCloseBarAndStoryView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 closeBarView:(id)arg2 closeBarMetrics:(id)arg3 storyView:(id)arg4;

@end

