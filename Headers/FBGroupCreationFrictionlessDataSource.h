//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGroupFeedHeaderCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class FBGroupCompletionCardPageCoordinator, FBGroupFeedActionBarProvider, FBMemGroupPurpose, FBUserSession, NSString;
@protocol FBCollectionViewMutating, FBGroupActionBarTapResponderProtocol, FBGroupCreationFrictionlessDataSourceDelegate, FBServiceTransactionMutating;

@interface FBGroupCreationFrictionlessDataSource : NSObject <FBGroupFeedHeaderCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    FBUserSession *_session;
    FBMemGroupPurpose *_purpose;
    FBGroupFeedActionBarProvider *_actionBarProvider;
    id <FBServiceTransactionMutating> _usernameDownloadHandle;
    id <FBCollectionViewMutating> _collectionViewMutator;
    id <FBGroupCreationFrictionlessDataSourceDelegate> _delegate;
    id <FBGroupActionBarTapResponderProtocol> _actionBarTapResponder;
    FBGroupCompletionCardPageCoordinator *_completionCardCoordinator;
}

@property(nonatomic) __weak FBGroupCompletionCardPageCoordinator *completionCardCoordinator; // @synthesize completionCardCoordinator=_completionCardCoordinator;
@property(nonatomic) __weak id <FBGroupActionBarTapResponderProtocol> actionBarTapResponder; // @synthesize actionBarTapResponder=_actionBarTapResponder;
@property(nonatomic) __weak id <FBGroupCreationFrictionlessDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBCollectionViewMutating> collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
- (void).cxx_destruct;
- (void)groupHeaderNameFieldDidResignFirstResponder:(id)arg1;
- (void)groupHeaderNameFieldDidBecomeFirstResponder:(id)arg1;
- (void)groupHeaderDidTapParentGroupLogo;
- (void)groupHeaderDidTapAddCoverPhoto;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (float)collectionView:(id)arg1 heightForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForCompletionAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForActionBarRowAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForCoverPhotoItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)registerClassWithReuseIdentifier;
- (void)_updatePurpose:(id)arg1;
- (void)_setupPurposeWithUsername;
- (id)indexPathOfHeaderCell;
- (void)dealloc;
- (id)initWithSession:(id)arg1 purpose:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

