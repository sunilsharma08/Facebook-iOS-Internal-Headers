//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComposerFlowDelegate-Protocol.h"
#import "FBNearbyPlacesCategoryDownloaderDelegate-Protocol.h"
#import "FBNearbyPlacesCategoryMenuViewCellDelegate-Protocol.h"
#import "FBNearbyPlacesHereCardDownloaderDelegate-Protocol.h"
#import "FBNearbyPlacesHugeResultTableViewCellDelegate-Protocol.h"
#import "FBNearbyPlacesNearbyCardCollectionCellDelegate-Protocol.h"
#import "FBNearbyPlacesNearbyLocationCollectionViewCellDelegate-Protocol.h"
#import "FBPhotoViewControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBComposerTapHandler, FBNearbyPlacesCategoryDownloader, FBNearbyPlacesHereCardDownloader, FBNearbyPlacesIntentView, FBNearbyPlacesIntentViewDataSource, FBNearbyPlacesIntentViewModel, FBNearbyPlacesLoggerHelper, FBNearbyPlacesPageActionHandler, FBNearbyPlacesSectionHeaderView, NSString;
@protocol FBNearbyPlacesIntentViewControllerDelegate;

@interface FBNearbyPlacesIntentViewController : UIViewController <UITableViewDelegate, UICollectionViewDelegate, FBNearbyPlacesCategoryDownloaderDelegate, FBNearbyPlacesHereCardDownloaderDelegate, FBNearbyPlacesCategoryMenuViewCellDelegate, FBNearbyPlacesNearbyCardCollectionCellDelegate, FBNearbyPlacesNearbyLocationCollectionViewCellDelegate, FBComposerFlowDelegate, FBNearbyPlacesHugeResultTableViewCellDelegate, FBPhotoViewControllerDelegate>
{
    FBNearbyPlacesIntentViewModel *_model;
    FBNearbyPlacesCategoryDownloader *_categoryDownloader;
    FBNearbyPlacesHereCardDownloader *_hereCardDownloader;
    FBNearbyPlacesLoggerHelper *_nearbyPlacesLoggerHelper;
    unsigned int _composerState;
    FBComposerTapHandler *_composerTapHandler;
    unsigned int _nearbyCardFailureType;
    FBNearbyPlacesSectionHeaderView *_categorySectionHeader;
    FBNearbyPlacesPageActionHandler *_pageActionHandler;
    id <FBNearbyPlacesIntentViewControllerDelegate> _delegate;
    FBNearbyPlacesIntentView *_intentView;
    FBNearbyPlacesIntentViewDataSource *_dataSource;
}

@property(retain, nonatomic) FBNearbyPlacesIntentViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FBNearbyPlacesIntentView *intentView; // @synthesize intentView=_intentView;
@property(nonatomic) __weak id <FBNearbyPlacesIntentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logHereCardEvent:(id)arg1 cellType:(unsigned int)arg2 placeIndex:(int)arg3;
- (void)_openPageLikesAndVisitsActivityVC:(id)arg1;
- (void)_openPageReviewsVC:(id)arg1;
- (void)_openPageMapVC:(id)arg1;
- (void)_openPageAboutVC:(id)arg1;
- (void)_openPhotoVCWithPhotos:(id)arg1 startIndex:(unsigned int)arg2;
- (void)_openStoryPermalinkViewControllerForStoryFBID:(id)arg1 fallbackURL:(id)arg2;
- (void)_openPageViewControllerForPageFBID:(id)arg1;
- (BOOL)_useVerticalHereCard;
- (void)_cancelPerfEvents;
- (void)queryHereCardPlacesIfNeeded;
- (void)_updateCategoryMenuWithAssets;
- (id)_titleForSection:(unsigned int)arg1;
- (id)_hereCardCell;
- (void)composerCompletedWithResult:(id)arg1;
- (void)nearbyPlacesCategoryDownloaderDidFail;
- (void)nearbyPlacesCategoryDownloaderDidDownloadCategories:(id)arg1;
- (void)nearbyPlacesHereCardDownloaderDidDownloadPlaces:(id)arg1 resultID:(id)arg2;
- (void)nearbyPlacesHereCardDownloaderDidFail;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnShareButton:(id)arg1;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnCheckinButton:(id)arg1;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnLikeButton:(id)arg1;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnPageView:(id)arg1;
- (void)nearbyPlacesNearbyCardCollectionCellDidTapOnTryAgainButton;
- (void)nearbyPlacesNearbyCardCollectionCellDidTapOnLocationButton;
- (void)nearbyPlacesResultCell:(id)arg1 didSelectPhotoAtIndexPath:(id)arg2;
- (void)nearbyPlacesResultCellTappedThumbnailPhoto:(id)arg1;
- (void)nearbyPlacesResultCellTappedSocialContextFriendReviewView:(id)arg1;
- (void)nearbyPlacesResultCellTappedSocialContextFriendsWhoVisitedView:(id)arg1;
- (void)nearbyPlacesResultCellTappedActionBarOpenNowView:(id)arg1;
- (void)nearbyPlacesResultCellTappedActionBarLikesView:(id)arg1;
- (void)nearbyPlacesResultCellTappedActionBarDistanceView:(id)arg1;
- (void)nearbyPlacesResultCellTappedActionBarPriceRatingView:(id)arg1;
- (void)nearbyPlacesResultCellTappedActionBarReviewRatingView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)nearbyPlacesCategoryMenuViewCellDidSelectIndex:(unsigned int)arg1;
- (id)analyticsModule;
- (void)addIntentViewSearchHistoryQuery:(id)arg1;
- (void)updateIntentViewSearchHistory:(id)arg1;
- (void)updateDataSourceHereCardState:(unsigned int)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)_viewWillAppearOrApplicationWillForeground;
- (void)applicationWillForeground;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithSession:(id)arg1 searchData:(id)arg2 loggerHelper:(id)arg3 prefetchCategoryDownloader:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

