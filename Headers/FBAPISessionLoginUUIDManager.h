//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface FBAPISessionLoginUUIDManager : NSObject
{
    NSUserDefaults *_userDefaults;
    NSUserDefaults *_fallbackUserDefaults;
}

- (void).cxx_destruct;
- (void)clearLoginUUIDFromUserDefaults;
- (void)persistLoginUUIDToUserDefaults:(id)arg1;
- (BOOL)doesLoginUUIDMatchUserDefaults:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 fallbackUserDefaults:(id)arg2;
- (id)initWithApplicationGroup:(id)arg1;
- (id)init;

@end

