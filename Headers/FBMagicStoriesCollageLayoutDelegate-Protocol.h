//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class FBMagicStoriesCollageLayout, NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol FBMagicStoriesCollageLayoutDelegate <UICollectionViewDelegate>
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(FBMagicStoriesCollageLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end

