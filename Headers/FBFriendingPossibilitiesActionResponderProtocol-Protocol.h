//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemFriendingPossibilitiesEdge, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FBFriendingPossibilitiesActionResponderProtocol <NSObject>
- (void)markRequestUnmarkAsSpamAsync:(FBMemFriendingPossibilitiesEdge *)arg1 successBlock:(void (^)(void))arg2 errorBlock:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)markRequestMarkAsSpamAsync:(FBMemFriendingPossibilitiesEdge *)arg1 successBlock:(void (^)(void))arg2 errorBlock:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)markSuggestionIgnoreAsync:(FBMemFriendingPossibilitiesEdge *)arg1 successBlock:(void (^)(void))arg2 errorBlock:(void (^)(NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)markRequestAcceptedAsync:(FBMemFriendingPossibilitiesEdge *)arg1 reference:(NSString *)arg2 authCode:(NSString *)arg3 successBlock:(void (^)(void))arg4 errorBlock:(void (^)(NSError *))arg5 callbackQueue:(NSObject<OS_dispatch_queue> *)arg6;
- (void)markRequestDeleteAsync:(FBMemFriendingPossibilitiesEdge *)arg1 reference:(NSString *)arg2 successBlock:(void (^)(void))arg3 errorBlock:(void (^)(NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)markRequestHiddenAsync:(FBMemFriendingPossibilitiesEdge *)arg1 reference:(NSString *)arg2 successBlock:(void (^)(void))arg3 errorBlock:(void (^)(NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)markAllRequestsSeenAsyncWithSuccessBlock:(void (^)(void))arg1 errorBlock:(void (^)(NSError *))arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end

