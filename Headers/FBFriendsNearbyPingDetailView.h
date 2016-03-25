//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBFriendsNearbyLocationPing, FBFriendsNearbyTableViewCell, FBKVOController, FBUserSession, NSAttributedString, NSString, UITableView;
@protocol FBFriendsNearbyTableViewCellDelegate;

@interface FBFriendsNearbyPingDetailView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    FBFriendsNearbyTableViewCell *_cell;
    FBUserSession *_session;
    UITableView *_containerTableView;
    FBFriendsNearbyLocationPing *_locationPing;
    BOOL _isOutPing;
    NSAttributedString *_nearbyContext;
    NSAttributedString *_metaContext;
    FBKVOController *_kvoController;
    BOOL _hideDetails;
    BOOL _isLoadingPing;
    BOOL _showPingButton;
    BOOL _showMessageButton;
    NSString *_headerTitle;
}

@property(readonly, nonatomic) FBFriendsNearbyTableViewCell *cell; // @synthesize cell=_cell;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)reloadData;
- (void)setHideDetails:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 withNearbyContext:(id)arg2 withMetaContext:(id)arg3 isOutPing:(BOOL)arg4;
@property(nonatomic) __weak id <FBFriendsNearbyTableViewCellDelegate> delegate;
- (void)_setupMessageButtonQE;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

