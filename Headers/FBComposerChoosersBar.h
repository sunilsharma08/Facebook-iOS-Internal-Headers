//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class FBComposerAdditionalInfoButton, NSArray, UIImageView, UIView;
@protocol FBComposerChoosersBarDataSource, FBComposerChoosersBarDelegate;

@interface FBComposerChoosersBar : UIToolbar
{
    NSArray *_chooserButtons;
    FBComposerAdditionalInfoButton *_chooserBarTextButton;
    BOOL _useComposerAudienceDesign;
    id <FBComposerChoosersBarDataSource> _barDataSource;
    id <FBComposerChoosersBarDelegate> _barDelegate;
    UIView *_contentView;
    UIView *_contentViewBottomAdjunctView;
    int _visibleComponents;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) BOOL useComposerAudienceDesign; // @synthesize useComposerAudienceDesign=_useComposerAudienceDesign;
@property(nonatomic) int visibleComponents; // @synthesize visibleComponents=_visibleComponents;
@property(retain, nonatomic) UIView *contentViewBottomAdjunctView; // @synthesize contentViewBottomAdjunctView=_contentViewBottomAdjunctView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <FBComposerChoosersBarDelegate> barDelegate; // @synthesize barDelegate=_barDelegate;
@property(nonatomic) __weak id <FBComposerChoosersBarDataSource> barDataSource; // @synthesize barDataSource=_barDataSource;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)_chooserButtonAction:(id)arg1;
- (void)chooseChooserAtIndex:(int)arg1;
- (float)_layoutButton:(id)arg1 fromX:(float)arg2;
- (BOOL)_shouldSetBackgroundImage;
- (void)hideAccessoryViewAtChooserIndex:(int)arg1;
- (void)showAccessoryViewAtChooserIndex:(int)arg1;
- (void)addAccessoryView:(id)arg1 toChooserAtIndex:(int)arg2;
- (void)addBadgeAtChooserIndex:(int)arg1 badgeCount:(int)arg2;
- (void)removeBadgeAtChooserIndex:(int)arg1;
- (void)chooserAtIndex:(int)arg1 setSelected:(BOOL)arg2;
- (void)updateChooserBarAdditionalInfoText:(id)arg1 forType:(id)arg2;
@property(readonly, nonatomic) FBComposerAdditionalInfoButton *chooserBarAdditionalInfoButton;
- (id)viewForChooserAtIndex:(int)arg1;
- (void)reloadChoosers;
- (void)layoutSubviews;
- (BOOL)hasVisibleComponents;
- (float)maxWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

