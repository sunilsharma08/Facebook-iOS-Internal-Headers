//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface FBDBLSetNonceRequest : FBNetworkerRequest
{
    NSString *_accountID;
    NSString *_nonceValue;
    NSString *_providedPin;
    NSString *_machineID;
    NSString *_accessToken;
}

@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(copy, nonatomic) NSString *providedPin; // @synthesize providedPin=_providedPin;
@property(copy, nonatomic) NSString *nonceValue; // @synthesize nonceValue=_nonceValue;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (BOOL)allowRetry;
- (id)networkRequest;
- (id)initWithAccountID:(id)arg1 nonceValue:(id)arg2 providedPin:(id)arg3 machineID:(id)arg4 accessToken:(id)arg5 callbackPerformer:(id)arg6;

@end

