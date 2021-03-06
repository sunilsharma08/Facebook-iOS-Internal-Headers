//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPresenceEditPinnedChangeListener-Protocol.h"
#import "FBPresenceSettingsListener-Protocol.h"

@class FBAnalyticsPrefetcherLogger, FBCache, FBLocationAccessManager, FBPresenceFeedFetcherListenerAnnouncer, FBPresenceFeedPageInfo, FBPresencePollExperimentContext, FBPresencePollingCoordinator, FBScenePath, FBUserSession, NSDate, NSMutableSet, NSString, NSTimer;
@protocol FBFNInlineUpsellDataFetcher, FBServiceTransactionMutating, OS_dispatch_queue;

@interface FBPresenceFeedFetcher : NSObject <FBPresenceSettingsListener, FBPresenceEditPinnedChangeListener>
{
    FBUserSession *_session;
    FBScenePath *_scenePath;
    FBCache *_favsAuthorCache;
    FBCache *_mostRecentAuthorCache;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    FBPresenceFeedFetcherListenerAnnouncer *_announcer;
    BOOL _prefetchRequested;
    BOOL _prefetchCompleted;
    BOOL _prefetchFailed;
    BOOL _isFetching;
    BOOL _isFetchingNextFavsPage;
    BOOL _isFetchingNextMostRecentPage;
    BOOL _isFetchingNearbyFriends;
    BOOL _cacheResultsLoaded;
    CDUnknownBlockType _pendingFetchBlock;
    NSMutableSet *_favsDownloaded;
    BOOL _isMostRecentFetched;
    FBPresenceFeedPageInfo *_pinnedPageInfo;
    FBPresenceFeedPageInfo *_favsPageInfo;
    FBPresenceFeedPageInfo *_mostRecentPageInfo;
    NSDate *_nearbyFriendsLastFullFetch;
    CDUnknownBlockType _feedEdgeToModelBlock;
    CDUnknownBlockType _failPerfLoggingBlock;
    FBAnalyticsPrefetcherLogger *_prefetcherLogger;
    FBAnalyticsPrefetcherLogger *_pollPrefetcherLogger;
    NSString *_feedType;
    FBLocationAccessManager *_locationAccessManager;
    FBPresencePollExperimentContext *_pollConfig;
    id <FBServiceTransactionMutating> _prefetchRequest;
    id <FBServiceTransactionMutating> _pollRequest;
    NSTimer *_pollRequestTimer;
    id <FBFNInlineUpsellDataFetcher> _nearbyFriendsUpsellFetcher;
    BOOL _useBatchCall;
    BOOL _shouldResync;
    BOOL _dropMostRecentFromSlowPoll;
    BOOL _shouldSkipAndCancelPolls;
    double _newerThanTimestamp;
    FBPresencePollingCoordinator *_pollingCoordinator;
}

@property(retain, nonatomic) FBPresencePollingCoordinator *pollingCoordinator; // @synthesize pollingCoordinator=_pollingCoordinator;
- (void).cxx_destruct;
- (void)visitedActivityLog;
- (void)chatStatusChangedToState:(BOOL)arg1;
- (id)execQueryBatch:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)execQuery:(id)arg1 cacheTime:(unsigned int)arg2 cacheBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)feedEdgesToModels:(id)arg1 includeStories:(BOOL)arg2 useAuthorCache:(id)arg3;
- (id)fetchUserLocation;
- (void)updateNearbyFriends:(id)arg1 locationSharing:(id)arg2;
- (void)updateNearbyFriendsWithError:(id)arg1;
- (void)addMoreMostRecent:(id)arg1;
- (void)updateMostRecent:(id)arg1;
- (void)editPinnedChangesCommitted:(id)arg1;
- (void)editPinnedChangesPending:(BOOL)arg1;
- (void)addMoreFavs:(id)arg1 includeStories:(BOOL)arg2;
- (void)updateFavs:(id)arg1;
- (void)setInitialFavs:(id)arg1 includeStories:(BOOL)arg2;
- (void)updatePinned:(id)arg1;
- (void)setInitialPinned:(id)arg1 includeStories:(BOOL)arg2;
- (void)updateSelf:(id)arg1 loadedFromCache:(BOOL)arg2;
- (void)handlePollingQueryFailureWithError:(id)arg1 finalStatus:(id)arg2;
- (void)handlePollingQueryResultsBatch:(id)arg1;
- (void)handlePollingQueryResults:(id)arg1;
- (void)handleFetchNearbyFriendsQueryResults:(id)arg1;
- (void)handleFetchNextMostRecentPageQueryResults:(id)arg1;
- (void)handleFetchNextFavsPageQueryResults:(id)arg1;
- (void)handlePrefetchFailed:(id)arg1;
- (void)handlePrefetchQueryResultsBatch:(id)arg1 isComplete:(BOOL)arg2;
- (void)handlePrefetchQueryResults:(id)arg1;
- (BOOL)_mostRecentEnabled;
- (void)clearFinishedPollRequest;
- (void)cancelPollRequest:(id)arg1;
- (void)setPollRequest:(id)arg1;
- (void)execPollingBatch;
- (void)execPolling;
- (void)execFetchFriendsNearby:(BOOL)arg1;
- (void)execFetchNextMostRecentPage;
- (void)execFetchNextFavsPage;
- (id)prefetchQueryBatch;
- (id)prefetchQuery;
- (void)execPrefetchBatch;
- (void)execPrefetch;
- (void)prefetch;
- (void)fetchFriendsNearby:(id)arg1;
- (void)fetchNextMostRecentPage;
- (void)fetchNextFavsPage;
- (void)stopFetching;
- (void)transitionToFastPolling;
- (void)transitionToSlowPolling;
- (void)startFetching;
- (BOOL)isPrefetchCompleted;
- (void)cancelPrefetchAndRetry;
- (void)prefetchIfNeeded;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (void)execPollingBlock;
- (void)setNeedsResync;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 priorityAuthorMemModelCache:(id)arg3 otherAuthorMemModelCache:(id)arg4 nearbyFriendsUpsellFetcher:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

