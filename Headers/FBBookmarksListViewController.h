//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBBookmarksViewControllerSelectionProtocol-Protocol.h"
#import "FBScenePathHolding-Protocol.h"

@class FBBookmarksSectionDownloader, FBBookmarksUnreadCountManager, FBScenePath, FBUserSession, NSArray, NSMutableDictionary, NSString, UIActivityIndicatorView;

@interface FBBookmarksListViewController : UITableViewController <FBScenePathHolding, FBAccessibilityInvalidationEventsListener, FBBookmarksViewControllerSelectionProtocol>
{
    BOOL _dataLoaded;
    FBBookmarksSectionDownloader *_downloader;
    FBBookmarksUnreadCountManager *_unreadCountManager;
    FBUserSession *_session;
    FBScenePath *_scenePath;
    NSArray *_sections;
    NSMutableDictionary *_bookmarkUnreadCounts;
    NSMutableDictionary *_clcHandles;
    NSString *_sectionID;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)_didUpdateBookmark:(id)arg1;
- (void)_addBookmark:(id)arg1 toSection:(id)arg2 inDictionary:(id)arg3;
- (void)_processDownloadedBookmarks:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)analyticsModule;
- (void)deselectSelectedRow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveAccessibilityInvalidation;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSection:(id)arg1 unreadCountManager:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

