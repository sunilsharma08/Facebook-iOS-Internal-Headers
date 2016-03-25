//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol UICollectionViewDelegateFlowLayout <UICollectionViewDelegate>

@optional
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (float)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end

