//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBGraphQLConnectionSyncStoreListener-Protocol.h"

@class NSString;

@interface FBGraphQLConnectionSyncStoreListenerAnnouncer : FBAnnouncerBase <FBGraphQLConnectionSyncStoreListener>
{
}

- (void)connectionSyncStoreWillPerformRequest:(id)arg1;
- (void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4;
- (void)connectionSyncStoreDidFinishRequest:(id)arg1 error:(id)arg2;
- (void)connectionSyncStoreDidStartRequest:(id)arg1;
- (void)connectionSyncStore:(id)arg1 willUseFirstCachedResponse:(BOOL)arg2;
- (void)connectionSyncStoreDidReplaceCache:(id)arg1;
- (void)connectionSyncStoreDidChangeContent:(id)arg1;
- (void)connectionSyncStoreDidReachStart:(id)arg1;
- (void)connectionSyncStoreDidReachEnd:(id)arg1;
- (void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didUpdateNodes:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

