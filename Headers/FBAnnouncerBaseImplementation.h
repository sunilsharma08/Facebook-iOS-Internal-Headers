//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FBAnnouncerBaseImplementation : NSObject
{
    NSMutableArray *_subscriptions;
    BOOL _isAtomic;
    CDUnknownFunctionPointerType _executeWork;
    CDUnknownBlockType _onFirstSubscriptionAdded;
    CDUnknownBlockType _onLastSubscriptionRemoved;
}

- (void).cxx_destruct;
- (void)enumerateSubscriptionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeSubscription:(id)arg1;
- (void)addSubscription:(id)arg1;
- (id)initAtomic:(BOOL)arg1 firstSubscriptionBlock:(CDUnknownBlockType)arg2 lastSubscriptionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

