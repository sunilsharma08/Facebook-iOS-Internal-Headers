//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPageActivitiesCardController.h"

#import "FBCardViewProvider-Protocol.h"
#import "FBPageActivitiesLinksCardCellDelegate-Protocol.h"
#import "FBPageBadgeCountListener-Protocol.h"

@class FBNotificationTableViewTraits, FBPageActivitiesLinksCardCell, FBUserSession, NSString, NSURL, UIView, UIViewController;
@protocol FBPageBadgeCountManagerProtocol, FBPageCardProtocol;

@interface FBPageActivitiesLinksCardController : FBPageActivitiesCardController <FBPageActivitiesLinksCardCellDelegate, FBPageBadgeCountListener, FBCardViewProvider>
{
    BOOL _showMessagesLink;
    NSURL *_messagesURL;
    id <FBPageBadgeCountManagerProtocol> _badgeCountManager;
    FBPageActivitiesLinksCardCell *_cardCell;
    FBUserSession *_userSession;
    UIViewController *_notificationViewController;
    FBNotificationTableViewTraits *_notificationTableViewTraits;
    UIViewController *_pageNewLikesViewController;
    NSString *_pageName;
}

@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) UIViewController *pageNewLikesViewController; // @synthesize pageNewLikesViewController=_pageNewLikesViewController;
- (void).cxx_destruct;
- (void)pageAdminBadgeCountManager:(id)arg1 countDidChangeForPageFBID:(id)arg2 type:(int)arg3 count:(int)arg4;
- (void)cellHeightDidChange;
- (void)openNewLikes;
- (void)openMessages;
- (void)openPageTips;
- (void)_fetchTitle;
- (void)openNotifications;
- (void)_markPageActivitySeenWithType:(int)arg1;
- (void)_loadUnreadCounts;
- (void)configureWithPage:(id)arg1;
@property(readonly, nonatomic) UIView<FBPageCardProtocol> *cardView;
- (void)dealloc;
- (id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 showMessagesLink:(BOOL)arg5 messagesURL:(id)arg6 badgeCountManaget:(id)arg7 notificationTableViewTraits:(id)arg8 scenePath:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

