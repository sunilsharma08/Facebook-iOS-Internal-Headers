//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConnectionSyncStoreListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class FBUserSession, NSString;
@protocol FBGraphQLConnectionSyncStoreProtocol, FBPhotoSideFeedPhotosUnitDataSourceDelegate;

@interface FBPhotoSideFeedPhotosUnitDataSource : NSObject <FBGraphQLConnectionSyncStoreListener, UICollectionViewDataSource>
{
    id <FBGraphQLConnectionSyncStoreProtocol> _mediaSetConnectionSyncStore;
    id <FBPhotoSideFeedPhotosUnitDataSourceDelegate> _delegate;
    FBUserSession *_session;
    NSString *_cellID;
    NSString *_fbid;
    unsigned int _maxNumberOfPhotosToShow;
    struct CGSize _photoSize;
}

@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
- (void).cxx_destruct;
- (void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2;
- (void)connectionSyncStore:(id)arg1 didUpdateNodes:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)photoViewControllerForCellAtIndexPath:(id)arg1;
- (unsigned int)numberOfPhotosShown;
- (id)graphQLIDForPhotoAtIndex:(unsigned int)arg1;
- (id)indexOfPhoto:(id)arg1;
- (void)loadMorePhotos;
- (BOOL)isLoadingPhotos;
- (BOOL)hasPhotos;
- (id)initWithFBID:(id)arg1 initialPhotos:(id)arg2 maxNumberOfPhotosToShow:(unsigned int)arg3 delegate:(id)arg4 cellIdentifier:(id)arg5 requestProvider:(id)arg6 session:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

