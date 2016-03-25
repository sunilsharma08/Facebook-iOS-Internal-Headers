//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFriendListModelControllerDelegate-Protocol.h"
#import "FBPresenceFeedDataSourceListener-Protocol.h"
#import "FBPresenceSettingsListener-Protocol.h"

@class FBFriendListModelController, FBPresenceFeedDataSourceListenerAnnouncer, FBPresenceNearbyFriendsModel, MNActiveParticipantSet, MNOnlineStatusManager, NSArray, NSDictionary, NSOrderedSet, NSString;

@interface FBPresenceFeedWithAmbientInfoDataSource : NSObject <FBFriendListModelControllerDelegate, FBPresenceFeedDataSourceListener, FBPresenceSettingsListener>
{
    BOOL _isOnline;
    MNOnlineStatusManager *_onlineStatusManager;
    FBPresenceFeedDataSourceListenerAnnouncer *_announcer;
    NSDictionary *_syncPeopleByPersonID;
    FBFriendListModelController *_friendListModelController;
    NSOrderedSet *_authorIDs;
    MNActiveParticipantSet *_activeParticipantSet;
    BOOL _isParticipatingInNearby;
    BOOL _forceEmit;
    BOOL _isFetching;
    NSArray *_currentPinned;
    NSArray *_currentFavs;
    NSArray *_currentMostRecent;
    FBPresenceNearbyFriendsModel *_currentNearbyFriends;
}

@property(copy, nonatomic) FBPresenceNearbyFriendsModel *currentNearbyFriends; // @synthesize currentNearbyFriends=_currentNearbyFriends;
@property(copy, nonatomic) NSArray *currentMostRecent; // @synthesize currentMostRecent=_currentMostRecent;
@property(copy, nonatomic) NSArray *currentFavs; // @synthesize currentFavs=_currentFavs;
@property(copy, nonatomic) NSArray *currentPinned; // @synthesize currentPinned=_currentPinned;
- (void).cxx_destruct;
- (id)augmentModelWithAmbientInfo:(id)arg1 withNearbyContext:(BOOL)arg2;
- (id)augmentModelsWithAmbientInfo:(id)arg1;
- (void)updateAuthors;
- (void)mostRecentChanged:(id)arg1 isFromFeed:(BOOL)arg2;
- (void)nearbyFriendsChanged:(id)arg1 isFromFeed:(BOOL)arg2;
- (void)favsChanged:(id)arg1 isTailLoad:(BOOL)arg2 isFromFeed:(BOOL)arg3;
- (void)pinnedChanged:(id)arg1 isFromFeed:(BOOL)arg2;
- (void)feedChangedPinned:(id)arg1 favs:(id)arg2 nearby:(id)arg3 mostRecent:(id)arg4 isFromFeed:(BOOL)arg5;
- (void)emitNonFeedUpdate;
- (void)visitedActivityLog;
- (void)chatStatusChangedToState:(BOOL)arg1;
- (void)receivedSyncPersonByPersonID:(id)arg1;
- (void)noMoreMostRecentPages;
- (void)noMoreFavsPages;
- (void)nearbyFriendsChanged:(id)arg1;
- (void)mostRecentChanged:(id)arg1;
- (void)favsChanged:(id)arg1 isTailLoad:(BOOL)arg2;
- (void)pinnedChanged:(id)arg1;
- (void)feedChangedPinned:(id)arg1 favs:(id)arg2 nearby:(id)arg3 mostRecent:(id)arg4;
- (void)selfUpdateChanged:(id)arg1 likeSentence:(id)arg2 feedback:(id)arg3 isPending:(BOOL)arg4;
- (void)receivedAuthorName:(id)arg1 profilePicURL:(id)arg2;
- (void)modelController:(id)arg1 didCompleteSearchOperationReturningPeople:(id)arg2;
- (id)searchOperationForSyncStore:(id)arg1;
- (void)updateFetching;
- (void)stopFetching;
- (void)startFetchingImpl;
- (void)startFetching;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithOnlineStatusManager:(id)arg1 syncEngineManager:(id)arg2 activeParticipantSet:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

