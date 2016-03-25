//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAuthenticationMethodHandler.h"

@class FBKeychainItem, FBRequesterConfiguration, NSString, UIApplication;
@protocol FBNetworkTransactionSurfacing;

@interface FBAuthenticationKeychainHandler : FBAuthenticationMethodHandler
{
    UIApplication *_application;
    FBRequesterConfiguration *_requesterConfiguration;
    FBKeychainItem *_mainAppSessionKeychain;
    id <FBNetworkTransactionSurfacing> _token;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)submitKeychainApproval;
- (void)cancel;
- (void)performAuthentication;
@property(readonly, copy, nonatomic) NSString *userID;
@property(readonly, copy, nonatomic) NSString *authToken;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *userName;
- (id)initWithApplication:(id)arg1 requesterConfiguration:(id)arg2;
- (id)initWithRequesterConfiguration:(id)arg1;
- (id)init;

@end

