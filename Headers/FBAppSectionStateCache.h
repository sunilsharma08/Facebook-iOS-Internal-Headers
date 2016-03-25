//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppSectionStatePersister-Protocol.h"
#import "FBObjectCachingListener-Protocol.h"

@class FBSessionScopedFileCache, NSString;
@protocol FBAppSectionStateCachingListener;

@interface FBAppSectionStateCache : NSObject <FBObjectCachingListener, FBAppSectionStatePersister>
{
    id <FBAppSectionStateCachingListener> _listener;
    FBSessionScopedFileCache *_cache;
}

- (void).cxx_destruct;
- (void)successfullyLoadedObject:(id)arg1;
- (void)successfullyStoredObject:(id)arg1;
- (void)failedToWriteObject:(id)arg1;
- (void)failedToLoadStoredObject;
- (void)attemptedToLoadNonExistentStoredObject;
- (void)writeAppSectionState:(id)arg1;
- (void)readAppSectionState;
- (id)init;
- (id)initWithPreferences:(id)arg1 session:(id)arg2 listener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

