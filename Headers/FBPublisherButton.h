//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class FBPublisherButtonBadge, NSString, UIFont, UIView;

@interface FBPublisherButton : UIButton
{
    UIFont *_labelFont;
    BOOL _iconHidden;
    BOOL _hasSideFeed;
    NSString *_composerSourceType;
    NSString *_composerContentOrigin;
    FBPublisherButtonBadge *_badge;
    UIView *_iconOverlayView;
    struct CGSize _cachedTextSize;
}

@property(nonatomic) struct CGSize cachedTextSize; // @synthesize cachedTextSize=_cachedTextSize;
@property(nonatomic) BOOL hasSideFeed; // @synthesize hasSideFeed=_hasSideFeed;
@property(nonatomic) BOOL iconHidden; // @synthesize iconHidden=_iconHidden;
@property(retain, nonatomic) UIView *iconOverlayView; // @synthesize iconOverlayView=_iconOverlayView;
@property(retain, nonatomic) FBPublisherButtonBadge *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSString *composerContentOrigin; // @synthesize composerContentOrigin=_composerContentOrigin;
@property(copy, nonatomic) NSString *composerSourceType; // @synthesize composerSourceType=_composerSourceType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)_updateCachedTextSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
@property(retain, nonatomic) UIFont *labelFont;
@property(readonly, nonatomic) unsigned int badgeCount;

@end

