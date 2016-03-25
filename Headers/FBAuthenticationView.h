//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAuthenticatingView-Protocol.h"
#import "FBLogoutView-Protocol.h"

@class FBGatekeeper, FBImageDownloader, NSString, UIActivityIndicatorView;
@protocol FBAuthenticatingContentView, FBAuthenticatingFooterView, FBAuthenticatingHeaderView, FBAuthenticationViewStyle;

@interface FBAuthenticationView : UIView <FBAuthenticatingView, FBLogoutView>
{
    UIActivityIndicatorView *_activityIndicatorView;
    FBImageDownloader *_imageDownloader;
    FBGatekeeper *_gatekeeper;
    id <FBAuthenticationViewStyle> _style;
    BOOL _isKeyboardVisible;
    BOOL _showActivityIndicator;
    unsigned int _interfaceType;
    UIView *_backgroundView;
    UIView<FBAuthenticatingHeaderView> *_headerView;
    UIView<FBAuthenticatingFooterView> *_footerView;
    UIView<FBAuthenticatingContentView> *_contentView;
    struct CGRect _keyboardTargetFrameInScreen;
}

@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(retain, nonatomic) UIView<FBAuthenticatingContentView> *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView<FBAuthenticatingFooterView> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView<FBAuthenticatingHeaderView> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct CGRect keyboardTargetFrameInScreen; // @synthesize keyboardTargetFrameInScreen=_keyboardTargetFrameInScreen;
@property(nonatomic) BOOL isKeyboardVisible; // @synthesize isKeyboardVisible=_isKeyboardVisible;
@property(nonatomic) unsigned int interfaceType; // @synthesize interfaceType=_interfaceType;
- (void).cxx_destruct;
- (struct CGRect)_statusBarFrameInWindow;
- (BOOL)_shouldHideHeaderAndFooter;
- (void)_displayLoginControls:(BOOL)arg1;
- (void)_hideLoginControls;
- (void)_startLoginControlsAnimations:(unsigned int)arg1;
- (void)_layoutActivityIndicatorView;
- (void)_layoutContentView;
- (void)_layoutFooterView;
- (void)_layoutHeaderView;
- (BOOL)_isTallScreen;
- (void)_updateContentVisibility;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1 excludingKeyboardFrame:(struct CGRect *)arg2 excludingHeader:(BOOL)arg3;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)addHeaderAndBackgroundViews;
- (void)addLoginViews;
- (void)setInterfaceType:(unsigned int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setInterfaceType:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(id)arg1 imageDownloader:(id)arg2 gatekeeper:(id)arg3;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

