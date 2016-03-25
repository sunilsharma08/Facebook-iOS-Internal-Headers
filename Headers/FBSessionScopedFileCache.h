//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBObjectCache-Protocol.h"

@class FBFileSystemObjectCache, NSString;

@interface FBSessionScopedFileCache : NSObject <FBObjectCache>
{
    FBFileSystemObjectCache *_cache;
}

- (void).cxx_destruct;
- (void)clear;
- (void)storeObject:(id)arg1;
- (void)loadObject;
- (void)_sessionWillInvalidate:(id)arg1;
- (void)dealloc;
- (id)initWithCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

