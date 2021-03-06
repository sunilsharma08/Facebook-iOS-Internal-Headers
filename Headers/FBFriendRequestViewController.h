//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceSectionHeaderHandler-Protocol.h"
#import "FBComponentTableViewDataSourceSelectionEventListener-Protocol.h"
#import "FBFriendCenterItem-Protocol.h"
#import "FBFriendingPossibilitiesEdgesListener-Protocol.h"
#import "FBPYMKStreamListener-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"

@class FBComponentTableViewDataSource, FBFriendRequestTableViewDataSourceHelper, FBFriendingPossibilitiesDataCoordinator, FBFriendingPossibilitiesDataSource, FBFriendingToolbox, FBJewelController, FBPullToRefreshView, FBScenePath, FBUserSession, NSObject, NSString, UITableView;
@protocol FBCancelable, FBFriendCenterScrollDelegate, FBPYMKStreamProtocol;

@interface FBFriendRequestViewController : UIViewController <FBFriendCenterItem, CKComponentProvider, FBComponentTableViewDataSourceSelectionEventListener, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewDataSourceCellConfigProvider, FBComponentScrollEventListener, FBComponentTableViewDataSourceEventListener, FBPYMKStreamListener, FBFriendingPossibilitiesEdgesListener, FBPullToRefreshViewDelegate>
{
    FBUserSession *_session;
    FBFriendingPossibilitiesDataCoordinator *_friendingDataCoordinator;
    FBFriendingPossibilitiesDataSource *_friendingDataSource;
    NSObject<FBPYMKStreamProtocol> *_pymkStream;
    FBComponentTableViewDataSource *_dataSource;
    FBFriendRequestTableViewDataSourceHelper *_dataSourceHelper;
    FBFriendingToolbox *_toolbox;
    FBScenePath *_scenePath;
    id <FBCancelable> _cancelableClearUnseenToken;
    UITableView *_tableView;
    FBPullToRefreshView *_pullToRefreshView;
    BOOL _hasBeenPresented;
    BOOL _isInView;
    FBJewelController *_jewelController;
    BOOL _hasReachedEndOfPYMK;
    BOOL _hasAppearedOnScreen;
    NSObject<FBFriendCenterScrollDelegate> *_scrollDelegate;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
+ (id)newViewControllerWithSession:(id)arg1;
+ (BOOL)lazyInitialize;
+ (unsigned int)menuItem;
+ (id)menuItemButton;
@property(nonatomic) __weak NSObject<FBFriendCenterScrollDelegate> *scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (void)_sendOutJewelClearRequest;
- (void)_clearUnseen;
- (void)scheduleMarkAllRequestsAsSeen;
- (void)_logNoMorePYMKEvent;
- (void)_updateBadgeText;
- (void)_loadPYMKIfNecessary;
- (void)_initRequestFromDataSource;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (id)analyticsModule;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)PYMKStream:(id)arg1 didUpdateSuggestion:(id)arg2 atIndex:(unsigned int)arg3;
- (void)PYMKStream:(id)arg1 didFailLoadingWithError:(id)arg2 andCurrentSuggestions:(id)arg3;
- (void)PYMKStream:(id)arg1 didFinishedLoadingSuggestions:(id)arg2 andNumberOfNew:(unsigned int)arg3;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)friendingPossibilitiesDataSource:(id)arg1 didUpdateEdges:(id)arg2 isReloading:(BOOL)arg3;
- (void)friendingPossibilitiesDataSource:(id)arg1 didRemoveEdges:(id)arg2 isReloading:(BOOL)arg3;
- (void)friendingPossibilitiesDataSource:(id)arg1 didInsertEdges:(id)arg2 forLoadType:(int)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)preFetchFriendRequest;
- (BOOL)fb_automaticallyAdjustsTableViewInsets;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (unsigned int)friendCenterPreferredPresentationMethod;
- (void)prefetchIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

