//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBStickerSearchResultsControllerDelegate-Protocol.h"
#import "FBStickerSearchTagsControllerDelegate-Protocol.h"
#import "FBStickerSearchViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class FBLoadingIndicatorView, FBMStickerManager, FBMStickerSearchExperimentContext, FBStickerPreviewGestureHandler, FBStickerSearchErrorView, FBStickerSearchPerformer, FBStickerSearchResultsController, FBStickerSearchTagsController, FBStickerSearchView, FBStickerTagsDataSource, FBTimeThrottler, FBUserSession, NSString;
@protocol FBStickerSearchViewControllerDelegate;

@interface FBStickerSearchViewController : UIViewController <UISearchBarDelegate, FBStickerSearchTagsControllerDelegate, FBStickerSearchResultsControllerDelegate, FBStickerSearchViewDelegate>
{
    FBUserSession *_session;
    FBStickerSearchView *_searchView;
    FBLoadingIndicatorView *_loadingView;
    FBStickerSearchErrorView *_errorView;
    unsigned int _state;
    BOOL _searchBarShouldBecomeFirstResponder;
    FBTimeThrottler *_searchThrottler;
    FBStickerTagsDataSource *_tagsDataSource;
    FBStickerSearchPerformer *_searchPerformer;
    FBStickerSearchTagsController *_tagsController;
    FBStickerSearchResultsController *_searchResultsController;
    FBMStickerSearchExperimentContext *_searchExperimentContext;
    FBMStickerManager *_stickerManager;
    FBStickerPreviewGestureHandler *_stickerPreviewGestureHandler;
    BOOL _searchingInFullScreen;
    id <FBStickerSearchViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL searchingInFullScreen; // @synthesize searchingInFullScreen=_searchingInFullScreen;
@property(nonatomic) __weak id <FBStickerSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)searchExperimentContext;
- (id)analyticsModule;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)searchViewCancelButtonTapped:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchResultsController:(id)arg1 didSelectSticker:(id)arg2;
- (void)stickerSearchController:(id)arg1 didSelectTag:(id)arg2;
- (id)_stickersToShowWithResults:(id)arg1;
- (id)_trimmedQueryString;
- (void)_didSelectStickerWithFbId:(id)arg1;
- (void)_didPressDone;
- (void)_startSearch;
- (void)_disableDefaultScreen;
- (void)_fetchStickersWithQueryString:(id)arg1;
- (void)_fetchStickersWithTag:(id)arg1;
- (void)_fetchFeaturedStickerTags;
- (void)_setupNavigationBarButton;
- (void)_showSearchResults:(id)arg1 forQuery:(id)arg2;
- (void)_reloadCollectionView:(id)arg1 usingController:(id)arg2;
- (void)_showSearchResults:(id)arg1;
- (void)_showSearchTags:(id)arg1;
- (void)_hideErrorView;
- (void)_showErrorViewWithText:(id)arg1;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicatorAnimated:(BOOL)arg1;
- (void)_setViewState:(unsigned int)arg1;
- (void)tearDown;
- (void)loadDefaultView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 stickerManager:(id)arg2 stickerResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

