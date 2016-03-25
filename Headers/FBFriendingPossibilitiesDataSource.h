//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConnectionControllerListener-Protocol.h"
#import "FBGraphQLConnectionStoreListener-Protocol.h"

@class FBFriendingPossibilitiesCountListenerAnnouncer, FBFriendingPossibilitiesEdgesListenerAnnouncer, FBUserSession, NSArray, NSDate, NSString;
@protocol FBGraphQLConnectionInterface;

@interface FBFriendingPossibilitiesDataSource : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener>
{
    FBUserSession *_session;
    id <FBGraphQLConnectionInterface> _friendingConnection;
    FBFriendingPossibilitiesCountListenerAnnouncer *_countAnnouncer;
    FBFriendingPossibilitiesEdgesListenerAnnouncer *_edgesAnnouncer;
    int _loadType;
    int _previousLoadType;
    BOOL _edgesInsertedForPendingLoad;
    int _totalCount;
    int _unseenCount;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) int loadType; // @synthesize loadType=_loadType;
@property(readonly, nonatomic) BOOL edgesInsertedForPendingLoad; // @synthesize edgesInsertedForPendingLoad=_edgesInsertedForPendingLoad;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int unseenCount; // @synthesize unseenCount=_unseenCount;
@property(readonly, nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)_loadingFinishedWithEdges:(id)arg1 andEventType:(int)arg2;
- (BOOL)_isEdgeActive:(id)arg1;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
@property(readonly, nonatomic) BOOL hasMoreObjects;
@property(readonly, copy, nonatomic) NSArray *allFetchedMemPersons;
@property(readonly, copy, nonatomic) NSArray *fetchedActiveObjects;
@property(readonly, copy, nonatomic) NSArray *fetchedObjects;
- (void)updateTotalCount:(int)arg1 unseenCount:(int)arg2 andTimestamp:(id)arg3;
- (void)processConnectionStoreInitialEdges;
- (void)didFinishLoading;
- (void)didStartLoadingForType:(int)arg1;
- (void)removeEdgesListener:(id)arg1;
- (void)addEdgesListener:(id)arg1;
- (void)removeCountListener:(id)arg1;
- (void)addCountListener:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 friendingPossibilitiesConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

