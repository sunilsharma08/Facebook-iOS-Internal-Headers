//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBConsistentLookasideCacheObservationHandle, FBUserSession;
@protocol FBServiceTransactionMutating;

@interface FBCommentAuthorFetchController : NSObject
{
    FBUserSession *_session;
    FBConsistentLookasideCacheObservationHandle *_authorObservationHandle;
    id <FBServiceTransactionMutating> _currentGraphQLRequestToken;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id <FBServiceTransactionMutating> currentGraphQLRequestToken; // @synthesize currentGraphQLRequestToken=_currentGraphQLRequestToken;
@property(retain, nonatomic) FBConsistentLookasideCacheObservationHandle *authorObservationHandle; // @synthesize authorObservationHandle=_authorObservationHandle;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_authorDidUpdate:(id)arg1;
- (void)fetchActorWithGraphQLID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

