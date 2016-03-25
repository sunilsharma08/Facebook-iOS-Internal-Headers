//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCLLocationCacheResponseDelegate-Protocol.h"

@class CLLocation, FBCLLocationCollection, FBDiskCache, FBQueuePerformer, NSString;

@interface FBCLLocationCache : NSObject <FBCLLocationCacheResponseDelegate>
{
    FBDiskCache *_diskCache;
    FBQueuePerformer *_performer;
    FBCLLocationCollection *_locationCollection;
    CLLocation *_lastCachedLocation;
    BOOL _isInitialized;
    BOOL _isDirty;
    CLLocation *_mostRecentLocation;
}

@property(retain) CLLocation *mostRecentLocation; // @synthesize mostRecentLocation=_mostRecentLocation;
- (void).cxx_destruct;
- (void)_saveLocations;
- (void)deleteAll;
- (void)removeLocationsFromCache:(id)arg1;
- (void)fetchLocations:(CDUnknownBlockType)arg1;
- (void)saveIfNeeded;
- (void)loadCache:(CDUnknownBlockType)arg1;
- (void)addLocations:(id)arg1;
- (void)addLocationIfNeeded:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 queuePerformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

