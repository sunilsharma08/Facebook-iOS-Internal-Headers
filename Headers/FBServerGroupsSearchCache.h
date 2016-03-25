//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"

@class FBCache, NSMapTable, NSString;

@interface FBServerGroupsSearchCache : NSObject <FBSessionClassProvidable>
{
    FBCache *_searchCache;
    NSMapTable *_cacheableRequests;
}

- (void).cxx_destruct;
- (id)cachedGroupThreadsForQuery:(id)arg1;
- (void)cacheGroupThreads:(id)arg1 forRequest:(id)arg2;
- (void)registerCacheableRequest:(id)arg1 forQuery:(id)arg2;
- (id)init;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

