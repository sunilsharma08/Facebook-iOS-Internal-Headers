//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBContactsSyncOperationResult, NSError, NSOperation;

@protocol FBDeltaSyncOperationDelegate <NSObject>

@optional
- (void)deltaSyncOperation:(NSOperation *)arg1 didCompleteSyncWithResult:(FBContactsSyncOperationResult *)arg2;
- (void)deltaSyncOperation:(NSOperation *)arg1 couldNotSyncWithError:(NSError *)arg2 fallBackToFullSyncIfPossible:(BOOL)arg3;
@end

