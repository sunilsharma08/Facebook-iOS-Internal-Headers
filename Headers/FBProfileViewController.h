//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComponentCellAppearanceEventListener-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceEventListener-Protocol.h"
#import "FBComposerFlowDelegate-Protocol.h"
#import "FBNavigationBarDecorationProvider-Protocol.h"
#import "FBPersonContextualTimelineHeaderDataSourceDelegate-Protocol.h"
#import "FBPersonTimelineTapResponderDataSource-Protocol.h"
#import "FBPersonTimelineTapResponderDelegate-Protocol.h"
#import "FBPostingControllerHostingViewController-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBProfileCoverPhotoUploadFlowControllerHostingViewController-Protocol.h"
#import "FBProfileDownloaderDelegate-Protocol.h"
#import "FBProfileLifeEventComposerOpenerHostingViewController-Protocol.h"
#import "FBProfileLoadingStateTrackerDelegate-Protocol.h"
#import "FBProfilePictureUploadFlowControllerHostingViewController-Protocol.h"
#import "FBProfileSectionControllerDelegate-Protocol.h"
#import "FBProfileStoriesSectionIdentifierProvider-Protocol.h"
#import "FBProfileVideoNotificationListenerDelegate-Protocol.h"
#import "FBScrolling-Protocol.h"
#import "FBSideFeedConfigurationProvider-Protocol.h"
#import "FBStreamListViewStateManagerDelegate-Protocol.h"
#import "FBSwipableProfileViewController-Protocol.h"
#import "FBTimelineAnalyticsDelegate-Protocol.h"
#import "FBTimelineOutboxControllerHostingViewController-Protocol.h"

@class CKComponentHostingView, FBComponentTableViewDataSource, FBComposerTapHandler, FBContextualTimelineHeaderConfiguration, FBFeedImpressionController, FBMemPerson, FBMemProfileTileSectionsConnection, FBNavigationBarDecorationListenerAnnouncer, FBPersonContextualTimelineHeaderDataSource, FBPersonTimelineHeaderDataSource, FBPersonTimelineTapResponder, FBPostingController, FBProfileCoverPhotoUploadFlowController, FBProfileDownloader, FBProfileFallbackCellProvider, FBProfileHeaderController, FBProfileLifeEventComposerOpener, FBProfileLoadingStateTracker, FBProfileOutboxDataSourceAdapter, FBProfilePictureUploadFlowController, FBProfileSectionControllerManager, FBProfileStoriesSectionScrollPositionRestoringProvider, FBProfileToolbox, FBProfileUpdateReminderNuxPresenter, FBProfileVideoNotificationListener, FBProfileWaitTimeTracker, FBScenePath, FBScrollPositionRestoringTableViewController, FBStreamListView, FBStreamListViewStateManager, FBTimelineAnalytics, FBTimelineDataController, FBTimelineOutboxController, FBTimelineSeeFirstNuxPresenter, FBUserSession, FBViewControllerProxyingNavigationCoordinator, NSMutableArray, NSString, UIView;

@interface FBProfileViewController : UIViewController <FBPersonContextualTimelineHeaderDataSourceDelegate, FBTimelineAnalyticsDelegate, FBPresentableViewController, FBPersonTimelineTapResponderDataSource, FBPersonTimelineTapResponderDelegate, FBProfileCoverPhotoUploadFlowControllerHostingViewController, FBProfilePictureUploadFlowControllerHostingViewController, FBComposerFlowDelegate, FBScrolling, FBProfileLifeEventComposerOpenerHostingViewController, FBComponentTableViewDataSourceCellConfigProvider, FBProfileLoadingStateTrackerDelegate, FBPostingControllerHostingViewController, FBComponentScrollEventListener, FBComponentTableViewDataSourceEventListener, FBTimelineOutboxControllerHostingViewController, FBProfileSectionControllerDelegate, FBProfileDownloaderDelegate, FBNavigationBarDecorationProvider, FBProfileVideoNotificationListenerDelegate, FBProfileStoriesSectionIdentifierProvider, FBComponentCellAppearanceEventListener, FBStreamListViewStateManagerDelegate, FBSideFeedConfigurationProvider, FBSwipableProfileViewController>
{
    FBStreamListView *_profileView;
    CKComponentHostingView *_stickyNavView;
    FBUserSession *_session;
    FBScenePath *_scenePath;
    FBContextualTimelineHeaderConfiguration *_configuration;
    FBTimelineAnalytics *_timelineAnalytics;
    FBStreamListViewStateManager *_viewStateManager;
    unsigned int _displayOptions;
    FBPersonContextualTimelineHeaderDataSource *_headerDataSource;
    FBPersonTimelineHeaderDataSource *_nonContextualHeaderDataSource;
    FBPersonTimelineTapResponder *_tapResponder;
    FBProfileCoverPhotoUploadFlowController *_coverPhotoUploadFlowController;
    FBProfilePictureUploadFlowController *_profilePictureUploadFlowController;
    FBComposerTapHandler *_composerTapHandler;
    FBProfileLifeEventComposerOpener *_lifeEventComposerOpener;
    FBTimelineDataController *_dataController;
    FBPostingController *_postingController;
    FBTimelineOutboxController *_outboxController;
    NSMutableArray *_insertedMutationIdentifiers;
    FBProfileOutboxDataSourceAdapter *_outboxDataSourceAdapter;
    FBProfileFallbackCellProvider *_fallbackCellProvider;
    FBScrollPositionRestoringTableViewController *_scrollPositionRestoringTableViewController;
    FBProfileStoriesSectionScrollPositionRestoringProvider *_storiesSectionScrollPositionRestoringProvider;
    struct FBProfileScrollingBehavior _scrollingBehaviorAfterDataSourceUpdated;
    BOOL _didScrolledToTopStoryDueToStoryRemovedFromOutbox;
    FBProfileToolbox *_toolbox;
    FBComponentTableViewDataSource *_componentTableViewDataSource;
    FBViewControllerProxyingNavigationCoordinator *_proxyingNavigationCoordinator;
    FBProfileSectionControllerManager *_sectionControllerManager;
    FBProfileLoadingStateTracker *_stateTracker;
    unsigned int _layoutIdiom;
    BOOL _storiesDidInsertAtLeastOnce;
    FBProfileDownloader *_profileDownloader;
    BOOL _shouldShowMLEEntryCard;
    unsigned int _maxStoriesPerSection;
    BOOL _shouldUseProtiles;
    BOOL _shouldUseEntityCardsForProtilesFriends;
    float _streamListViewBottomBuffer;
    BOOL _shouldScrollToTopOnOptimisticStory;
    BOOL _shouldAddSearchFieldBadge;
    BOOL _shouldChangeSearchFieldText;
    BOOL _shouldUseExpandedQuery;
    BOOL _shouldPrecheckSectionEmpty;
    BOOL _isPadFeedRedesignEnabled;
    BOOL _syncOnNextView;
    BOOL _headerDownloaderHasAlreadyParsed;
    unsigned int _storyCheckCount;
    FBProfileWaitTimeTracker *_waitTimeTracker;
    FBTimelineSeeFirstNuxPresenter *_seeFirstNuxPresenter;
    FBProfileUpdateReminderNuxPresenter *_profileUpdateReminderNuxPresenter;
    BOOL _enableProfile9HeaderController;
    FBProfileHeaderController *_headerController;
    unsigned int _protileFriendsStyle;
    unsigned int _protilePhotosStyle;
    FBProfileSectionControllerManager *_aboveStorySectionControllerManager;
    FBMemProfileTileSectionsConnection *_initialProfileTileSectionsConnection;
    FBProfileVideoNotificationListener *_videoNotificationListener;
    FBFeedImpressionController *_feedImpressionController;
    BOOL _presented;
    FBNavigationBarDecorationListenerAnnouncer *_announcer;
    NSString *_deferredNavigationSentinel;
    FBMemPerson *_person;
    UIView *_searchIconView;
}

+ (id)analyticsExtrasWithPerson:(id)arg1 analyticsUUID:(id)arg2 analyticsEventSource:(id)arg3;
+ (id)_classAnalyticsModule;
+ (void)logProfilePhotoOpenWithSession:(id)arg1 person:(id)arg2 analyticsUUID:(id)arg3;
@property(retain, nonatomic) UIView *searchIconView; // @synthesize searchIconView=_searchIconView;
@property(nonatomic) BOOL presented; // @synthesize presented=_presented;
@property(readonly, nonatomic) FBMemPerson *person; // @synthesize person=_person;
@property(copy, nonatomic) NSString *deferredNavigationSentinel; // @synthesize deferredNavigationSentinel=_deferredNavigationSentinel;
@property(readonly, nonatomic) FBNavigationBarDecorationListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didUpdatePinnedPost:(id)arg1;
- (id)_visibleIndexPathToStoryEdges;
- (void)_logImpressionsForVisibleStoryEdges;
- (void)componentDidDisappearFromViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)componentWillAppearInViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)compatibleWithConfiguration:(id)arg1;
- (id)sideFeedRightViewControllerKey;
- (id)sideFeedConfigurationForSession:(id)arg1 contactsSearch:(id)arg2 onlineStatusManager:(id)arg3;
- (void)didUpdateProtileSectionsEdges:(id)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)_optimisticallyClearUnreadCount;
- (void)logViewAppearedEvent;
- (id)swipableContainerViewBackgroundColor;
- (id)swipableContainerView;
- (id)dataController;
- (void)setDisplayOptions:(unsigned int)arg1;
- (id)swipableScrollView;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)_adjuststickyNavWithScrollState:(struct FBScrollViewState)arg1;
- (void)_loadStickyNavView;
- (id)fb_searchContext;
- (void)_updateTitleIfNeeded;
- (id)fb_attributedSearchText;
- (BOOL)fb_useDefaultSearchText;
- (id)mainScrollView;
- (id)analyticsContentEventExtra;
- (id)analyticsExtras;
- (id)analyticsUUID;
- (id)analyticsModule;
- (void)_handleDownloadedResponse:(id)arg1 error:(id)arg2;
- (void)_isTaggedAndAlbumEmptyQuery;
- (unsigned int)_numberOfSectionsBeforeOutbox;
- (unsigned int)_numberOfSectionsBetweenHeaderAndOutbox;
- (unsigned int)_numberOfSectionsBeforeFeed;
- (unsigned int)_numberOfSectionsInHeader;
- (BOOL)_shouldUseNonContextualHeaderDataSource;
- (void)viewStateManagerDidTriggerReload:(id)arg1;
- (void)didProcessNewStories:(id)arg1 inSection:(int)arg2;
- (void)_logWaitTimeWithChangeset:(struct Changeset)arg1;
- (void)dataSourceDidEndUpdates:(id)arg1 changeset:(struct Changeset)arg2;
- (void)dataSourceWillEndUpdates:(id)arg1 changeset:(struct Changeset)arg2;
- (struct FBProfileScrollingBehavior)_profileScrollingBehaviorForChangeSet:(const struct Changeset *)arg1;
- (void)outboxControllerDidRefresh:(id)arg1;
- (void)outboxListRemovedStories;
- (void)outboxControllerDesiresHeadLoad:(id)arg1;
- (void)outboxControllerDidInsertNewStories:(id)arg1;
- (void)outboxControllerWillRefresh:(id)arg1;
- (void)successfullyPublishedEditedStoryWithPublisherData:(id)arg1;
- (void)successfullyPublishedNewStoryWithPublisherData:(id)arg1 response:(id)arg2 sourceView:(id)arg3;
- (void)finishedPublishingWithPublisherData:(id)arg1;
- (id)compositionOwnershipTracker;
- (void)composerCompletedWithResult:(id)arg1;
- (id)compositionModelBundleCache;
- (BOOL)_shouldShowLifeEventComposer;
- (BOOL)_shouldShowComposer;
- (void)didTapPublishPhotoButton:(id)arg1;
- (void)didTapPublishStatusButton:(id)arg1;
- (void)logComposerOpenEvent:(id)arg1 lastNavigationTapPoint:(id)arg2;
- (void)_openComposerWithTraits:(id)arg1 sourceView:(id)arg2 startingStyle:(unsigned int)arg3;
- (id)_composerTapHandler;
- (void)profileVideoDownloaded;
- (id)_profilePictureUploadFlowController;
- (void)openProfilePhoto:(id)arg1 uploadFlowController:(id)arg2;
- (void)profileVideoUploadDidFail:(id)arg1 uploadFlowController:(id)arg2;
- (void)profileVideoDidUpload:(id)arg1 uploadFlowController:(id)arg2;
- (void)profileVideoWillUpload:(id)arg1;
- (void)_reloadHeaderAfterProfilePictureorVideoUpdate;
- (void)profilePictureDidChange:(id)arg1;
- (id)scrollView;
- (void)openCoverPhotoWithPhoto:(id)arg1;
- (void)coverPhotoDidChange:(id)arg1 timelineSectionID:(id)arg2;
- (void)_ensureCoverPhotoUploadFlowController;
- (void)didTapChangeCoverPhotoButton:(id)arg1;
- (void)showCoverActionSheet:(id)arg1 withPhoto:(id)arg2 photosInfo:(id)arg3;
- (void)showCoverActionSheet:(id)arg1;
- (BOOL)fb_swipeToOpenLeftNav;
- (BOOL)fb_deferSwipeToOpenLeftNav;
- (BOOL)alreadyOpenWithURL:(id)arg1;
- (BOOL)alreadyOpenWithViewController:(id)arg1;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
- (void)headerDidFailToLoad:(id)arg1;
- (void)headerDidLoad:(id)arg1;
- (void)loadingComponentSpinnerWillAppear:(id)arg1;
- (void)sectionMLEEntryComponentDidTapLifeEventButton:(id)arg1 withPreFilledYear:(id)arg2;
- (void)sectionComposerComponentDidTapLifeEventButton:(id)arg1;
- (void)sectionComposerComponentDidTapPublishPhotoButton;
- (void)sectionComposerComponentDidTapPublishStatusButton;
- (void)didTapDismissIntroCardMegaphoneWithMegaphone:(id)arg1 controller:(id)arg2;
- (void)protileComponent:(id)arg1 didScrollNearEndWithSectionType:(id)arg2;
- (void)protilesFriendsDidTapSeeAllFriends;
- (void)protilesPhotosDidTapSeeAllPhotos;
- (id)_firstNameOrFullNameFromPerson:(id)arg1;
- (void)protilesFriendsComponent:(id)arg1 didTapWithFriendsInfo:(id)arg2;
- (void)protilesPhotosComponent:(id)arg1 didTapWithPhotosContext:(id)arg2;
- (void)yoloPhotoDidTap:(id)arg1 withPhotoAndMediaSet:(id)arg2;
- (void)didUpdateActionBar:(id)arg1;
- (id)contentScrollView;
- (void)didTapCarouselPhoto:(id)arg1 photoIndex:(int)arg2;
- (void)didTapTimelineContextListItem:(id)arg1 atPosition:(unsigned int)arg2;
- (BOOL)_hasDownloadedProtileSections;
- (void)didDownloadProfileTileSections:(id)arg1;
- (void)willStartSyncingWithReason:(int)arg1;
- (void)profileDownloaderDidFinishSyncing:(id)arg1;
- (void)profileDownloader:(id)arg1 didDownloadProfileTileSections:(id)arg2;
- (void)profileDownloader:(id)arg1 didUpdatePerson:(id)arg2 hasFullySyncedHeaderDetails:(BOOL)arg3;
- (void)_setupReminderNux;
- (void)stateTracker:(id)arg1 didTransitionFromState:(int)arg2 toState:(int)arg3;
- (void)openLifeEventComposerWithBootstrapContent:(id)arg1 startingStyle:(unsigned int)arg2 sourceView:(id)arg3;
- (void)navigateToLifeEventComposer:(id)arg1 from:(id)arg2 withPreFilledYear:(id)arg3;
- (void)navigateToLifeEventComposer:(id)arg1 from:(id)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)timelineTapResponderHandleSyncTimelineData:(id)arg1;
- (void)timelineTapResponderHandleResetSections:(id)arg1 showPTR:(BOOL)arg2;
- (void)timelineTapResponderDidReport:(id)arg1;
- (void)timelineTapResponder:(id)arg1 didTapTimelineActionButtonType:(id)arg2;
- (void)timelineTapResponderUpdateSubscribeStatus:(id)arg1 forTargetID:(id)arg2;
- (void)timelineTapResponder:(id)arg1 didDeletePhoto:(id)arg2;
- (void)timelineTapResponder:(id)arg1 didBlockFromConfirmationView:(id)arg2;
- (void)timelineTapResponder:(id)arg1 didLoadAllContextItems:(id)arg2 withError:(id)arg3;
- (void)timelineTapResponderHandlePublishPhoto:(id)arg1;
- (void)timelineTapResponderHandlePublishStatus:(id)arg1;
- (void)didTapChangeProfilePictureButton:(id)arg1;
- (void)showProfilePictureActionSheet:(id)arg1 person:(id)arg2;
- (BOOL)isViewingSelf;
- (id)timelineTapResponder:(id)arg1 viewForPresentingActionSheet:(id)arg2 fromView:(id)arg3;
- (id)personForTimelineTapResponder:(id)arg1;
- (unsigned int)storiesSectionIndexForSectionID:(id)arg1;
- (id)storiesSectionIDForSectionIndex:(unsigned int)arg1;
- (id)nextResponder;
- (void)setAnalyticsFromModule:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_sessionWillInvalidate:(id)arg1;
- (void)_displayTopNavMoreOptionsButtonTapped:(id)arg1;
- (SEL)fb_actionForTopNavMoreOptionsButton;
- (void)dealloc;
- (id)initWithSession:(id)arg1 person:(id)arg2 timelineAnalytics:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
@property(readonly) Class superclass;

@end

