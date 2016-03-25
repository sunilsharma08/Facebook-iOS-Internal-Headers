//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPlacePickerBaseViewController.h"

#import "CKComponentSizeRangeProviding-Protocol.h"
#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBActionableTableViewCellDelegate-Protocol.h"
#import "FBComponentCellAppearanceEventListener-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewCellProviding-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceSectionHeaderHandler-Protocol.h"
#import "FBComponentTableViewDataSourceSelectionEventListener-Protocol.h"
#import "FBPlaceFlatTableViewCellDelegate-Protocol.h"
#import "FBPlacePickerCrowdsourcingControllerDelegate-Protocol.h"
#import "FBPlacePickerSearchBarDelegate-Protocol.h"
#import "FBPlacePickerV2NearbyFetcherDelegate-Protocol.h"
#import "FBPlacePickerViewDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "ZRTariffedUxSentryDelegate-Protocol.h"

@class FBComponentTableViewDataSource, FBContentInsetTracker, FBCrowdsourcingHomeCreationLogger, FBCrowdsourcingReportRequestController, FBLoadingIndicatorView, FBMemPerson, FBNearbyPlace, FBPlacePickerCrowdsourcingController, FBPlacePickerDataSource, FBPlacePickerLogger, FBPlacePickerV2NearbyFetcher, FBPlacePickerView, FBPlacePickerViewErrorController, FBQuickCheckinLogger, FBUserSession, NSMutableDictionary, NSString, UIView;
@protocol FBPlacePickerSearchBarProtocol, FBServiceTransactionMutating;

@interface FBPlacePickerV3ViewController : FBPlacePickerBaseViewController <CKComponentSizeRangeProviding, FBAccessibilityInvalidationEventsListener, FBActionableTableViewCellDelegate, FBComponentCellAppearanceEventListener, FBComponentScrollEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceSelectionEventListener, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewCellProviding, FBPlaceFlatTableViewCellDelegate, FBPlacePickerCrowdsourcingControllerDelegate, FBPlacePickerV2NearbyFetcherDelegate, FBPresentableViewController, FBPullToRefreshViewDelegate, ZRTariffedUxSentryDelegate, FBPlacePickerSearchBarDelegate, FBPlacePickerViewDelegate>
{
    FBUserSession *_session;
    FBPlacePickerView *_placePickerView;
    NSString *_placePickerSessionID;
    NSString *_compositionID;
    FBNearbyPlace *_currentPlace;
    FBLoadingIndicatorView *_loadingView;
    FBPlacePickerDataSource *_dataSource;
    FBPlacePickerLogger *_logger;
    FBCrowdsourcingHomeCreationLogger *_homeCreationLogger;
    FBQuickCheckinLogger *_quickCheckinLogger;
    FBPlacePickerV2NearbyFetcher *_nearbyFetcher;
    FBPlacePickerViewErrorController *_errorViewController;
    FBPlacePickerCrowdsourcingController *_crowdsourcingController;
    FBCrowdsourcingReportRequestController *_reportController;
    FBContentInsetTracker *_contentInsetTracker;
    NSMutableDictionary *_crowdsourcingContexts;
    BOOL _isViewWillAppearInvoked;
    UIView<FBPlacePickerSearchBarProtocol> *_textField;
    FBComponentTableViewDataSource *_componentDataSource;
    id <FBServiceTransactionMutating> _currentUserRequestToken;
    FBMemPerson *_currentUser;
}

+ (id)zeroRatingSentry;
- (void).cxx_destruct;
- (struct CKSizeRange)sizeRangeForBoundingSize:(struct CGSize)arg1;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (BOOL)_hasLimitedScreenSize;
- (id)analyticsModule;
- (void)tableViewCellDidSwipeToShowActionPanel:(id)arg1;
- (BOOL)tableViewCellShouldShowOptionButton:(id)arg1;
- (BOOL)tableViewCellShouldShowActionPanel:(id)arg1;
- (void)tableViewCellNotPublicMenuTapped:(id)arg1;
- (void)tableViewCellInappropriateMenuTapped:(id)arg1;
- (void)tableViewCellSuggestEditsMenuTapped:(id)arg1;
- (void)tableViewCellReportMenuTapped:(id)arg1;
- (void)tableViewCellReportButtonTapped:(id)arg1;
- (void)tableViewCellSuggestEditsButtonTapped:(id)arg1;
- (void)tableViewCellPopoverShown;
- (void)placePickerCrowdsourcingController:(id)arg1 didSelectExistingPlace:(id)arg2;
- (void)placePickerCrowdsourcingController:(id)arg1 didCreatePlace:(id)arg2 suggestedPhoto:(BOOL)arg3 creationFlowType:(id)arg4;
- (void)placePickerCrowdsourcingController:(id)arg1 willNavigateToCrowdsourcingFlow:(unsigned int)arg2;
- (void)placePickerViewDidPreserveCurrentPlaceSelection:(id)arg1;
- (void)placePickerViewDidRemoveCurrentPlaceSelection:(id)arg1;
- (void)placePickerViewDidTapOnRetryButton:(id)arg1;
- (void)placePickerViewDidTapTurnOnLocationServiceButton:(id)arg1;
- (BOOL)_isEmptySearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)placePickerViewErrorControllerDidTapRetryLoadPlaces;
- (void)placePickerViewErrorControllerDidTapTurnOnLocationServiceButton;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndScrollingAnimation:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)_fetchCurrentUser;
- (void)_cancelCurrentUserRequest;
- (id)dataSource:(id)arg1 tableView:(id)arg2 cellForRowAtIndexPath:(id)arg3;
- (float)dataSource:(id)arg1 tableView:(id)arg2 heightForRowAtIndexPath:(id)arg3;
- (void)componentDidDisappearFromViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)componentWillAppearInViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)dataSource:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)dataSource:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)_hideLoadingView;
- (void)_showLoadingViewWithText:(id)arg1;
- (void)_hideErrorView;
- (void)_showErrorView:(unsigned int)arg1;
- (void)nearbyFetcherLocationAccessDenied:(id)arg1;
- (void)nearbyFetcherLocationAccessGranted:(id)arg1;
- (void)nearbyFetcher:(id)arg1 didFetchNearby:(id)arg2 withError:(id)arg3;
- (void)nearbyFetcher:(id)arg1 didFetchLocation:(id)arg2 withError:(id)arg3;
- (void)_didFinishWithPlace:(id)arg1 location:(id)arg2 suggestedPhoto:(BOOL)arg3;
- (id)currentPlace;
- (void)setCurrentPlace:(id)arg1;
- (void)setCellCustomHighlightStyle:(int)arg1;
- (id)compositionID;
- (id)placePickerSessionID;
- (void)_didTapCancel;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)_viewIsAnimating;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)nonZeroRatedSessionUxMustDeactivate:(id)arg1;
- (void)nonZeroRatedSessionDidFailToStart:(id)arg1;
- (void)nonZeroRatedSessionUxMayActivate:(id)arg1;
- (void)setZeroRatingSentry:(id)arg1;
- (id)quickCheckinLogger;
- (id)homeCreationLogger;
- (void)_createCheckinPlacesBugReportData:(id)arg1;
- (void)dealloc;
- (void)_didEnterBackgroundNotification;
- (void)didReceiveAccessibilityInvalidation;
- (id)initWithSession:(id)arg1 textField:(id)arg2 nearbyFetcher:(id)arg3 compositionID:(id)arg4;
- (id)initWithSession:(id)arg1 textField:(id)arg2 searchType:(int)arg3 compositionID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

