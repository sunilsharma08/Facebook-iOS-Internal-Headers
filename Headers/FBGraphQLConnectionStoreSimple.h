//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConnectionStoreListener-Protocol.h"

@class FBGraphQLConnectionStore, FBGraphQLConnectionStoreSimpleListenerAnnouncer, FBGraphQLConsistentLookasideCache, NSArray, NSMutableArray, NSString;
@protocol FBGraphQLConnectionStoreSimpleDeleteController, FBGraphQLConnectionStoreSimpleEdgeHandler;

@interface FBGraphQLConnectionStoreSimple : NSObject <FBGraphQLConnectionStoreListener>
{
    NSMutableArray *_initialNodesObservationHandles;
    FBGraphQLConnectionStoreSimpleListenerAnnouncer *_announcer;
    FBGraphQLConsistentLookasideCache *_consistentLookasideCache;
    id <FBGraphQLConnectionStoreSimpleEdgeHandler> _edgeHandler;
    FBGraphQLConnectionStore *_connectionStore;
    id <FBGraphQLConnectionStoreSimpleDeleteController> _deleteController;
    NSMutableArray *_initialNodes;
    NSArray *_allNodes;
}

+ (id)_chunkIndexPathsToNodeIndexes:(id)arg1 state:(id)arg2;
+ (unsigned int)_chunkIndexPathToNodeIndex:(id)arg1 state:(id)arg2;
+ (unsigned int)_numberOfEdgesInChunk:(unsigned int)arg1 state:(id)arg2;
@property(copy, nonatomic) NSArray *allNodes; // @synthesize allNodes=_allNodes;
@property(retain, nonatomic) NSMutableArray *initialNodes; // @synthesize initialNodes=_initialNodes;
@property(readonly, nonatomic) id <FBGraphQLConnectionStoreSimpleDeleteController> deleteController; // @synthesize deleteController=_deleteController;
@property(readonly, nonatomic) FBGraphQLConnectionStore *connectionStore; // @synthesize connectionStore=_connectionStore;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousStateByUpdatingLocation:(id)arg2;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)_initialNodesUpdated:(id)arg1;
- (void)_removeInitialNodesAtIndexes:(id)arg1;
- (void)_observeInitialNodes:(const struct FBGraphQLFieldSet *)arg1;
- (void)updateNodes:(id)arg1;
- (void)deleteRemainingInitialMediaObjects;
- (void)applyFilter:(id)arg1 includingInitialNodes:(BOOL)arg2;
- (void)applyFilter:(id)arg1;
- (id)graphQLIDForEdge:(id)arg1;
- (void)_updateNodeObjects;
- (unsigned int)_indexOfNodeInInitialNodes:(id)arg1;
- (BOOL)nodeInInitialNodes:(id)arg1;
- (unsigned int)indexOfNode:(id)arg1;
- (unsigned int)countOfNodes;
- (id)nodeAtIndex:(unsigned int)arg1;
- (id)_indexesOfInitialNodesWithIndexes:(id)arg1;
- (int)_indexOfInitialNodeWithIndex:(int)arg1;
- (id)initWithConnectionStore:(id)arg1 consistentLookasideCache:(id)arg2 edgeHandler:(id)arg3 deleteController:(id)arg4 initialNodes:(id)arg5 fieldSet:(const struct FBGraphQLFieldSet *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

