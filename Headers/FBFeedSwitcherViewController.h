//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBFeedSwitcherAnimatorDelegate-Protocol.h"
#import "FBFeedSwitcherViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class FBFeedSwitcherTableHeaderView, FBFeedSwitcherView, FBNuxController, FBNuxToolTip, FBUserSession, NSArray, NSString, UITableView, UITableViewCell, UIView;
@protocol FBFeedSwitcherDelegate, FBMenuItem;

@interface FBFeedSwitcherViewController : UIViewController <FBFeedSwitcherAnimatorDelegate, FBFeedSwitcherViewDelegate, UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate>
{
    float _cellImageLeftMargin;
    FBFeedSwitcherTableHeaderView *_tableHeaderView;
    FBFeedSwitcherView *_feedSwitcherView;
    FBNuxController *_nuxController;
    FBNuxToolTip *_nuxTooltip;
    FBUserSession *_session;
    id <FBMenuItem> _nuxMenuItem;
    id <FBMenuItem> _selectedMenuItem;
    id <FBFeedSwitcherDelegate> _delegate;
    NSArray *_menuItems;
    NSString *_openMethod;
    UIView *_tabBarView;
    UITableViewCell *_viewToNux;
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (id)_tableHeaderTitle;
- (id)_iconForMenuItem:(id)arg1 selected:(BOOL)arg2;
- (int)_indexOfMenuItem:(id)arg1;
- (id)_menuItemAtIndex:(int)arg1;
- (void)_logEvent:(id)arg1 extra:(id)arg2;
- (id)analyticsModule;
- (id)viewForFeedSwitcherToPassTouchesTo:(id)arg1;
- (void)feedSwitcherViewDidRecieveTapOnDimmingView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)feedSwitcherAnimator:(id)arg1 didFinishTransitionWithPresenting:(BOOL)arg2;
- (int)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithTabBarView:(id)arg1 tabWidth:(float)arg2 menuItems:(id)arg3 menuItemWithNUX:(id)arg4 selectedMenuItem:(id)arg5 delegate:(id)arg6 openMethod:(id)arg7 session:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

