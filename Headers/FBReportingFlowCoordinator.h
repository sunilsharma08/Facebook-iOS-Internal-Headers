//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAvatarPickerControllerDelegate-Protocol.h"
#import "FBModalWebFlowDelegate-Protocol.h"
#import "FBReportingFlowConfigProviderDelegateProtocol-Protocol.h"
#import "FBReportingFlowCoordinatorDelegateProtocol-Protocol.h"
#import "FBReportingFlowGuidedActionDispatchingDelegateProtocol-Protocol.h"

@class FBUserSession, NSString, UINavigationController;
@protocol FBReportingFlowConfigProviderProtocol, FBReportingFlowGuidedActionDispatchingProtocol;

@interface FBReportingFlowCoordinator : NSObject <FBReportingFlowConfigProviderDelegateProtocol, FBReportingFlowGuidedActionDispatchingDelegateProtocol, FBAvatarPickerControllerDelegate, FBModalWebFlowDelegate, FBReportingFlowCoordinatorDelegateProtocol>
{
    FBUserSession *_userSession;
    NSString *_counterpartyUID;
    NSString *_location;
    NSString *_nodeID;
    id <FBReportingFlowConfigProviderProtocol> _configProvider;
    UINavigationController *_navigationController;
    id <FBReportingFlowGuidedActionDispatchingProtocol> _guidedActionDispatcher;
    int _previousStatusBarStyle;
    CDUnknownBlockType _dismissBlock;
    int _uiPresentationStyle;
}

+ (BOOL)nativeReportingFlowIsEnabledForWilde:(id)arg1;
@property(nonatomic) int uiPresentationStyle; // @synthesize uiPresentationStyle=_uiPresentationStyle;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)avatarPickerDidCancel:(id)arg1;
- (void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;
- (void)actionDidFail:(id)arg1 description:(id)arg2;
- (void)actionDidSucceed;
- (void)didFail;
- (void)didFetchPromptModel:(id)arg1;
- (void)_showErrorAlertView:(id)arg1 description:(id)arg2;
- (void)_webViewControllerDidClose;
- (void)redirectToURL:(id)arg1;
- (void)removeTemporaryViewControllersAndAddViewController:(id)arg1;
- (void)showAvatarPicker;
- (int)presentationStyle;
- (void)performMessageGuidedAction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 targetFBID:(id)arg3 message:(id)arg4;
- (void)performGuidedAction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)messageWasSent;
- (void)loadMessageComposer:(id)arg1;
- (void)goBack;
- (void)loadNewBranchForDetailedResponse:(id)arg1;
- (void)dismissReportingFlow;
- (id)viewControllerForReportingFlow;
- (id)initWithUserSession:(id)arg1 location:(id)arg2 nodeID:(id)arg3;
- (id)initWithUserSession:(id)arg1 counterpartyUID:(id)arg2 nodeID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

