//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConnectionStoreListener-Protocol.h"
#import "FBReactionDataFetcherPersistDelegate-Protocol.h"

@class FBGraphQLConnectionStore, FBReactionDataFetcher, FBUserSession, NSString;

@interface FBPageReactionUnitsLoader : NSObject <FBGraphQLConnectionStoreListener, FBReactionDataFetcherPersistDelegate>
{
    NSString *_reactionSessionId;
    NSString *_pageFBID;
    FBUserSession *_session;
    FBReactionDataFetcher *_reactionDataFetcher;
    FBGraphQLConnectionStore *_connectionStore;
}

- (void).cxx_destruct;
- (void)persistGraphQLConnectionStoreState:(id)arg1;
- (void)graphQLConnectionStoreDidFinishRestoringPersistedState:(id)arg1;
- (id)dataFetcher;
- (id)reactionSessionInfo;
- (void)downloadReactionUnits;
- (void)dealloc;
- (id)initWithPageFBID:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

