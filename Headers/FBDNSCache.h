//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FBDNSCache : NSObject
{
    NSObject<OS_dispatch_queue> *_saveQueue;
    struct Mutex _lock;
    struct map<std::__1::basic_string<char>, std::__1::pair<__CFHost *, double>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::pair<__CFHost *, double>>>> _lookupsInProgress;
    NSMutableDictionary *_cacheEntries;
}

+ (id)persistenceURL;
+ (id)sharedCache;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeCacheEntry:(id)arg1;
- (void)invalidateCachedHost:(id)arg1;
- (void)deleteEntries;
- (void)saveEntries:(id)arg1;
- (void)insertDNSCacheHost:(id)arg1 forNamedHost:(id)arg2 pinned:(BOOL)arg3;
- (void)receivedCallbackForHostRef:(struct __CFHost *)arg1 typeInfo:(int)arg2 error:(const CDStruct_dff5684f *)arg3;
- (void)startLookupIfNotInProgress:(id)arg1;
- (id)hostsForAddress:(id)arg1;
- (id)cachedHostForNamedHost:(id)arg1;
- (id)init;

@end

