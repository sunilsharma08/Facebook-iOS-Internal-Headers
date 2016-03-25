//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBRequestPriorityResolving-Protocol.h"

@class FBScenePath, NSSet;

@interface FBScenePathPriorityResolver : NSObject <FBRequestPriorityResolving>
{
    FBScenePath *_scenePath;
    int _policy;
    NSSet *_whitelist;
    struct ReadWriteLock _lock;
}

+ (CDStruct_f1d50d6b)_resolvePriorityWithNoScenePathMatchForRequestScenePath:(id)arg1 andRequestPriority:(int)arg2 withPolicy:(int)arg3;
+ (CDStruct_f1d50d6b)_resolvePriorityForRequestScenePath:(id)arg1 andRequestPriority:(int)arg2 againstActiveScenePath:(id)arg3 withPolicy:(int)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_f1d50d6b)resolvePriorityForRequest:(id)arg1 clientPriority:(int)arg2;
- (BOOL)updatePolicy:(int)arg1;
- (void)updateScenePath:(id)arg1;
- (id)init;
- (id)initWithPolicy:(int)arg1 whitelist:(id)arg2;

@end

