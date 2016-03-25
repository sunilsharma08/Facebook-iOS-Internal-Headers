//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface FBNearbyPlacesResultBaseActionButton : UIButton
{
    UIView *_leftBorder;
    BOOL _showLeftBorder;
    unsigned int _actionButtonType;
    float _imageSize;
}

@property(nonatomic) float imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) unsigned int actionButtonType; // @synthesize actionButtonType=_actionButtonType;
@property(nonatomic) BOOL showLeftBorder; // @synthesize showLeftBorder=_showLeftBorder;
- (void).cxx_destruct;
- (void)_updateSelectedState:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 actionButtonType:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

