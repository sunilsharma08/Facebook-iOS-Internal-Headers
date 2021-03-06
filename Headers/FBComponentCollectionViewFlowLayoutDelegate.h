//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString;
@protocol FBComponentsCollectionViewItemSizeProvider;

@interface FBComponentCollectionViewFlowLayoutDelegate : NSObject <UICollectionViewDelegateFlowLayout>
{
    id <FBComponentsCollectionViewItemSizeProvider> _componentsCollectionViewItemSizeProvider;
}

- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)initWithItemSizeProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

