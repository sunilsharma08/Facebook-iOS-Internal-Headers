//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPersistentKeyValueStore.h"

#import "FBDiskCacheProtocol-Protocol.h"

@class NSString;

@interface FBDiskCache : FBPersistentKeyValueStore <FBDiskCacheProtocol>
{
    shared_ptr_ce6ebb6e _diskCache;
    BOOL _enforceExtendedMetadata;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)provideAnalyticsDataWithCallbackQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)analyticsStoreType;
- (id)analyticsStoreIdentifier;
- (id)dataForKey:(id)arg1 options:(unsigned int)arg2 modificationDate:(id *)arg3;
- (void)fetchFirstCachedDataOnDiskForKeys:(id)arg1 options:(unsigned int)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)cacheData:(id)arg1 toDiskForKey:(id)arg2 options:(unsigned int)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchCachedDataOnDiskForKey:(id)arg1 options:(unsigned int)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)overrideConfiguration:(double)arg1 lruLimit:(unsigned int)arg2;
- (void)updateLastAccessDateForKey:(id)arg1;
- (void)fetchFirstCachedDataOnDiskForKeys:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cacheData:(id)arg1 toDiskForKey:(id)arg2 withExtendedInfo:(shared_ptr_16ddcdcf)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)cacheData:(id)arg1 toDiskForKey:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fetchCachedDataOnDiskForKey:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setEnforceExtendedMetadata;
- (id)initWithDiskCache:(shared_ptr_ce6ebb6e)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 staleAge:(double)arg3 lruSizeLimit:(unsigned int)arg4 survivalSize:(unsigned int)arg5 inlineData:(_Bool)arg6;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

