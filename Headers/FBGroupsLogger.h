//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface FBGroupsLogger : NSObject
{
    NSString *_moduleName;
    NSMutableSet *_loggedEventNames;
}

- (void).cxx_destruct;
- (BOOL)isEventLogged:(id)arg1;
- (void)logEvent:(id)arg1 extra:(id)arg2 onlyFirst:(BOOL)arg3;
- (void)logEvent:(id)arg1 onlyFirst:(BOOL)arg2;
- (void)logEvent:(id)arg1 extra:(id)arg2;
- (void)logEvent:(id)arg1;
- (id)initWithModuleName:(id)arg1;
- (id)init;

@end

