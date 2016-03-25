//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBCredentials : FBValueObject <NSCopying>
{
    NSString *_loginUUID;
    NSString *_accessToken;
    NSString *_loggedInUserFBID;
    NSString *_actingAccessToken;
    NSString *_actingUserFBID;
}

@property(readonly, copy, nonatomic) NSString *actingUserFBID; // @synthesize actingUserFBID=_actingUserFBID;
@property(readonly, copy, nonatomic) NSString *actingAccessToken; // @synthesize actingAccessToken=_actingAccessToken;
@property(readonly, copy, nonatomic) NSString *loggedInUserFBID; // @synthesize loggedInUserFBID=_loggedInUserFBID;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSString *loginUUID; // @synthesize loginUUID=_loginUUID;
- (void).cxx_destruct;
- (id)initWithLoginUUID:(id)arg1 accessToken:(id)arg2 loggedInUserFBID:(id)arg3 actingAccessToken:(id)arg4 actingUserFBID:(id)arg5;

@end

