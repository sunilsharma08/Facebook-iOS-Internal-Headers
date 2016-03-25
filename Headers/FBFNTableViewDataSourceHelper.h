//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFriendsNearbyTableViewCellDelegate-Protocol.h"

@class FBFNInviteDataController, FBUserSession, NSMutableSet, NSSet, NSString;
@protocol FBFriendsNearbyTableViewDelegate;

@interface FBFNTableViewDataSourceHelper : NSObject <FBFriendsNearbyTableViewCellDelegate>
{
    FBUserSession *_session;
    NSMutableSet *_invitingFBIDs;
    FBFNInviteDataController *_inviteController;
    id <FBFriendsNearbyTableViewDelegate> _tableViewDelegate;
}

@property(nonatomic) __weak id <FBFriendsNearbyTableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(readonly, copy, nonatomic) NSSet *invitingFBIDs; // @synthesize invitingFBIDs=_invitingFBIDs;
- (void).cxx_destruct;
- (void)friendsNearbyTableViewCellDidTapCell:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapUndoButton:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapPingButton:(id)arg1;
- (id)getInvitingFBIDs;
- (id)initWithSession:(id)arg1 tableViewDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

