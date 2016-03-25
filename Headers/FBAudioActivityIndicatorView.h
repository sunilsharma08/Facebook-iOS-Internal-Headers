//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBComposerChoosersBarAccessoryViewProtocol-Protocol.h"

@class CABasicAnimation, CAShapeLayer, FBActivitySuggestionManager, NSMutableArray, NSTimer, UIImage, UIImageView;

@interface FBAudioActivityIndicatorView : UIView <FBComposerChoosersBarAccessoryViewProtocol>
{
    NSMutableArray *_barValues;
    NSMutableArray *_bars;
    NSTimer *_animationTimer;
    CAShapeLayer *_circle;
    CABasicAnimation *_circleAnimation;
    unsigned int _numberOfBars;
    unsigned int _barWidth;
    unsigned int _barSpacing;
    unsigned int _maxBarHeight;
    unsigned int _minBarHeight;
    unsigned int _barsInsetTop;
    unsigned int _barsInsetLeft;
    float _circleRadius;
    float _circleStrokeWidth;
    unsigned int _type;
    UIImageView *_imageView;
    UIImage *_idleImage;
    UIImage *_disableImage;
    FBActivitySuggestionManager *_activitySuggestionManager;
    unsigned int _state;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) FBActivitySuggestionManager *activitySuggestionManager; // @synthesize activitySuggestionManager=_activitySuggestionManager;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_backgroundColor;
- (void)_resetBars;
- (void)_layoutBars;
- (void)_animateBars;
- (void)_resetIndicators;
- (void)_showImage:(id)arg1;
- (void)_disable;
- (void)_stop;
- (void)_start;
- (void)accessoryViewHidden;
- (void)accessoryViewDisplayed;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

