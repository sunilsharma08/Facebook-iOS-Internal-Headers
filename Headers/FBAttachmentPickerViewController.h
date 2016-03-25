//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAttachmentPickerProtocol-Protocol.h"
#import "FBCompositionLinkShareControllerDelegate-Protocol.h"
#import "FBSearchResultsActivityListener-Protocol.h"

@class FBAttachmentPickerCoordinator, FBAttachmentPickerInputData, FBAttachmentPickerLogger, FBAttachmentPickerView, FBCompositionLinkShareController, FBScenePath, FBSearchResultsActivityListenerAnnouncer, FBUserSession, NSArray, NSString;
@protocol FBAttachmentPickerDelegate;

@interface FBAttachmentPickerViewController : UIViewController <FBSearchResultsActivityListener, FBCompositionLinkShareControllerDelegate, FBAttachmentPickerProtocol>
{
    FBUserSession *_session;
    FBAttachmentPickerInputData *_inputData;
    NSArray *_embedsTypes;
    BOOL _exitOnce;
    FBScenePath *_scenePath;
    FBAttachmentPickerView *_pickerView;
    FBSearchResultsActivityListenerAnnouncer *_resultsAnnouncer;
    FBAttachmentPickerLogger *_logger;
    FBAttachmentPickerCoordinator *_coordinator;
    FBCompositionLinkShareController *_linkAttachmentController;
    id <FBAttachmentPickerDelegate> _delegate;
    NSString *_sessionID;
    UIViewController *_contentViewController;
}

@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <FBAttachmentPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loadLinkShareMetadata:(id)arg1;
- (void)_assertExitOnce;
- (void)_didTapCancel:(id)arg1;
- (void)linkShareController:(id)arg1 didFailFetchWithError:(id)arg2;
- (void)linkShareControllerDidFetchLinkInformation:(id)arg1;
- (void)resultsWithContext:(id)arg1 didSelectResultWithComponentModel:(id)arg2 selectionType:(id)arg3 customURL:(id)arg4;
- (id)analyticsModule;
- (void)viewWillLayoutSubviews;
- (void)_updateContentViewController;
- (void)_setupCoordinatorAndChildViewControllers;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 inputData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

