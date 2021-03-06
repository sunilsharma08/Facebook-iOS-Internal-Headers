//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedGraphQLConnectionManagerListener-Protocol.h"
#import "FBGraphQLConnectionControllerListener-Protocol.h"
#import "FBGraphQLConnectionStoreListener-Protocol.h"

@class FBCache, NSString;

@interface FBFeedMemStoriesCache : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener, FBFeedGraphQLConnectionManagerListener>
{
    FBCache *_graphQLIDToStoryInfoStorage;
    FBCache *_legacyAPIIDToStoryInfoStorage;
    unsigned int _capacity;
}

+ (id)_storyByRemovingTrackingDataFromStory:(id)arg1;
@property(readonly, nonatomic) unsigned int capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)_removeStoryFromCache:(id)arg1;
- (void)_addStoryToCache:(id)arg1 secondsBeforeStale:(unsigned int)arg2;
- (void)_addStoryToCache:(id)arg1;
- (void)_addStoriesToCacheFromEdges:(id)arg1;
- (id)_cacheInfoForGraphQLID:(id)arg1 legacyAPIID:(id)arg2;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)feedGraphQLConnectionManager:(id)arg1 didCreateConnection:(id)arg2 forConnectionInfo:(id)arg3;
- (void)removeStoriesWithGraphQLIDs:(id)arg1;
- (void)removeStories:(id)arg1;
- (id)storyForGraphQLID:(id)arg1 legacyAPIID:(id)arg2;
- (BOOL)isStoryCachedForGraphQLID:(id)arg1 legacyAPIID:(id)arg2 isStale:(char *)arg3;
- (void)addStories:(id)arg1 secondsBeforeStale:(unsigned int)arg2;
- (void)addStories:(id)arg1;
@property(readonly, nonatomic) unsigned int currentSize;
- (id)_setUpStorageWithCapacity:(unsigned int)arg1;
- (id)initWithCapacity:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

