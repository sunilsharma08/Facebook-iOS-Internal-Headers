//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBInvalidating-Protocol.h"

@class FBScenePath, FBUserSession, NSOrderedSet, NSString;
@protocol FBGraphQLConnectionSyncStoreProtocol;

@interface FBContextualTimelineCoverCarouselMediaSetController : NSObject <FBInvalidating>
{
    FBUserSession *_session;
    unsigned int _pageSize;
    FBScenePath *_scenePath;
    NSString *_mediaSetGraphQLID;
    NSString *_privacyFilter;
    id <FBGraphQLConnectionSyncStoreProtocol> _mediaStore;
}

@property(readonly, nonatomic) id <FBGraphQLConnectionSyncStoreProtocol> mediaStore; // @synthesize mediaStore=_mediaStore;
@property(copy, nonatomic) NSString *mediaSetGraphQLID; // @synthesize mediaSetGraphQLID=_mediaSetGraphQLID;
- (void).cxx_destruct;
- (void)_reset;
- (void)_sessionWillInvalidate:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (BOOL)fetchNextPageWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSOrderedSet *currentNodes;
@property(readonly, nonatomic) BOOL isFetchingNextPage;
@property(readonly, nonatomic) BOOL canFetchNextPage;
- (void)dealloc;
- (id)initWithSession:(id)arg1 pageSize:(unsigned int)arg2 scenePath:(id)arg3 privacyFilter:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

