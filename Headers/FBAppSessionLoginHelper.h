//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppSessionLoginHelping-Protocol.h"
#import "FBAuthenticationControllingDelegate-Protocol.h"
#import "FBLoginVerifierDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBAPISessionStore, FBAppSessionLoginVerifier, FBRequesterConfiguration, FBThirdPartyAppAuthController, NSString, UIAlertView, UIApplication, UIViewController, UIWindow;
@protocol FBAppSessionLoginHelperDelegate, FBAuthenticationViewControlling;

@interface FBAppSessionLoginHelper : NSObject <FBLoginVerifierDelegate, FBAuthenticationControllingDelegate, UIAlertViewDelegate, FBAppSessionLoginHelping>
{
    FBThirdPartyAppAuthController *_thirdPartyAppAuthController;
    FBAppSessionLoginVerifier *_loginVerifier;
    BOOL _fromLaunch;
    UIAlertView *_alertView;
    UIApplication *_application;
    FBRequesterConfiguration *_requesterConfiguration;
    UIWindow *_rootWindow;
    BOOL _showSpinner;
    BOOL _forceClear;
    BOOL _keepAliveIsRunning;
    BOOL _keychainWasLockedAtPreviousLoginVerification;
    id <FBAppSessionLoginHelperDelegate> _delegate;
    UIViewController<FBAuthenticationViewControlling> *_authenticationViewController;
    FBAPISessionStore *_apiSessionStore;
    unsigned int _state;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) FBAPISessionStore *apiSessionStore; // @synthesize apiSessionStore=_apiSessionStore;
@property(readonly, nonatomic) UIViewController<FBAuthenticationViewControlling> *authenticationViewController; // @synthesize authenticationViewController=_authenticationViewController;
@property(nonatomic) __weak id <FBAppSessionLoginHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)authenticationController:(id)arg1 loginFailedWithError:(id)arg2;
- (void)loginVerifierDeferredVerification:(id)arg1 inBackground:(BOOL)arg2;
- (void)loginVerifierFailedVerification:(id)arg1 inBackground:(BOOL)arg2;
- (void)loginVerifierSucceededVerification:(id)arg1 inBackground:(BOOL)arg2;
- (void)restoreLoginScreenAfterError:(id)arg1;
- (void)showError:(id)arg1;
- (void)dealloc;
- (void)didLogout;
- (void)_logStartUpInterruptionReason:(int)arg1 inBackground:(BOOL)arg2;
- (void)_applicationWillForeground;
- (BOOL)openURL:(id)arg1;
- (void)_loginSucceed:(BOOL)arg1 inBackground:(BOOL)arg2;
- (BOOL)loginUserWithTransientToken:(id)arg1 token:(id)arg2;
- (void)loginNewlyRegisteredUser:(id)arg1 nonce:(id)arg2;
- (void)_refreshSessionData;
- (void)_presentThirdPartyAppAuthViewControllerFromRootWindow:(id)arg1 showSpinner:(BOOL)arg2;
- (void)_presentLoginUIFromRootWindow:(id)arg1 showSpinner:(BOOL)arg2 fromLaunch:(BOOL)arg3;
- (void)_performLoginWithSpinner:(BOOL)arg1 forceClear:(BOOL)arg2 fromLaunch:(BOOL)arg3 inBackground:(BOOL)arg4;
- (void)performLoginWithSpinner:(BOOL)arg1 forceClear:(BOOL)arg2 fromLaunch:(BOOL)arg3;
- (id)initWithAPISessionStore:(id)arg1 rootWindow:(id)arg2 application:(id)arg3 requesterConfiguration:(id)arg4 delegate:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

