//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface SBSyncOperationParameters : NSObject
{
    BOOL _shouldIndexAndSyncOlderAssets;
    BOOL _shouldReIndex;
    NSArray *_indexerDateIntervals;
    int _maxAssetsToConsider;
}

@property(nonatomic) BOOL shouldReIndex; // @synthesize shouldReIndex=_shouldReIndex;
@property(nonatomic) BOOL shouldIndexAndSyncOlderAssets; // @synthesize shouldIndexAndSyncOlderAssets=_shouldIndexAndSyncOlderAssets;
@property(nonatomic) int maxAssetsToConsider; // @synthesize maxAssetsToConsider=_maxAssetsToConsider;
@property(retain, nonatomic) NSArray *indexerDateIntervals; // @synthesize indexerDateIntervals=_indexerDateIntervals;
- (void).cxx_destruct;

@end

