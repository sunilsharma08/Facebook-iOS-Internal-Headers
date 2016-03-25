//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBBugReportAttachmentListViewControllerDelegate-Protocol.h"
#import "FBBugReportContainerViewControllerChildViewControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FBBugReportAttachmentListViewController, FBBugReportCoordinator, FBBugReportReportView, NSString;

@interface FBBugReportReportViewController : UIViewController <UITextViewDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate, FBBugReportAttachmentListViewControllerDelegate>
{
    FBBugReportReportView *_reportView;
    FBBugReportAttachmentListViewController *_attachmentListViewController;
    BOOL _bugReportRedesignDidEnterDescriptionEventDidOccur;
    FBBugReportCoordinator *_coordinator;
}

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)showDataUsePolicy;
- (void)addedThumbnailToAttachmentList:(int)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (void)updateSendButtonIsEnabled;
- (void)personChoseVideoScreenCapture;
- (void)personChoseToTakeScreenshot;
- (void)personDidChooseSend;
- (void)personDidChooseCancel;
- (void)personDidChooseBack;
- (void)loadView;
- (void)setNavigationItem;
- (id)initWithCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

