//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OCClassMockObject.h"

@class NSObject;

@interface OCPartialMockObject : OCClassMockObject
{
    NSObject *realObject;
}

+ (id)existingPartialMockForObject:(id)arg1;
+ (void)forgetPartialMockForObject:(id)arg1;
+ (void)rememberPartialMock:(id)arg1 forObject:(id)arg2;
+ (void)initialize;
- (void)handleUnRecordedInvocation:(id)arg1;
- (id)getNewRecorder;
- (Class)classForRealObject;
- (Class)class_Original;
- (void)forwardInvocationForRealObject:(id)arg1;
- (id)forwardingTargetForSelectorForRealObject:(SEL)arg1;
- (id)forwardingTargetForSelector_Original:(SEL)arg1;
- (void)removeForwarderForSelector:(SEL)arg1;
- (void)setupForwarderForSelector:(SEL)arg1;
- (void)setupSubclassForObject:(id)arg1;
- (void)stopMocking;
- (id)realObject;
- (id)description;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

