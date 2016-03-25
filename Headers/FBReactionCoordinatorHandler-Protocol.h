//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPTState, FBReactionTriggerInputTriggerData, NSString;
@protocol FBNavigationCoordinator, FBPlaceTipsReactionGraphQLResponseProcessingProtocol;

@protocol FBReactionCoordinatorHandler <NSObject>
- (BOOL)navigationIsPresentingReaction:(id <FBNavigationCoordinator>)arg1;
- (void)prefetchPlaceTipsWithCacheKey:(NSString *)arg1 requestBuilderForReactionInfo:(FBGraphQLPagedDownloadRequest * (^)(FBGraphQLPagedDownloadRequestBuilderParameters *, NSString *, NSArray *, NSArray *, NSArray *, NSArray *))arg2 responseProcesser:(id <FBPlaceTipsReactionGraphQLResponseProcessingProtocol>)arg3 surface:(NSString *)arg4;
- (BOOL)openPlaceTipsWithState:(FBPTState *)arg1 navigationCoordinator:(id <FBNavigationCoordinator>)arg2 clearCache:(BOOL)arg3;
- (void)removeReactionDataForCacheKey:(NSString *)arg1;
- (void)updateCompletionBlock:(void (^)(BOOL))arg1 forPrefetchCacheKey:(NSString *)arg2;
- (void)prefetchReactionWithTriggerInputTriggerData:(FBReactionTriggerInputTriggerData *)arg1 backgroundFetch:(BOOL)arg2 completionBlock:(void (^)(BOOL))arg3 placeTipState:(FBPTState *)arg4 cacheKey:(NSString *)arg5;
- (void)openReactionWithTriggerInputTriggerData:(FBReactionTriggerInputTriggerData *)arg1 cacheKey:(NSString *)arg2 navigationCoordinator:(id <FBNavigationCoordinator>)arg3 abortIfNoPrefetchReady:(BOOL)arg4 clearCache:(BOOL)arg5;
@end

