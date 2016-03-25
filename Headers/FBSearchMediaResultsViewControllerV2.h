//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBComponentCellAppearanceEventListener-Protocol.h"
#import "FBComponentCollectionViewDataSourceEventListener-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBSearchMediaAnimatedHeaderViewDelegate-Protocol.h"
#import "FBSearchMediaGridLayoutManagerDelegate-Protocol.h"
#import "FBSearchResultsActivityListener-Protocol.h"
#import "FBSearchResultsControllerProtocol-Protocol.h"
#import "FBSearchResultsDownloaderDelegate-Protocol.h"
#import "FBSearchResultsPhotoCollectionDataSourceFetchingDelegate-Protocol.h"
#import "FBSearchResultsStoreDelegate-Protocol.h"

@class FBAnimationPerformanceLogger, FBComponentCollectionViewDataSource, FBDelegateForwarder, FBGraphSearchResultsDownloader, FBResolvableProxyingNavigationCoordinator, FBScenePath, FBSearchMediaAnimatedHeaderView, FBSearchMediaGridCollectionViewLayout, FBSearchMediaGridLayoutManager, FBSearchMediaResultsTwiddler, FBSearchPivotsController, FBSearchResultsActivityListenerAnnouncer, FBSearchResultsConfig, FBSearchResultsContext, FBSearchResultsPhotoTapResponder, FBSearchResultsStore, FBSearchResultsTransientViewStateHelper, FBSearchSession, FBUserSession, NSArray, NSString, UICollectionView, UIScrollView;

@interface FBSearchMediaResultsViewControllerV2 : UIViewController <FBSearchMediaGridLayoutManagerDelegate, FBSearchResultsDownloaderDelegate, FBSearchResultsPhotoCollectionDataSourceFetchingDelegate, FBSearchResultsStoreDelegate, FBComponentCollectionViewDataSourceEventListener, FBComponentScrollEventListener, FBComponentCellAppearanceEventListener, FBAccessibilityInvalidationEventsListener, FBSearchMediaAnimatedHeaderViewDelegate, FBSearchResultsActivityListener, FBSearchResultsControllerProtocol>
{
    FBUserSession *_session;
    FBSearchSession *_searchSession;
    FBScenePath *_scenePath;
    FBSearchResultsConfig *_config;
    NSString *_pendingImpressionSource;
    FBSearchResultsContext *_searchResultsContext;
    BOOL _loadingFooterShown;
    BOOL _friendsContentHeaderShown;
    BOOL _publicContentHeaderShown;
    BOOL _useChronoSort;
    NSArray *_subQueries;
    UIViewController *_hostViewController;
    FBSearchResultsActivityListenerAnnouncer *_announcer;
    FBSearchResultsTransientViewStateHelper *_viewStateHelper;
    FBAnimationPerformanceLogger *_apTracker;
    UICollectionView *_collectionView;
    FBGraphSearchResultsDownloader *_downloader;
    FBSearchResultsStore *_store;
    FBSearchMediaGridCollectionViewLayout *_layout;
    FBSearchMediaGridLayoutManager *_layoutManager;
    FBComponentCollectionViewDataSource *_componentDataSource;
    FBResolvableProxyingNavigationCoordinator *_proxyingNavigationCoordinator;
    FBDelegateForwarder *_scrollViewDelegateForwarder;
    FBSearchResultsPhotoTapResponder *_photoTapResponder;
    FBSearchPivotsController *_searchPivotsController;
    FBSearchMediaResultsTwiddler *_twiddler;
    FBSearchMediaAnimatedHeaderView *_animatedHeaderView;
    BOOL _isAnimatedHeaderShowing;
}

- (void).cxx_destruct;
- (void)_hideAnimatedHeader;
- (void)_loadAnimatedHeaderFromModuleEdge:(id)arg1;
- (float)_topInsetForAnimatedHeader;
- (void)_updateViewState:(unsigned int)arg1;
- (BOOL)_hasMoreData;
- (void)_hideLoadingFooter;
- (void)_showLoadingFooter;
- (void)_showPublicContentSectionHeader;
- (void)_showFriendsContentSectionHeader;
- (void)_loadTail;
- (void)_createComponentDataSourceIfNeeded;
- (id)_createComponentContextWithOptionalDependencies:(id)arg1;
- (unsigned int)_sectionForModuleEdge:(id)arg1;
- (void)resultsDidReceiveTapOnSeeMoreMedia;
- (void)mediaAnimatedHeaderView:(id)arg1 didTapOnPhoto:(id)arg2;
- (void)dataSourceDidEndUpdates:(id)arg1;
- (void)componentDidDisappearFromViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)componentWillAppearInViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (unsigned int)layoutManager:(id)arg1 highlightIndexForEdges:(id)arg2 atIndexPath:(id)arg3;
- (unsigned int)layoutManager:(id)arg1 maximumDisplayableItemsForEdges:(id)arg2 inSection:(unsigned int)arg3;
- (void)layoutManagerNeedMoreResults:(id)arg1;
- (void)layoutManager:(id)arg1 didPrepareItemSpanMediaArray:(id)arg2 atIndexPaths:(id)arg3;
- (unsigned int)layoutManager:(id)arg1 numberOfItemsForLayoutInSection:(unsigned int)arg2;
- (float)layoutManagerHeaderHeight:(id)arg1;
- (unsigned int)layoutManagerNumberOfSections:(id)arg1;
- (void)DEPRECATED_searchResultsStore:(id)arg1 didUpdateEdges:(id)arg2;
- (void)DEPRECATED_searchResultsStore:(id)arg1 didAddEdges:(id)arg2 atIndexPaths:(id)arg3;
- (BOOL)searchResultsPhotoCollectionDataSourceHasMoreToSync:(id)arg1;
- (void)searchResultsPhotoCollectionDataSourceLoadMorePhotos:(id)arg1;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (void)downloader:(id)arg1 didLoadConnection:(id)arg2 latency:(unsigned long long)arg3 isCachedResponse:(BOOL)arg4 isHeadRequest:(BOOL)arg5;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
@property(readonly, copy, nonatomic) NSString *resultsSessionID;
- (void)setViewState:(unsigned int)arg1;
- (void)setNeedsToYieldImpressionWithSource:(id)arg1;
@property(readonly, nonatomic) unsigned int resultType;
- (void)setScrollsToTop:(BOOL)arg1;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (void)loadHeadIfEmpty;
- (void)flushImpressionData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveAccessibilityInvalidation;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 searchSession:(id)arg2 hostViewController:(id)arg3 semantic:(id)arg4 announcer:(id)arg5 scenePath:(id)arg6 externalScrollViewDelegates:(id)arg7 useChronoSort:(BOOL)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

