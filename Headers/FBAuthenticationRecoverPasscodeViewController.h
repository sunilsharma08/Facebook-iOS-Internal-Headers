//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAuthenticatingEnterPasscodeViewDelegate-Protocol.h"

@class FBAuthenticationHandlerResponse, NSString;
@protocol FBAuthenticationManagerDeviceBasedAccountsDataSource, FBAuthenticationRecoverPasscodeDelegate, FBAuthenticationViewConfiguration;

@interface FBAuthenticationRecoverPasscodeViewController : UIViewController <FBAuthenticatingEnterPasscodeViewDelegate>
{
    id <FBAuthenticationViewConfiguration> _viewConfiguration;
    id <FBAuthenticationRecoverPasscodeDelegate> _delegate;
    FBAuthenticationHandlerResponse *_authResponse;
    id <FBAuthenticationManagerDeviceBasedAccountsDataSource> _dblProvider;
}

@property(readonly, nonatomic) id <FBAuthenticationManagerDeviceBasedAccountsDataSource> dblProvider; // @synthesize dblProvider=_dblProvider;
@property(readonly, nonatomic) FBAuthenticationHandlerResponse *authResponse; // @synthesize authResponse=_authResponse;
@property(nonatomic) __weak id <FBAuthenticationRecoverPasscodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setNonceAndContinueWithPasscode:(id)arg1;
- (void)secondaryButtonTapped;
- (void)passcodeEntered:(id)arg1 attempt:(int)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewConfiguration:(id)arg1 authenticationResponse:(id)arg2 dblProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

