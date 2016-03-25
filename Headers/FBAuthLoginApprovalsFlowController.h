//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthControlling-Protocol.h"
#import "FBAuthLoginApprovalsAuthenticating-Protocol.h"
#import "FBAuthenticationMethodHandlerDelegate-Protocol.h"

@class FBAuthCheckpointInfo, FBAuthenticationUsernamePasswordHandler, FBLoginErrorStateManager, FBRequesterConfiguration, NSString;
@protocol FBAuthControllingDelegate, FBAuthLoginApprovalsFlowUIProviding, FBAuthUIPresenting;

@interface FBAuthLoginApprovalsFlowController : NSObject <FBAuthenticationMethodHandlerDelegate, FBAuthLoginApprovalsAuthenticating, FBAuthControlling>
{
    FBRequesterConfiguration *_requesterConfiguration;
    id <FBAuthControllingDelegate> _authDelegate;
    id <FBAuthLoginApprovalsFlowUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    FBAuthCheckpointInfo *_checkpointInformation;
    FBAuthenticationUsernamePasswordHandler *_usernamePasswordHandler;
    FBLoginErrorStateManager *_errorStateManager;
}

@property(readonly, nonatomic) FBLoginErrorStateManager *errorStateManager; // @synthesize errorStateManager=_errorStateManager;
@property(retain, nonatomic) FBAuthenticationUsernamePasswordHandler *usernamePasswordHandler; // @synthesize usernamePasswordHandler=_usernamePasswordHandler;
@property(readonly, nonatomic) FBAuthCheckpointInfo *checkpointInformation; // @synthesize checkpointInformation=_checkpointInformation;
@property(readonly, nonatomic) id <FBAuthUIPresenting> uiPresenter; // @synthesize uiPresenter=_uiPresenter;
@property(readonly, nonatomic) id <FBAuthLoginApprovalsFlowUIProviding> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2;
- (void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2;
- (void)cancelLoginRequestFromViewController:(id)arg1;
- (void)submitLoginApprovalsViewController:(id)arg1 approvalCode:(id)arg2;
- (void)authenticate;
- (id)init;
- (id)initWithCheckpointInformation:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

