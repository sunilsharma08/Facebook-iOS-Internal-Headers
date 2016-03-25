//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBBookmarksFavoritesDownloaderDelegate-Protocol.h"
#import "FBBookmarksSingleSectionDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBBookmarksFavoritesDownloader, FBScenePath, FBUserSession, NSArray, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol FBBookmarksAddFavoritesViewControllerDelegate;

@interface FBBookmarksAddFavoritesViewController : UITableViewController <FBBookmarksFavoritesDownloaderDelegate, FBBookmarksSingleSectionDelegate, UITableViewDataSource, UITableViewDelegate, FBAccessibilityInvalidationEventsListener>
{
    BOOL _dataLoaded;
    FBBookmarksFavoritesDownloader *_downloader;
    FBScenePath *_scenePath;
    FBUserSession *_session;
    NSArray *_downloaderSections;
    NSMutableSet *_expandedSectionIndices;
    int _mostRecentSingleSection;
    NSMutableOrderedSet *_selectedBookmarks;
    id <FBBookmarksAddFavoritesViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBBookmarksAddFavoritesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_tableViewBookmarkAtIndexPath:(id)arg1;
- (id)_downloaderSectionAtIndex:(int)arg1;
- (void)_dismiss;
- (void)_sendRequestAndDismiss:(id)arg1;
- (void)_showSingleSectionForIndexPath:(id)arg1;
- (void)_toggleSectionAtIndex:(int)arg1;
- (void)_toggleBookmarkSelectedAtIndexPath:(id)arg1;
- (id)analyticsModule;
- (void)deselectSelectedRow;
- (void)sectionController:(id)arg1 didSelectBookmarkAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)_noItemsCellForSection:(int)arg1 inTableView:(id)arg2;
- (id)_loadingCellForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)favoritesDownloader:(id)arg1 didLoadBookmarkSections:(id)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)didReceiveAccessibilityInvalidation;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

