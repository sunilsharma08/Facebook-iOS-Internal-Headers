//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBEntityCardViewContextItem, FBUserSession, NSString, UITableView;
@protocol FBEntityCardContextItemsNavigationHandlerProtocol, FBNavigationCoordinator;

@interface FBEntityCardContextItemsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBUserSession *_session;
    UITableView *_contextItemsListView;
    FBEntityCardViewContextItem *_contextItem;
    id <FBEntityCardContextItemsNavigationHandlerProtocol> _navigationHandler;
}

@property(nonatomic) __weak id <FBEntityCardContextItemsNavigationHandlerProtocol> navigationHandler; // @synthesize navigationHandler=_navigationHandler;
- (void).cxx_destruct;
- (id)analyticsModule;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)_cellForConsumptionItem:(id)arg1;
- (BOOL)fb_showNavBarSearchField;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithContextItem:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

