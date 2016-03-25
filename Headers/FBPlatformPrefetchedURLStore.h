//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FBPlatformPrefetchedURLStore : NSObject
{
    NSMutableDictionary *_urlToFileMap;
    NSString *_cachedResponsesDiskPath;
    NSString *_urlToFileMapArchivePath;
}

+ (id)canonicalURLStringForURLString:(id)arg1;
@property(copy, nonatomic) NSString *urlToFileMapArchivePath; // @synthesize urlToFileMapArchivePath=_urlToFileMapArchivePath;
@property(copy, nonatomic) NSString *cachedResponsesDiskPath; // @synthesize cachedResponsesDiskPath=_cachedResponsesDiskPath;
@property(retain, nonatomic) NSMutableDictionary *urlToFileMap; // @synthesize urlToFileMap=_urlToFileMap;
- (void).cxx_destruct;
- (void)removeOrphanedCachedResponses;
- (BOOL)serializeToDisk;
- (BOOL)removeCachedResponseForURLString:(id)arg1;
- (BOOL)storeResponse:(id)arg1 data:(id)arg2;
- (id)cachedResponseForURL:(id)arg1;
- (id)initWithDiskPath:(id)arg1;

@end

