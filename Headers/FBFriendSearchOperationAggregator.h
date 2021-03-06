//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFriendSearchOperationRunner, FBSyncStorePersonSearchOperation, FBTimeThrottler;
@protocol FBFriendSearchOperationAggregatorDelegate;

@interface FBFriendSearchOperationAggregator : NSObject
{
    FBTimeThrottler *_throttler;
    FBSyncStorePersonSearchOperation *_runningJob;
    FBFriendSearchOperationRunner *_runner;
    unsigned int _queuedOperationType;
    id <FBFriendSearchOperationAggregatorDelegate> _delegate;
}

@property(nonatomic) id <FBFriendSearchOperationAggregatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelOperations;
- (void)_cleanUpOpeation:(id)arg1;
- (void)_runOperation;
- (void)beginNextOperationIfPossible:(BOOL)arg1;
- (void)dealloc;
- (id)initWithSearchOperationRunner:(id)arg1 minTimeBetweenOperations:(double)arg2;
- (id)init;

@end

