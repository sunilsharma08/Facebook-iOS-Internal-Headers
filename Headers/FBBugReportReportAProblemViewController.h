//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBBugReportContainerViewControllerChildViewControllerDelegate-Protocol.h"
#import "FBBugReportReportAProblemViewDelegate-Protocol.h"
#import "FBBugReportReportAProblemViewTinesInfoDelegate-Protocol.h"

@class FBBugReportCoordinator, FBBugReportReportAProblemView, FBBugReportReportAProblemViewTinesInfo, NSString;

@interface FBBugReportReportAProblemViewController : UIViewController <FBBugReportReportAProblemViewDelegate, FBBugReportReportAProblemViewTinesInfoDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate>
{
    FBBugReportReportAProblemViewTinesInfo *_tinesInfo;
    FBBugReportReportAProblemView *_reportAProblemView;
    FBBugReportCoordinator *_coordinator;
}

- (void).cxx_destruct;
- (void)showCancelButtonUnpressedState;
- (void)showCancelButtonPressedState;
- (void)personDidChooseSettings;
- (void)didPressGravityDemo;
- (void)didPressMemorySentinel;
- (void)didPressGeneralFeedback;
- (void)didPressAbusiveContent;
- (void)didPressSomethingIsntWorking;
- (void)transitionToChooseFeatureOrReportViewControllerWithContainerVC:(id)arg1;
- (void)personDidChooseCancel;
- (void)loadView;
- (void)setNavigationItem;
- (int)desiredTinesTableViewHeight;
- (id)initWithCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

