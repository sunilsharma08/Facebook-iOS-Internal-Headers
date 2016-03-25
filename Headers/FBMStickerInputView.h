//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBInputView-Protocol.h"
#import "FBMStickerPresenterDataSource-Protocol.h"
#import "FBMStickerPresenterDelegate-Protocol.h"
#import "FBMStickerTabBarDelegate-Protocol.h"

@class FBBadgeView, FBMDefaultStickerManager, FBMStickerManager, FBMStickerResourceManager, FBMStickerStoreManager, FBMStickerTabBar, FBMStickerTabBarDataSource, NSString, UIButton;
@protocol FBMStickerInputViewDelegate, FBMStickerTrayPresenter, FBStickerUserSettings;

@interface FBMStickerInputView : UIView <FBMStickerTabBarDelegate, FBMStickerPresenterDataSource, FBMStickerPresenterDelegate, FBInputView>
{
    UIView *_stickerPresenterView;
    UIButton *_storeBarButton;
    BOOL _isSearchActive;
    BOOL _stickerPresenterNeedsReload;
    BOOL _stickerSearchEnabled;
    id <FBMStickerInputViewDelegate> _delegate;
    id <FBMStickerTrayPresenter> _stickerPresenter;
    UIView *_topSeparatorView;
    UIView *_buttonSeparatorView;
    FBBadgeView *_storeBarButtonBadge;
    FBMStickerTabBar *_stickerPackTabBar;
    FBMStickerManager *_stickerManager;
    FBMDefaultStickerManager *_defaultStickerManager;
    FBMStickerResourceManager *_stickerResourceManager;
    id <FBStickerUserSettings> _userSettings;
    FBMStickerStoreManager *_stickerStoreManager;
    unsigned int _layoutIdiom;
    FBMStickerTabBarDataSource *_tabBarDataSource;
    UIView *_tabBarContainerView;
}

@property(retain, nonatomic) UIView *tabBarContainerView; // @synthesize tabBarContainerView=_tabBarContainerView;
@property(retain, nonatomic) FBMStickerTabBarDataSource *tabBarDataSource; // @synthesize tabBarDataSource=_tabBarDataSource;
@property(nonatomic) unsigned int layoutIdiom; // @synthesize layoutIdiom=_layoutIdiom;
@property(retain, nonatomic) FBMStickerStoreManager *stickerStoreManager; // @synthesize stickerStoreManager=_stickerStoreManager;
@property(retain, nonatomic) id <FBStickerUserSettings> userSettings; // @synthesize userSettings=_userSettings;
@property(retain, nonatomic) FBMStickerResourceManager *stickerResourceManager; // @synthesize stickerResourceManager=_stickerResourceManager;
@property(retain, nonatomic) FBMDefaultStickerManager *defaultStickerManager; // @synthesize defaultStickerManager=_defaultStickerManager;
@property(retain, nonatomic) FBMStickerManager *stickerManager; // @synthesize stickerManager=_stickerManager;
@property(retain, nonatomic) FBMStickerTabBar *stickerPackTabBar; // @synthesize stickerPackTabBar=_stickerPackTabBar;
@property(retain, nonatomic) FBBadgeView *storeBarButtonBadge; // @synthesize storeBarButtonBadge=_storeBarButtonBadge;
@property(retain, nonatomic) UIView *buttonSeparatorView; // @synthesize buttonSeparatorView=_buttonSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) id <FBMStickerTrayPresenter> stickerPresenter; // @synthesize stickerPresenter=_stickerPresenter;
@property(nonatomic, getter=isStickerSeachEnabled) BOOL stickerSearchEnabled; // @synthesize stickerSearchEnabled=_stickerSearchEnabled;
@property(nonatomic) __weak id <FBMStickerInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)accessibilityScroll:(int)arg1;
- (BOOL)shouldDisableTextInput;
- (void)_updateStoreBarButtonAccessibilityWithBadgeCount:(unsigned int)arg1;
- (void)updateStoreButtonBadge;
- (id)_analyticsExtrasForStickerTray;
- (void)_didSelectStoreButton;
- (id)_titleForTabIndex:(int)arg1;
- (void)_selectTabAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)_stickerPackAtTabIndex:(unsigned int)arg1;
- (BOOL)_shouldHideTabBar;
- (void)stickerTabBar:(id)arg1 didSelectTabAtIndex:(unsigned int)arg2;
- (void)_updateStickerSearchState;
- (void)_showTabbar;
- (void)_hideTabBar;
- (void)stickerPresenter:(id)arg1 didEndSearching:(id)arg2;
- (void)stickerPresenter:(id)arg1 didBeginSearching:(id)arg2 animationBlock:(CDUnknownBlockType)arg3;
- (void)stickerPresenter:(id)arg1 didSelectOpenStickerPack:(id)arg2;
- (void)stickerPresenter:(id)arg1 didSelectStickerPackAtIndex:(int)arg2;
- (void)stickerPresenter:(id)arg1 didSelectSticker:(id)arg2;
- (BOOL)stickerPresenter:(id)arg1 isSearchPageForIndex:(unsigned int)arg2;
- (id)featuredStickerTagsForPresenter:(id)arg1;
- (unsigned int)numberOfPagesForPresenter:(id)arg1;
- (id)stickerPresenter:(id)arg1 stickersAtTabIndex:(int)arg2;
- (unsigned int)recentStickerTabIndexForPresenter:(id)arg1;
- (id)recentStickerPacksForStickerPresenter:(id)arg1;
- (id)stickerPresenter:(id)arg1 stickerPackAtTabIndex:(int)arg2;
- (BOOL)stickerPresenter:(id)arg1 isDownloadedStickerPack:(int)arg2;
- (id)analyticsExtrasForStickerPresenter:(id)arg1;
- (void)_restoreLastSelectedStickerPackTab;
- (void)_saveLastStickerPackTab;
- (void)layoutSubviews;
- (void)_reloadStickerPacks;
- (id)_stickerStoreBarButton;
- (void)_reloadStickerPresenterIfNeeded;
- (void)_setStickerPresenterNeedsReload;
- (BOOL)_canReloadStickerPresenter;
- (void)downloadedStickerPacksDidChange;
- (void)setSearchingInFullScreen:(BOOL)arg1;
- (void)tearDown;
- (void)setIsSearchActive:(BOOL)arg1;
- (void)openStickerPack:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 stickerManager:(id)arg2 defaultStickerManager:(id)arg3 stickerResourceManager:(id)arg4 stickerStoreManager:(id)arg5 stickerScrollController:(id)arg6 userSettings:(id)arg7 layoutIdiom:(unsigned int)arg8;
- (id)initWithFrame:(struct CGRect)arg1 layoutIdiom:(unsigned int)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

