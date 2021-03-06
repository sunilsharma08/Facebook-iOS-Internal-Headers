//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBPopoverControllerDelegate-Protocol.h"

@class FBPopoverActionSheet, NSArray, NSString, UIActivityIndicatorView, UIButton, UIColor, UIImageView, UILabel, UITextField;

@interface FBSideFeedUnitView : UIView <FBPopoverControllerDelegate>
{
    UIImageView *_card;
    struct UIEdgeInsets _unitInsets;
    UIView *_titleSeparatorView;
    UIView *_textFieldSeparatorView;
    UIView *_seeMoreSeparatorView;
    UITextField *_textField;
    UIActivityIndicatorView *_activityIndicatorView;
    float _seeMoreSeparatorThickness;
    struct UIEdgeInsets _seeMoreSeparatorInsets;
    UIButton *_settingsButton;
    BOOL _shouldCardMaskUnitView;
    BOOL _showTitleHeader;
    BOOL _hasTitleSeparator;
    BOOL _showSeeMoreButton;
    BOOL _isShowingMore;
    BOOL _showActivityIndicator;
    BOOL _showTextField;
    BOOL _showSettingsButton;
    UIView *_unitContentView;
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
    UIButton *_menuButton;
    float _titleSeparatorThickness;
    FBPopoverActionSheet *_popoverActionSheet;
    NSArray *_actionButtonItems;
    UIButton *_seeMoreButton;
    struct UIEdgeInsets _titleSeparatorInsets;
}

+ (id)_imageWithColor:(id)arg1;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) BOOL showSettingsButton; // @synthesize showSettingsButton=_showSettingsButton;
@property(nonatomic) BOOL showTextField; // @synthesize showTextField=_showTextField;
@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) BOOL isShowingMore; // @synthesize isShowingMore=_isShowingMore;
@property(nonatomic) BOOL showSeeMoreButton; // @synthesize showSeeMoreButton=_showSeeMoreButton;
@property(readonly, nonatomic) UIButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property(copy, nonatomic) NSArray *actionButtonItems; // @synthesize actionButtonItems=_actionButtonItems;
@property(readonly, nonatomic) FBPopoverActionSheet *popoverActionSheet; // @synthesize popoverActionSheet=_popoverActionSheet;
@property(nonatomic) float titleSeparatorThickness; // @synthesize titleSeparatorThickness=_titleSeparatorThickness;
@property(nonatomic) struct UIEdgeInsets titleSeparatorInsets; // @synthesize titleSeparatorInsets=_titleSeparatorInsets;
@property(nonatomic) BOOL hasTitleSeparator; // @synthesize hasTitleSeparator=_hasTitleSeparator;
@property(nonatomic) BOOL showTitleHeader; // @synthesize showTitleHeader=_showTitleHeader;
@property(nonatomic) BOOL shouldCardMaskUnitView; // @synthesize shouldCardMaskUnitView=_shouldCardMaskUnitView;
@property(readonly, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *unitContentView; // @synthesize unitContentView=_unitContentView;
- (void).cxx_destruct;
- (float)_heightForSeeMoreButtonForViewWidth:(float)arg1;
- (float)_heightForHeaderForViewWidth:(float)arg1;
- (float)_widthForTitleForViewWidth:(float)arg1;
- (float)_heightForTitleForWidth:(float)arg1;
- (void)_cleanupPopover;
- (void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)_dissmisPopoverWhenRotatingToPortrait:(id)arg1;
- (void)_menuButtonTapped:(id)arg1;
@property(retain, nonatomic) UIColor *titleSeparatorColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

