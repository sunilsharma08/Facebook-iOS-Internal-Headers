//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBPlatformEditJSDialogOverrideViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface FBPlatformJSDialogOverridesViewController : UITableViewController <FBPlatformEditJSDialogOverrideViewControllerDelegate>
{
    NSMutableArray *_overrides;
}

- (void).cxx_destruct;
- (void)_addJSDialogOverride:(id)arg1;
- (id)analyticsModule;
- (void)platformEditJSDialogOverrideViewControllerDidFinishEditing:(id)arg1;
- (void)platformEditJSDialogOverrideViewControllerDidDelete:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)fb_showAuxiliaryViewController;
- (BOOL)fb_showNavBarSearchField;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

