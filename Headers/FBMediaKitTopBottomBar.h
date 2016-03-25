//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UINavigationBar;

@interface FBMediaKitTopBottomBar : UIView
{
    UINavigationBar *_navigationBar;
    float _alpha;
    UIView *_backgroundBlendingView;
    UIView *_buttomLine;
    unsigned int _position;
}

+ (float)defaultHeight;
- (void).cxx_destruct;
- (float)alpha;
- (void)setAlpha:(float)arg1;
- (void)setTintColorStyle:(unsigned int)arg1;
- (void)setDropShadowPosition:(unsigned int)arg1;
- (void)setDropShadowColor:(id)arg1;
- (void)setBarBackgroundViewHidden:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

