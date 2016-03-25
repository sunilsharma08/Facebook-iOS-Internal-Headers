//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBObjectCachingListener-Protocol.h"

@class FBProductionPromptsStoreCacheListenerAnnouncer, FBSessionScopedFileCache, NSString;

@interface FBProductionPromptsStoreCache : NSObject <FBObjectCachingListener>
{
    FBSessionScopedFileCache *_cache;
    FBProductionPromptsStoreCacheListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)successfullyLoadedObject:(id)arg1;
- (void)successfullyStoredObject:(id)arg1;
- (void)failedToWriteObject:(id)arg1;
- (void)failedToLoadStoredObject;
- (void)attemptedToLoadNonExistentStoredObject;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)readProductionPromptState;
- (void)writeProductionPromptsState:(id)arg1;
- (id)initWithPreferences:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

