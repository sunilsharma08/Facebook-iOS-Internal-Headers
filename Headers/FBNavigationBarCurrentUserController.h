//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNavigationBarCurrentUserViewDelegate-Protocol.h"
#import "FBPopoverControllerDelegate-Protocol.h"

@class FBNavigationBarCurrentUserView, FBPopoverActionSheet, FBUserSession, NSString;
@protocol FBAppSessionController, FBNavigationBarCurrentUserControllerDelegate, FBNavigationCoordinator;

@interface FBNavigationBarCurrentUserController : NSObject <FBNavigationBarCurrentUserViewDelegate, FBPopoverControllerDelegate>
{
    FBUserSession *_session;
    id <FBAppSessionController> _appSessionController;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBPopoverActionSheet *_popoverActionSheet;
    BOOL _didSelectActionSheetButton;
    BOOL _displayDivebar;
    FBNavigationBarCurrentUserView *_currentUserView;
    id <FBNavigationBarCurrentUserControllerDelegate> _delegate;
}

@property(nonatomic) BOOL displayDivebar; // @synthesize displayDivebar=_displayDivebar;
@property(nonatomic) __weak id <FBNavigationBarCurrentUserControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBNavigationBarCurrentUserView *currentUserView; // @synthesize currentUserView=_currentUserView;
- (void).cxx_destruct;
- (void)_fetchPersonAndRun:(CDUnknownBlockType)arg1;
- (void)_logImpressionIfNeeded;
- (void)_didTapLogoutButton:(id)arg1;
- (id)_popoverActionSheetButtonItems;
- (void)_didTapPrivacySettingsButton:(id)arg1;
- (void)_didTapAccountSettingsButton:(id)arg1;
- (void)_didTapActivityLogButton:(id)arg1;
- (void)_didTapViewProfileButton:(id)arg1;
- (void)_logTap:(id)arg1;
- (void)_navigateToURL:(id)arg1;
- (void)_orientationDidChangeNotification:(id)arg1;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)currentUserViewDidTapChatButton:(id)arg1;
- (void)currentUserView:(id)arg1 didTapMenuView:(id)arg2;
- (void)currentUserView:(id)arg1 didTapProfileView:(id)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1 appSessionController:(id)arg2 navigationCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

