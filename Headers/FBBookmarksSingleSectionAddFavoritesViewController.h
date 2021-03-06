//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"

@class FBLocalizedIndexedCollation, FBUserSession, NSArray, NSMutableSet, NSString;
@protocol FBBookmarksSingleSectionDelegate;

@interface FBBookmarksSingleSectionAddFavoritesViewController : UITableViewController <FBAccessibilityInvalidationEventsListener>
{
    FBLocalizedIndexedCollation *_collation;
    FBUserSession *_session;
    NSArray *_bookmarks;
    NSArray *_sortedCollatedItems;
    NSMutableSet *_selectedBookmarks;
    NSString *_title;
    id <FBBookmarksSingleSectionDelegate> _delegate;
}

- (void).cxx_destruct;
- (int)_originalIndexOfBookmark:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)_sectionHasTitle:(int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveAccessibilityInvalidation;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithBookmarks:(id)arg1 selectedBookmarks:(id)arg2 title:(id)arg3 delegate:(id)arg4 session:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

