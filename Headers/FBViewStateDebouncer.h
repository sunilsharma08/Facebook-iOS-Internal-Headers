//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBViewStateDebouncer : NSObject
{
    int _type;
    struct __CFRunLoop *_runloop;
    id _target;
    SEL _action;
    BOOL _needsUpdate;
    struct __CFRunLoopObserver *_runloopObserver;
}

- (void).cxx_destruct;
- (void)_didObserveRunloopActivity:(unsigned long)arg1;
- (void)_ensureRunloopObserver;
- (BOOL)_runloopObserverAdded;
- (void)_removeRunloopObserver;
- (void)_addRunloopObserver;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void)dealloc;
- (id)initWithType:(int)arg1 runloop:(struct __CFRunLoop *)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithType:(int)arg1 target:(id)arg2 action:(SEL)arg3;

@end

