//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface FBFeedAdEventHandlerRegistry : NSObject
{
    NSMutableSet *_registeredHandlers;
}

- (void).cxx_destruct;
- (void)unregisterFeedAdEventHandler:(id)arg1;
- (void)registerFeedAdEventHandler:(id)arg1;
- (void)_dispatchFeedAdEventToFirstReactingHandler:(CDUnknownBlockType)arg1;
- (void)_dispatchFeedAdEventToAllHandlers:(CDUnknownBlockType)arg1;
- (void)dispatchFeedAdAppStoreOpenedEvent:(id)arg1 navigationCoordinator:(id)arg2;
- (void)dispatchFeedAdAppStoreOpenedEvent:(id)arg1;
- (id)init;

@end

