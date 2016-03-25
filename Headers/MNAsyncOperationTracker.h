//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet;

@interface MNAsyncOperationTracker : NSObject
{
    NSMapTable *_pendingOperations;
    NSMutableSet *_longRunningFetchIds;
    NSMutableSet *_canceledIds;
}

- (void).cxx_destruct;
- (id)asyncOperationEnumerator;
- (BOOL)isAsyncOperationLongRunning:(long long)arg1;
- (void)setAsyncOperationIsLongRunning:(long long)arg1;
- (id)getTokenForAsyncOperation:(long long)arg1;
- (void)cancelAsyncOperation:(long long)arg1;
- (void)clearAsyncOperation:(long long)arg1;
- (long long)beginTrackingAsyncOperationWithToken:(id)arg1;
- (id)init;

@end

