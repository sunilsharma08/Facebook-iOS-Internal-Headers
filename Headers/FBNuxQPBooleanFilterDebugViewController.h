//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray;

@interface FBNuxQPBooleanFilterDebugViewController : UITableViewController
{
    NSMutableArray *_cellsInfo;
}

- (void).cxx_destruct;
- (BOOL)fb_showNavigationJewels;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)_heightForDetailText:(id)arg1 fontSize:(float)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_createCellInfoForFilterDebugInfo:(id)arg1 indentationLevel:(int)arg2;
- (id)_createCellInfoForClauseDebugInfo:(id)arg1 indentationLevel:(int)arg2;
- (void)_createCellsInfoFromClauseDebugInfo:(id)arg1 indentationLevel:(int)arg2;
- (void)viewDidLoad;
- (id)initWithBooleanFilterDebugInfo:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

@end

