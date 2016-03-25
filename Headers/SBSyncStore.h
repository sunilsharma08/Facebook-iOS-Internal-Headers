//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBInvalidating-Protocol.h"

@class EGODatabase, FBUserSession, NSMutableArray, NSString;

@interface SBSyncStore : NSObject <FBInvalidating>
{
    EGODatabase *_db;
    int _storeVersion;
    BOOL _interruptRecordingNewAssets;
    NSMutableArray *_recordNewAssetsLock;
    BOOL _invalidated;
    CDUnknownBlockType _willCreateNewStoreBlock;
    FBUserSession *_session;
}

+ (id)dbPathForUserID:(id)arg1 createDirectoryIfNecessary:(BOOL)arg2;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType willCreateNewStoreBlock; // @synthesize willCreateNewStoreBlock=_willCreateNewStoreBlock;
- (void).cxx_destruct;
- (void)discardStore;
- (BOOL)rebuildDB;
- (void)readKeyValuesState;
- (_Bool)quickCheckOK;
- (void)closeDB;
- (BOOL)openDB;
- (void)removeUnsyncedAssetsBeforeTimestamp:(int)arg1;
- (void)persistAsset:(id)arg1;
- (BOOL)recordNewAssets:(id)arg1;
- (id)assetInfoForURL:(id)arg1;
- (BOOL)hasAnyAssets;
- (id)chronologicalAssetsSinceTimestamp:(int)arg1;
- (id)_newAssetFromDatabaseRow:(id)arg1;
- (id)assetsForDisplayWithMaxNumber:(int)arg1;
- (id)assetsForDisplay;
- (int)numberOfUndeletedAssetsInStore;
- (int)oldestSyncedTimestamp;
- (int)latestAssetTimestamp;
- (BOOL)open;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

