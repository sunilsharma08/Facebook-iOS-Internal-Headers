//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface FBMqttCredential : NSObject <NSCopying>
{
    unsigned int _subtype;
    NSData *_raw_authPayload;
    NSString *_idAndPwd_userName;
    NSString *_idAndPwd_password;
}

+ (id)rawWithAuthPayload:(id)arg1;
+ (id)idAndPwdWithUserName:(id)arg1 password:(id)arg2;
- (void).cxx_destruct;
- (void)matchRaw:(CDUnknownBlockType)arg1 idAndPwd:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

