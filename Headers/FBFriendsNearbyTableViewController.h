//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBTableViewController.h"

#import "FBFriendsNearbyDataListener-Protocol.h"
#import "FBFriendsNearbyPingMapViewerDelegate-Protocol.h"
#import "FBFriendsNearbySearchBarDelegate-Protocol.h"
#import "FBFriendsNearbyTableViewCellDelegate-Protocol.h"
#import "FBFriendsNearbyTableViewDelegate-Protocol.h"
#import "FBKeyboardObserverDelegate-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBContentInsetTracker, FBFNInviteFriendPickerController, FBFNTableViewInviteDataSource, FBFNTableViewSearchDataSource, FBFriendsNearbyBarHeaderPositionManager, FBFriendsNearbyLocationPing, FBFriendsNearbyPingDetailView, FBFriendsNearbyPingDialogHelper, FBFriendsNearbyPingMapViewer, FBFriendsNearbySearchBar, FBKVOController, FBKeyboardObserver, FBNetworkErrorBar, FBNuxStepChainController, FBPullToRefreshView, FBUserSession, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIActivityIndicatorView, UIBarButtonItem, UIImage, UINavigationItem;
@protocol FBFriendsNearbyDataSource;

@interface FBFriendsNearbyTableViewController : FBTableViewController <FBFriendsNearbyDataListener, FBFriendsNearbyPingMapViewerDelegate, FBFriendsNearbySearchBarDelegate, FBFriendsNearbyTableViewCellDelegate, FBFriendsNearbyTableViewDelegate, FBKeyboardObserverDelegate, FBPullToRefreshViewDelegate, UIScrollViewDelegate>
{
    FBUserSession *_session;
    NSMutableDictionary *_outPingDuration;
    NSMutableDictionary *_inPingMap;
    NSMutableArray *_numberOfFriendsToShow;
    FBFriendsNearbyLocationPing *_selectedLocationPing;
    BOOL _updateHeaderView;
    BOOL _pingDetailViewVisible;
    FBFriendsNearbyPingDialogHelper *_pingDialogHelper;
    FBNuxStepChainController *_nuxController;
    int _currentState;
    FBContentInsetTracker *_contentInsetTracker;
    UIBarButtonItem *_previousRightButton;
    UIBarButtonItem *_refreshButton;
    UIBarButtonItem *_loadingButton;
    UIActivityIndicatorView *_activityIndicator;
    struct CGRect _pingMapViewMaxRect;
    struct CGRect _pingMapViewMinRect;
    UIImage *_pingImageOn;
    UIImage *_pingImageOff;
    UIImage *_pingImageOnHighlighted;
    UIImage *_pingImageOffHighlighted;
    UIImage *_pingNewImageOn;
    UIImage *_pingNewImageOff;
    FBKeyboardObserver *_keyboardObserver;
    FBNetworkErrorBar *_errorBar;
    FBFriendsNearbySearchBar *_searchBar;
    FBFriendsNearbyBarHeaderPositionManager *_searchBarPositionManager;
    FBFNInviteFriendPickerController *_inviteController;
    FBFNTableViewInviteDataSource *_tableViewInviteDataSource;
    FBFNTableViewSearchDataSource *_tableViewSearchDataSource;
    FBKVOController *_KVOController;
    unsigned long long _dashboardViewLoadTime;
    unsigned long long _firstForwardScrollTime;
    float _scrollViewLastContentOffset;
    BOOL _typeInSearch;
    NSMutableSet *_loadingMoreNearbySections;
    unsigned int _totalTimeSpentMs;
    NSDate *_dashboardAppearTime;
    NSMutableArray *_interactions;
    BOOL _showPingButton;
    BOOL _showMessageButton;
    UINavigationItem *_parentNavigationItems;
    NSString *_showPingDialogWithFBID;
    NSString *_focusToFBID;
    FBPullToRefreshView *_pullToRefreshView;
    id <FBFriendsNearbyDataSource> _dataSource;
    NSMutableSet *_outPingSet;
    NSArray *_visibleDashboardSections;
    FBFriendsNearbyPingMapViewer *_pingMapViewer;
    FBFriendsNearbyPingDetailView *_pingDetailView;
}

+ (id)viewForHeaderWithTitle:(id)arg1 width:(float)arg2;
@property(retain, nonatomic) FBFriendsNearbyPingDetailView *pingDetailView; // @synthesize pingDetailView=_pingDetailView;
@property(retain, nonatomic) FBFriendsNearbyPingMapViewer *pingMapViewer; // @synthesize pingMapViewer=_pingMapViewer;
@property(copy, nonatomic) NSArray *visibleDashboardSections; // @synthesize visibleDashboardSections=_visibleDashboardSections;
@property(retain, nonatomic) NSMutableSet *outPingSet; // @synthesize outPingSet=_outPingSet;
@property(nonatomic) __weak id <FBFriendsNearbyDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FBPullToRefreshView *pullToRefreshView; // @synthesize pullToRefreshView=_pullToRefreshView;
@property(copy, nonatomic) NSString *focusToFBID; // @synthesize focusToFBID=_focusToFBID;
@property(copy, nonatomic) NSString *showPingDialogWithFBID; // @synthesize showPingDialogWithFBID=_showPingDialogWithFBID;
@property(retain, nonatomic) UINavigationItem *parentNavigationItems; // @synthesize parentNavigationItems=_parentNavigationItems;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)_showPingBlueNux;
- (BOOL)_canShowPingBlueNux;
- (void)_updateInvitedSet;
- (void)_startInviteFlowWithSelectedFBIDs:(id)arg1;
- (void)_didTapInviteButton;
- (void)_scrollToTop;
- (void)_dismissSearchResult;
- (void)_hideErrorBar;
- (void)showErrorBarWithErrorType:(unsigned int)arg1 subjectName:(id)arg2 error:(id)arg3;
- (void)_reloadPingDetailData;
- (void)_adjustLayoutPingDetailView;
- (void)pingMapViewer:(id)arg1 didSelectLocationPing:(id)arg2;
- (BOOL)expandPingMap:(id)arg1;
- (id)previousLocationPing:(id)arg1;
- (id)nextLocationPing:(id)arg1;
- (id)locationPings:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_focusPingMapToUser:(id)arg1;
- (void)friendsNearbyDataDidLoad:(BOOL)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)_didTapRefresh;
- (void)_adjustHeaderView;
- (void)_handleLoadMoreInNearbySection:(id)arg1 error:(id)arg2;
- (void)_loadMore:(int)arg1;
- (void)_configureNumberOfFriendsToShow;
- (BOOL)_hasMore:(int)arg1;
- (BOOL)_isMoreCell:(id)arg1;
- (BOOL)_isEmptyMandatorySection:(int)arg1;
- (void)_updateTableView;
- (void)_loadPingSet;
- (void)_removeLocationPing:(id)arg1;
- (void)_addLocationPing:(id)arg1;
- (BOOL)_showHeaderMap;
- (id)_indexPathForFBID:(id)arg1 inSection:(unsigned int)arg2;
- (void)friendsNearbyTableViewCellDidTapCell:(id)arg1;
- (void)_showPingDialogForPerson:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapPingButton:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapMessageButton:(id)arg1;
- (void)reloadCells:(id)arg1;
- (id)tableView:(id)arg1 cellForNearbyFriend:(id)arg2 indexPath:(id)arg3;
- (void)reloadData;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellIdentifierAtIndexPath:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)fb_automaticallyAdjustsTableViewInsets;
- (BOOL)fb_showNavigationJewels;
- (void)fb_handleTapBackButton;
- (SEL)fb_actionForBackArrowButton;
- (BOOL)fb_showBackArrowButton;
- (void)_setupMessageButtonQE;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadMapView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 dataSource:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

