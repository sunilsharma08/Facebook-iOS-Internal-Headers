//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReactionUnitReloaderDelegate-Protocol.h"
#import "FBStreamListener-Protocol.h"

@class FBMemPlaceTipWelcomeHeader, FBReactionDataFetcherListenerAnnouncer, FBReactionIntervalEventTimer, FBReactionSessionInfo, FBReactionUnitReloader, FBStream, NSMutableOrderedSet, NSString;
@protocol FBReactionDataFetcherPersistDelegate;

@interface FBReactionDataFetcher : NSObject <FBStreamListener, FBReactionUnitReloaderDelegate>
{
    FBReactionIntervalEventTimer *_streamLoadHeadEventTimer;
    FBReactionIntervalEventTimer *_streamLoadTailEventTimer;
    FBStream *_stream;
    FBReactionDataFetcherListenerAnnouncer *_announcer;
    NSMutableOrderedSet *_loadedUnits;
    BOOL _loadedUnitsContainsPersistedData;
    FBReactionUnitReloader *_unitReloader;
    BOOL _hasFinishedInitialLoad;
    BOOL _pauseReloading;
    id <FBReactionDataFetcherPersistDelegate> _persistDelegate;
    FBMemPlaceTipWelcomeHeader *_welcomeHeader;
    FBReactionSessionInfo *_reactionSessionInfo;
    unsigned long long _initialLoadNetworkTime;
}

@property(retain, nonatomic) FBReactionSessionInfo *reactionSessionInfo; // @synthesize reactionSessionInfo=_reactionSessionInfo;
@property(retain, nonatomic) FBMemPlaceTipWelcomeHeader *welcomeHeader; // @synthesize welcomeHeader=_welcomeHeader;
@property(nonatomic) __weak id <FBReactionDataFetcherPersistDelegate> persistDelegate; // @synthesize persistDelegate=_persistDelegate;
@property(nonatomic) BOOL pauseReloading; // @synthesize pauseReloading=_pauseReloading;
@property(readonly, nonatomic) unsigned long long initialLoadNetworkTime; // @synthesize initialLoadNetworkTime=_initialLoadNetworkTime;
@property(readonly, nonatomic) BOOL hasFinishedInitialLoad; // @synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad;
- (void).cxx_destruct;
- (void)_processFailureForUpdateQueryWithError:(id)arg1;
- (void)_processSuccessForUpdateQuery:(id)arg1 response:(id)arg2;
- (BOOL)_appendLoadedUnitsWithStoredEdgesIfNecessary:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_logPaginationForStreamLoadResult:(id)arg1 loadType:(unsigned int)arg2;
- (id)_timerForLoadType:(unsigned int)arg1;
- (void)_persistWithLoadedUnits;
- (void)unitReloader:(id)arg1 willAttemptToReloadUnit:(id)arg2 retryCount:(unsigned int)arg3;
- (void)unitReloader:(id)arg1 didFailReloadingUnit:(id)arg2 withError:(id)arg3 retryCount:(unsigned int)arg4;
- (void)unitReloader:(id)arg1 didFinishReloadingUnit:(id)arg2 withNewUnit:(id)arg3;
- (void)stream:(id)arg1 didFinishLoading:(unsigned int)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;
- (void)stream:(id)arg1 willStartLoading:(unsigned int)arg2 refreshMode:(unsigned int)arg3 requestAnalyticsUUID:(id)arg4;
- (void)unitHidden:(id)arg1;
- (id)loadedUnits;
- (void)pollForUpdatesWithTriggerData:(id)arg1;
- (void)replaceUnit:(id)arg1 withUnit:(id)arg2;
- (void)_reloadUnit:(id)arg1 withLocation:(id)arg2;
- (void)reloadUnit:(id)arg1;
- (void)reloadUnit:(id)arg1 withLocation:(id)arg2;
- (BOOL)loadingMore;
- (BOOL)canLoadMore;
- (void)loadMore;
- (void)startLoading;
- (void)loadStoredEdgesIfNecessary:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 reactionSessionId:(id)arg2 initialBatchSize:(unsigned int)arg3 tailBatchSize:(unsigned int)arg4 surface:(id)arg5 backgroundFetch:(BOOL)arg6 requestBuilder:(CDUnknownBlockType)arg7 processResponseBlock:(CDUnknownBlockType)arg8;
- (id)initWithSession:(id)arg1 reactionSessionId:(id)arg2 triggerData:(id)arg3 initialBatchSize:(unsigned int)arg4 tailBatchSize:(unsigned int)arg5 backgroundFetch:(BOOL)arg6 storedEdges:(id)arg7;
- (id)initWithReactionUnitsStream:(id)arg1 surface:(id)arg2 reactionSessionId:(id)arg3 storedEdges:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

