//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAvatarTaggingSearchProviderProtocol-Protocol.h"

@class FBUserSession, NSArray, NSMutableArray, NSSet, NSString;
@protocol FBGroupAvatarSearchProviderDelegate;

@interface FBGroupAvatarSearchProvider : NSObject <FBAvatarTaggingSearchProviderProtocol>
{
    NSMutableArray *_foundAvatars;
    NSString *_searchTerm;
    unsigned int _fetchLimit;
    id _downloadHandle;
    BOOL _canTagSelf;
    BOOL _fetchingResults;
    NSArray *_avatarCollections;
    FBUserSession *_session;
    NSSet *_excludedIDs;
    NSString *_loggingSessionID;
    id <FBGroupAvatarSearchProviderDelegate> _delegate;
    NSString *_groupID;
}

@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) __weak id <FBGroupAvatarSearchProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *loggingSessionID; // @synthesize loggingSessionID=_loggingSessionID;
@property(copy, nonatomic) NSSet *excludedIDs; // @synthesize excludedIDs=_excludedIDs;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BOOL canTagSelf; // @synthesize canTagSelf=_canTagSelf;
@property(copy, nonatomic) NSArray *avatarCollections; // @synthesize avatarCollections=_avatarCollections;
- (void).cxx_destruct;
- (void)_resetFoundAvatars;
- (void)_cancelRequests;
- (void)_downloadDataWithCompletion:(CDUnknownBlockType)arg1 fetchLimit:(unsigned int)arg2;
- (void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned int)arg2 flags:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned int)arg2 flags:(unsigned int)arg3;
@property(readonly, nonatomic, getter=isFetchingResults) BOOL fetchingResults; // @synthesize fetchingResults=_fetchingResults;
- (id)initWithCollections:(id)arg1 canTagSelf:(BOOL)arg2 session:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

