//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPersistentKeyValueStoreProtocol-Protocol.h"

@class NSArray, NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FBDiskCacheProtocol <FBPersistentKeyValueStoreProtocol>
- (NSData *)dataForKey:(NSString *)arg1 options:(unsigned int)arg2 modificationDate:(id *)arg3;
- (void)fetchFirstCachedDataOnDiskForKeys:(NSArray *)arg1 options:(unsigned int)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(NSString *, NSData *, NSDate *))arg4;
- (void)cacheData:(NSData *)arg1 toDiskForKey:(NSString *)arg2 options:(unsigned int)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(NSError *))arg5;
- (void)fetchCachedDataOnDiskForKey:(NSString *)arg1 options:(unsigned int)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(NSData *, NSDate *))arg4;
- (void)setEnforceExtendedMetadata;
- (void)overrideConfiguration:(double)arg1 lruLimit:(unsigned int)arg2;
- (void)updateLastAccessDateForKey:(NSString *)arg1;
- (void)fetchFirstCachedDataOnDiskForKeys:(NSArray *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSString *, NSData *, NSDate *))arg3;
- (void)fetchCachedDataOnDiskForKey:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSData *, NSDate *))arg3;
- (void)cacheData:(NSData *)arg1 toDiskForKey:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(NSError *))arg4;
@end

