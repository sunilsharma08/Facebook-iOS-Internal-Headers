//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBBurstAnimationImageViewSpecifier, FBTimer, FBWebImageView, NSArray;

@interface FBBurstAnimationImageView : UIView
{
    unsigned int _animationIndex;
    FBTimer *_animationTimer;
    FBWebImageView *_topImageView;
    FBWebImageView *_bottomImageView;
    FBBurstAnimationImageViewSpecifier *_previousViewSpecifier;
    NSArray *_imageSpecifiers;
    double _animationInterval;
    double _fadeDuration;
}

@property(nonatomic) double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
- (void).cxx_destruct;
- (void)_resetImageViews;
- (void)_setImageAtIndex:(int)arg1 inView:(id)arg2;
- (void)_createImageViewsWithSpecifier:(id)arg1;
- (void)_handleTimer;
- (void)stopAnimating;
- (void)startAnimating;
@property(nonatomic) int currentIndex;
- (void)dealloc;
- (void)restorePreviousViewSpecifier;
- (void)setViewSpecifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

