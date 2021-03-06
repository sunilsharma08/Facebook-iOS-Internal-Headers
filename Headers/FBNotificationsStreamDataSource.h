//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConnectionControllerListener-Protocol.h"
#import "FBGraphQLConnectionStoreListener-Protocol.h"
#import "FBJewelNetworkDataSource-Protocol.h"
#import "FBNotificationsStreamResponseHandlerDelegate-Protocol.h"
#import "FBStreamListener-Protocol.h"

@class FBFlattenedArrayController, FBGraphQLConnectionStorePersistenceCoordinator, FBNotificationsSeenStateManager, FBNotificationsStreamDataSourceListenerAnnouncer, FBStream, FBUserSession, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBGraphQLConnectionInterface, OS_dispatch_source;

@interface FBNotificationsStreamDataSource : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener, FBStreamListener, FBJewelNetworkDataSource, FBNotificationsStreamResponseHandlerDelegate>
{
    NSArray *_notifications;
    FBUserSession *_session;
    id <FBGraphQLConnectionInterface> _connection;
    FBNotificationsSeenStateManager *_seenStateManager;
    NSMutableDictionary *_observationHandles;
    NSMutableDictionary *_notificationUpdates;
    FBNotificationsStreamDataSourceListenerAnnouncer *_announcer;
    FBGraphQLConnectionStorePersistenceCoordinator *_persistenceCoordinator;
    NSMutableArray *_persistenceCompletionBlocks;
    BOOL _finishedInitializing;
    BOOL _isFinishedWithInitialHeadLoad;
    NSObject<OS_dispatch_source> *_persistenceCoalescenceTimer;
    BOOL _needsTimer;
    const struct FBGraphQLFieldSet *_connectionStoreFieldSet;
    NSMutableDictionary *_changesetMap;
    BOOL _usesArrayController;
    FBFlattenedArrayController *_notificationsArrayController;
    NSMutableArray *_notificationServices;
    BOOL _needsReload;
    NSError *_lastSyncError;
    FBStream *_notificationsStream;
    int _lastHeadLoadReason;
    int _lastTailLoadReason;
    struct FBNotificationsListenerEvents _listenerEventNames;
}

@property(nonatomic) int lastTailLoadReason; // @synthesize lastTailLoadReason=_lastTailLoadReason;
@property(nonatomic) int lastHeadLoadReason; // @synthesize lastHeadLoadReason=_lastHeadLoadReason;
@property(retain, nonatomic) FBStream *notificationsStream; // @synthesize notificationsStream=_notificationsStream;
@property(readonly, nonatomic) struct FBNotificationsListenerEvents listenerEventNames; // @synthesize listenerEventNames=_listenerEventNames;
@property(readonly, nonatomic) id <FBGraphQLConnectionInterface> connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSError *lastSyncError; // @synthesize lastSyncError=_lastSyncError;
@property(nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned int)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)_announceChangesForChangeList:(vector_fd37e7c2)arg1;
- (void)_updateObservationHandlesForNotifications:(id)arg1;
- (void)_removeObservationHandlesForNotifications:(id)arg1;
- (void)_removeObservationHandlesForCacheIDs:(id)arg1;
- (void)_addObservationHandlesForNotifications:(id)arg1;
- (id)_applyCacheUpdatesToNotifications:(id)arg1;
- (void)_updateNotificationInArrayController:(id)arg1;
- (id)_notificationWithGraphQLIDInArrayController:(id)arg1;
- (id)_notificationWithCacheIDInArrayController:(id)arg1;
- (unsigned int)_indexOfNotificationWithGraphQLIDInArrayController:(id)arg1;
- (unsigned int)_indexOfNotificationWithCacheIDInArrayController:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *notifications;
- (void)responseHandlerProcessedResponse:(id)arg1 withAddedNotifications:(id)arg2 updatedNotifications:(id)arg3 removedNotificationGraphQLIDs:(id)arg4;
- (void)removeNotificationService:(id)arg1;
- (void)addNotificationService:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1;
- (void)stream:(id)arg1 didFinishLoading:(unsigned int)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;
- (void)cancelAllRequests;
- (void)loadTailWithReason:(int)arg1;
- (void)requestImmediatePersistenceForOngoingHeadLoadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadHeadWithReason:(int)arg1 persistingImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadHeadWithReason:(int)arg1;
- (void)reloadDataWithReason:(int)arg1;
@property(readonly, nonatomic) unsigned int unseenCount;
- (BOOL)loading;
- (BOOL)loadingTail;
- (BOOL)loadingHead;
- (void)_scheduleNotificationPersistenceIfNeeded;
- (void)_removePersistenceTimer;
- (void)_receivedUpdateForNotification:(id)arg1;
- (void)_updateObservationHandles;
- (void)_updateExistingNotification:(id)arg1;
- (void)_updateNotifications;
- (id)_applyUpdatesToConnectionStoreNotifications:(id)arg1;
- (id)_notificationWithCacheID:(id)arg1;
- (unsigned int)_indexForNotificationWithCacheId:(id)arg1;
- (void)_finishInitialization;
- (BOOL)_isAvailableForRequests;
- (BOOL)_hasValidSession;
- (BOOL)isFinishedWithInitialHeadLoad;
- (BOOL)isFinishedInitializing;
- (BOOL)tailHasNextPage;
- (void)markAllNotificationsAsSeen;
- (void)markNotificationsAsSeen:(id)arg1;
- (void)markNotificationAsRead:(id)arg1;
- (void)setupDataSourceWithSession:(id)arg1 persistenceCoordinator:(id)arg2 connection:(id)arg3 notificationsStream:(id)arg4 connectionStoreFieldSet:(const struct FBGraphQLFieldSet *)arg5 usesArrayController:(BOOL)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

