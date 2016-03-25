//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBPopoverControllerDelegate-Protocol.h"
#import "FBReactionOverlayNuxViewDelegate-Protocol.h"
#import "FBReactionOverlayPageInfoViewDelegate-Protocol.h"

@class CAGradientLayer, FBMemPage, FBPopoverActionSheet, FBReactionCardsTableView, FBReactionOverlayFailureView, FBReactionOverlayHeaderView, FBReactionOverlayNuxView, NSArray, NSString, UIActivityIndicatorView, UIImageView;
@protocol FBReactionOverlayViewDelegate;

@interface FBReactionOverlayView : UIView <FBPopoverControllerDelegate, FBReactionOverlayPageInfoViewDelegate, FBReactionOverlayNuxViewDelegate>
{
    BOOL _shouldHaveSeeMoreButton;
    FBPopoverActionSheet *_popoverActionSheet;
    FBReactionOverlayFailureView *_failureView;
    BOOL _supportsTranslucency;
    id <FBReactionOverlayViewDelegate> _reactionDelegate;
    FBReactionCardsTableView *_contentsView;
    UIView *_transparentBackgroundView;
    FBReactionOverlayHeaderView *_headerView;
    FBReactionOverlayNuxView *_nuxView;
    UIImageView *_coverPhoto;
    CAGradientLayer *_gradientLayer;
    NSArray *_secondaryActionsArray;
    UIActivityIndicatorView *_spinner;
    NSString *_surface;
    FBMemPage *_page;
}

@property(retain, nonatomic) FBMemPage *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(copy, nonatomic) NSArray *secondaryActionsArray; // @synthesize secondaryActionsArray=_secondaryActionsArray;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *coverPhoto; // @synthesize coverPhoto=_coverPhoto;
@property(retain, nonatomic) FBReactionOverlayNuxView *nuxView; // @synthesize nuxView=_nuxView;
@property(retain, nonatomic) FBReactionOverlayHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *transparentBackgroundView; // @synthesize transparentBackgroundView=_transparentBackgroundView;
@property(retain, nonatomic) FBReactionCardsTableView *contentsView; // @synthesize contentsView=_contentsView;
@property(nonatomic) BOOL supportsTranslucency; // @synthesize supportsTranslucency=_supportsTranslucency;
@property(nonatomic) __weak id <FBReactionOverlayViewDelegate> reactionDelegate; // @synthesize reactionDelegate=_reactionDelegate;
- (void).cxx_destruct;
- (void)openPlaceTipsHelp;
- (void)didTapToResetScrollState;
- (void)didPressSeeMoreButtonOnChange:(CDUnknownBlockType)arg1;
- (void)didPressCheckInButton;
- (void)didPressLikeButtonOnChange:(CDUnknownBlockType)arg1;
- (void)_loadCoverPhotoFromWelcomeHeader:(id)arg1;
- (id)_pageInfoView;
- (void)_dismissSecondaryMenu;
- (void)_layoutFailureView;
- (id)_createBackgroundView;
- (void)_backgroundTapped;
- (void)scrollViewDidScrollDownOverDistance:(float)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)presentSecondaryMenu;
- (void)closeButtonTapped;
@property(readonly, nonatomic) BOOL failureViewExists;
@property(readonly, nonatomic) FBReactionOverlayFailureView *failureView;
- (void)setSecondaryActions:(id)arg1;
- (id)cardViews;
- (void)addSeeMoreButton;
- (void)layoutSubviews;
- (void)loadWelcomeHeader:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentsView:(id)arg2 surface:(id)arg3 welcomeHeader:(id)arg4 nux:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

