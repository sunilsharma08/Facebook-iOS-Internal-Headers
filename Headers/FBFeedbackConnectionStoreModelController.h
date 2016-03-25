//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedbackModelController-Protocol.h"
#import "FBGraphQLConnectionControllerListener-Protocol.h"
#import "FBGraphQLConnectionStoreListener-Protocol.h"

@class FBFeedbackOptimisticCommentStore, FBUserSession, NSString;
@protocol FBFeedbackModelControllerDelegate, FBGraphQLConnectionInterface;

@interface FBFeedbackConnectionStoreModelController : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener, FBFeedbackModelController>
{
    id <FBGraphQLConnectionInterface> _connection;
    FBFeedbackOptimisticCommentStore *_optimisticCommentStore;
    BOOL _isValid;
    NSString *_commentOrder;
    struct {
        char didUpdateAddedTemporaryCommentCountOfNewCommentsByOtherUsers;
        char commentsDidChange;
        char didFinishRestoringPersistedState;
        char hasDroppedComments;
    } _delegateRespondsTo;
    FBUserSession *_session;
    id <FBFeedbackModelControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFeedbackModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned int)arg3;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)_graphQLConnection:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)_graphQLConnectionDidFinishRestoringPersistedState:(id)arg1;
- (void)_removeCommentsFromConnectionStore:(id)arg1;
- (void)_updateCommentsInAllStores:(id)arg1;
- (int)_reconcileOptimisticComments:(id)arg1;
- (id)_commentEdgesFromStore;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned int)arg3;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned int)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned int)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)refreshFetchedData;
- (id)postingErrorForOptimisticComment:(id)arg1;
- (void)updateOptimisticComment:(id)arg1 withComment:(id)arg2 error:(id)arg3;
- (void)insertOptimisticComment:(id)arg1;
- (void)removeComment:(id)arg1;
- (void)removeComments:(id)arg1;
- (void)updateComments:(id)arg1;
- (void)insertComments:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (BOOL)isModelControllerAvaliable;
- (unsigned int)indexOfComment:(id)arg1 inStore:(unsigned int)arg2;
- (unsigned int)indexOfComment:(id)arg1;
- (unsigned int)indexOfCommentWithGraphQLID:(id)arg1;
- (id)objectInCommentsAtIndex:(unsigned int)arg1 inStore:(unsigned int)arg2;
- (id)objectInCommentsAtIndex:(unsigned int)arg1;
- (unsigned int)indexBasedOnCommentOrder:(unsigned int)arg1 inStore:(unsigned int)arg2;
- (unsigned int)countOfCommentsInStore:(unsigned int)arg1;
- (unsigned int)countOfComments;
- (id)_allCommentsInConnectionStore;
- (id)allComments;
- (void)dealloc;
- (id)initWithSession:(id)arg1 connection:(id)arg2 optimisticCommentStore:(id)arg3 commentOrder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

