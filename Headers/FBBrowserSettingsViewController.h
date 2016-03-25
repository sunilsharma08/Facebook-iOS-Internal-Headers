//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBTableViewController.h"

@class FBUserSession, NSString, UITableViewCell;

@interface FBBrowserSettingsViewController : FBTableViewController
{
    FBUserSession *_session;
    UITableViewCell *_cell;
    NSString *_footerDescription;
    NSString *_lastClearDataDefaultString;
}

- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)updateClearCacheLabel;
- (void)clearBrowserData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)fb_showNavigationJewels;
- (BOOL)fb_showBackArrowButton;
- (id)initWithSession:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (void)viewDidLoad;

@end

