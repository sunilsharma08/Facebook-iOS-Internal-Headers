//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface FBGraphSearchHorizontalPhotoGalleryCollectionViewLayout : UICollectionViewLayout
{
    NSMutableArray *_layoutAttributes;
    struct CGSize _photoSize;
    struct CGRect _contentsRect;
    float _photoSpacing;
}

@property(nonatomic) float photoSpacing; // @synthesize photoSpacing=_photoSpacing;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;
- (id)initWithPhotoSize:(struct CGSize)arg1 contentsRect:(struct CGRect)arg2;

@end

