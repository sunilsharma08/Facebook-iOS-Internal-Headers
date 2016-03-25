//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMagicStoriesCollageLayoutDelegate-Protocol.h"
#import "FBMagicStoryAddButtonViewDelegate-Protocol.h"
#import "FBMagicStoryTitleViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class FBMagicStoryAddButtonView, FBMagicStoryCollection, FBMagicStoryTitleView, FBUserSession, NSString;
@protocol FBMagicStoryCollectionDataSourceDelegate;

@interface FBMagicStoryCollectionDataSource : NSObject <FBMagicStoryTitleViewDelegate, FBMagicStoryAddButtonViewDelegate, FBMagicStoriesCollageLayoutDelegate, UICollectionViewDataSource>
{
    FBMagicStoryTitleView *_titleView;
    FBMagicStoryAddButtonView *_addButtonView;
    FBUserSession *_session;
    BOOL _isEditingText;
    id <FBMagicStoryCollectionDataSourceDelegate> _delegate;
    FBMagicStoryCollection *_collection;
}

@property(retain, nonatomic) FBMagicStoryCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <FBMagicStoryCollectionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapAddButton:(id)arg1;
- (void)titleViewDidEndEditingText:(id)arg1;
- (void)titleViewDidBeginEditingText:(id)arg1;
- (void)titleView:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)removeAssetOfIndexPath:(id)arg1;
- (void)swapAssetOfIndexPath:(id)arg1 withAssetOfIndexPath:(id)arg2;
- (id)indexPathForAsset:(id)arg1;
- (id)initWithCollection:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

