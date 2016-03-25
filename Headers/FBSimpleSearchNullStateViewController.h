//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBSearchSectionTitleTableViewCellDelegate-Protocol.h"
#import "FBSearchSuggestionTableViewCellDelegate-Protocol.h"
#import "FBSimpleSearchContentViewController-Protocol.h"

@class FBContentInsetTracker, FBKVOController, FBLoadingIndicatorView, FBNuxController, FBSearchContext, FBSimpleSearchConfig, FBSimpleSearchNullStateAddOnItem, FBSimpleSearchTableViewData, FBUserSession, NSString, UIView;
@protocol FBSimpleSearchContentViewControllerDelegate><FBSearchSuggestionTableViewCellDelegate;

@interface FBSimpleSearchNullStateViewController : UITableViewController <FBSearchSectionTitleTableViewCellDelegate, FBSearchSuggestionTableViewCellDelegate, FBAccessibilityInvalidationEventsListener, FBSimpleSearchContentViewController>
{
    FBUserSession *_session;
    FBSearchContext *_searchContext;
    UIView *_emptyTableFooterView;
    FBLoadingIndicatorView *_loadingIndicatorView;
    unsigned int _loadingState;
    FBSimpleSearchTableViewData *_suggestionData;
    FBKVOController *_KVOController;
    FBContentInsetTracker *_tableViewInsetTracker;
    FBSimpleSearchConfig *_simpleSearchConfig;
    unsigned int _impressionCount;
    FBSimpleSearchNullStateAddOnItem *_qrcodeItem;
    FBNuxController *_nuxController;
    BOOL _cellSelectionDisabled;
    float _topOffset;
    id <FBSimpleSearchContentViewControllerDelegate><FBSearchSuggestionTableViewCellDelegate> _delegate;
    NSString *_typeaheadSessionID;
}

@property(nonatomic) BOOL cellSelectionDisabled; // @synthesize cellSelectionDisabled=_cellSelectionDisabled;
@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
@property(nonatomic) __weak id <FBSimpleSearchContentViewControllerDelegate><FBSearchSuggestionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float topOffset; // @synthesize topOffset=_topOffset;
- (void).cxx_destruct;
- (void)_openAddOnItem:(id)arg1;
- (id)_dataWithAddOn;
- (void)_logNullStateReadiness:(BOOL)arg1;
- (void)_handleNullStateReadiness;
- (void)_refreshNullStateData;
- (void)_updateLoadingState:(unsigned int)arg1;
- (void)_openSingleStateSuggestion:(id)arg1;
- (BOOL)_shouldDisplayEditRecentSearchesButton:(id)arg1;
- (void)_setupQRCodeTooltipForCell:(id)arg1;
- (void)searchSuggestionTableViewCell:(id)arg1 didPerformAction:(unsigned int)arg2 forSuggestion:(id)arg3;
- (void)editRecentSearchesForSearchSectionTitleTableViewCell:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveAccessibilityInvalidation;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (id)analyticsModule;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

