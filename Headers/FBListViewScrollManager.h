//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBListViewScrollManager : NSObject
{
}

- (void)_scrollToDefaultForTableOrCollectionView:(id)arg1 scrollDirection:(unsigned int)arg2 preferredScrollPosition:(unsigned int)arg3;
- (float)_contentOffesetForTableOrCollectionView:(id)arg1 rowFrame:(struct CGRect)arg2 cellOffset:(float)arg3 scrollDirection:(unsigned int)arg4 preferredScrollPosition:(unsigned int)arg5;
- (void)restoreCollectionView:(id)arg1 withScrollState:(id)arg2 preferredScrollPosition:(unsigned int)arg3;
- (void)restoreTableView:(id)arg1 withScrollState:(id)arg2 preferredScrollPosition:(unsigned int)arg3;
- (id)_scrollStateForTableOrCollectionView:(id)arg1 withScrollDirection:(unsigned int)arg2 rowFrame:(struct CGRect)arg3 rowIndex:(int)arg4 preferredScrollPosition:(unsigned int)arg5;
- (id)scrollStateForCollectionView:(id)arg1 preferredScrollPosition:(unsigned int)arg2;
- (id)scrollStateForTableView:(id)arg1 preferredScrollPosition:(unsigned int)arg2;

@end

