//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SBNuxTransitionView : UIView
{
    int _currentViewIndex;
    NSArray *_viewClasses;
    id _delegate;
    CDUnknownBlockType _completionBlock;
    float _topLayoutGuideLength;
    UIView *_currentView;
}

@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) float topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *viewClasses; // @synthesize viewClasses=_viewClasses;
@property(nonatomic) int currentViewIndex; // @synthesize currentViewIndex=_currentViewIndex;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (void)transitionToNextView;
- (void)transitionToViewWithIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

