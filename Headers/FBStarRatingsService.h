//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppService-Protocol.h"
#import "FBNetworkerRequestDelegate-Protocol.h"
#import "FBStarRatingsESRViewControllerDelegate-Protocol.h"
#import "FBStarRatingsQuiesenceTriggerDelegateProtocol-Protocol.h"
#import "FBStarRatingsViewControllerDelegateProtocol-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBQueuePerformer, FBStarRatingsCompletionNetworkerRequest, FBStarRatingsESRViewController, FBStarRatingsShowDialogNetworkerRequest, FBStarRatingsUserData, FBStarRatingsViewController, FBUserSession, NSArray, NSMutableArray, NSSet, NSString, UIAlertView, UIWindow;
@protocol FBStarRatingsServiceDelegate, FBStarRatingsTriggering;

@interface FBStarRatingsService : NSObject <FBNetworkerRequestDelegate, FBStarRatingsQuiesenceTriggerDelegateProtocol, FBStarRatingsESRViewControllerDelegate, FBStarRatingsViewControllerDelegateProtocol, UIAlertViewDelegate, FBAppService>
{
    FBUserSession *_session;
    FBQueuePerformer *_queuePerformer;
    NSArray *_smartSignificantEvents;
    NSArray *_navigationSignificantEvents;
    id <FBStarRatingsServiceDelegate> _delegate;
    FBStarRatingsShowDialogNetworkerRequest *_showDialogRequest;
    FBStarRatingsViewController *_controller;
    FBStarRatingsESRViewController *_esrController;
    FBStarRatingsCompletionNetworkerRequest *_completionRequest;
    id <FBStarRatingsTriggering> _trigger;
    UIWindow *_isrWindow;
    UIWindow *_fbWindow;
    NSMutableArray *_remainingTriggers;
    UIAlertView *_esrAlertView;
    FBStarRatingsUserData *_esrUserData;
}

- (void).cxx_destruct;
- (void)_esrSaveStateWithSendToAppStore:(BOOL)arg1;
- (void)_handleButtonPressOnESRViewWithSendToAppStore:(BOOL)arg1;
- (void)cancelPressedOnESRView;
- (void)okPressedOnESRView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)logAnalyticsEventIfNotLoggedPreviously:(id)arg1 extra:(id)arg2;
- (void)logAnalyticsEventIfNotLoggedPreviously:(id)arg1;
- (void)_restartISR:(id)arg1;
- (void)navigationModeEventDidOccur;
- (void)starRatingsViewController:(id)arg1 hideViewController:(id)arg2;
- (void)starRatingsViewController:(id)arg1 didDismissWithUserData:(id)arg2;
- (id)starRatingsViewControllerAppDisplayName:(id)arg1;
- (id)starRatingsViewControllerReviewURL:(id)arg1;
- (void)displayTrigger:(id)arg1 didChangeUserData:(id)arg2;
- (void)displayTrigger:(id)arg1 didTriggerWithUserData:(id)arg2;
- (void)startNextTrigger:(id)arg1;
- (id)latestUserData;
- (BOOL)displayTriggerCanDisplay:(id)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)_showESR:(id)arg1;
- (void)_rateNavigation:(id)arg1;
- (void)_rateNextEvent:(id)arg1;
- (void)_sendFeedbackNow:(id)arg1;
- (void)_rateNow:(id)arg1;
- (void)_forceClearISRState:(id)arg1;
- (void)_sendCompletionRequestWithUserData:(id)arg1;
- (void)_showISRDialogWithUserData:(id)arg1;
- (void)_completionRequestDidFail;
- (void)_completionRequestDidSucceed:(id)arg1;
- (void)_showDialogRequestDidFail:(id)arg1 error:(id)arg2;
- (void)_showDialogRequest:(id)arg1 didSucceededWithResponse:(id)arg2;
- (void)_beginFlowWithUserData:(id)arg1;
- (void)setupNavigationTriggers:(id)arg1 delay:(double)arg2;
- (void)setupSmartTriggersForTesting:(id)arg1;
- (void)setupSmartTriggers:(id)arg1;
- (void)setupRandomTriggers:(id)arg1 delay:(double)arg2;
- (void)_checkShouldShowDialogWithUserData:(id)arg1;
- (BOOL)_isProcessingRequest;
- (void)_didFinishEnteringForeground:(id)arg1;
- (void)_saveUserData:(id)arg1;
- (id)_loadUserData;
- (void)_resetWindows;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
- (void)signalAppServiceToHandleInitialSessionIdle;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (void)dealloc;
- (id)initWithSession:(id)arg1 smartSignificantEvents:(id)arg2 navigationSignificantEvents:(id)arg3 delegate:(id)arg4;
- (id)initWithSession:(id)arg1 significantEvents:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

