//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBDetailComponentControllerDelegate-Protocol.h"
#import "FBScrolling-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBTableViewAggregatedDataSource, NSArray, NSString, UITableView;

@interface FBDetailViewController : UIViewController <FBDetailComponentControllerDelegate, UIScrollViewDelegate, FBScrolling, UITableViewDelegate>
{
    UITableView *_tableView;
    NSArray *_componentControllers;
    FBTableViewAggregatedDataSource *_aggregatedDataSource;
}

@property(readonly, nonatomic) FBTableViewAggregatedDataSource *aggregatedDataSource; // @synthesize aggregatedDataSource=_aggregatedDataSource;
@property(retain, nonatomic) NSArray *componentControllers; // @synthesize componentControllers=_componentControllers;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableViewMutator;
- (void)controller:(id)arg1 openURL:(id)arg2;
- (void)controller:(id)arg1 openViewController:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)_deliverNotification:(id)arg1;
- (void)_loadHeaderView;
- (void)_loadTableView;
@property(readonly, nonatomic) BOOL hasHeaderView;
- (void)updateTableHeaderViewHeight;
- (id)tableHeaderView;
- (id)headerView;
- (void)tableViewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

