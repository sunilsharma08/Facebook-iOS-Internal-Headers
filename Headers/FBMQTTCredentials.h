//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBMQTTCredentials : NSObject
{
    NSString *_userID;
    NSString *_deviceID;
    NSString *_accessToken;
}

@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUserID:(id)arg1 deviceID:(id)arg2 accessToken:(id)arg3;
- (id)init;

@end

