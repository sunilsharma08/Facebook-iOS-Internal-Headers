//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReactionPhotoAttachmentsDataSourceProtocol-Protocol.h"
#import "FBReactionPhotoStoreListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FBReactionPhotoStore, FBUserSession, NSMapTable, NSString, UIColor;
@protocol FBReactionPhotoAttachmentsDataSourceInteractionDelegate;

@interface FBReactionPhotoAttachmentsCollectionViewDataSource : NSObject <FBReactionPhotoStoreListener, FBReactionPhotoAttachmentsDataSourceProtocol, UICollectionViewDataSource, UICollectionViewDelegate>
{
    FBUserSession *_session;
    UIColor *_cellBackgroundColor;
    FBReactionPhotoStore *_photoStore;
    id <FBReactionPhotoAttachmentsDataSourceInteractionDelegate> _delegate;
    NSMapTable *_weakCollectionViews;
}

+ (void)_ensureCellAtIndexPathIsVisible:(id)arg1 inCollectionView:(id)arg2;
@property(retain, nonatomic) NSMapTable *weakCollectionViews; // @synthesize weakCollectionViews=_weakCollectionViews;
@property(nonatomic) __weak id <FBReactionPhotoAttachmentsDataSourceInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)photoStoreDidLoadMorePhotos:(id)arg1;
- (void)photoStore:(id)arg1 didRemovePhoto:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)animatableViewForPhoto:(id)arg1 inCollectionView:(id)arg2;
- (id)indexPathOfPhoto:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (id)initWithSession:(id)arg1 photoStore:(id)arg2 cellBackgroundColor:(id)arg3;
- (id)initWithSession:(id)arg1 photoStore:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

