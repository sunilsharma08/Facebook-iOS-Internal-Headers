//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFriendingPossibilitiesDataSource, NSArray;

@protocol FBFriendingPossibilitiesEdgesListener <NSObject>
- (void)friendingPossibilitiesDataSource:(FBFriendingPossibilitiesDataSource *)arg1 didUpdateEdges:(NSArray *)arg2 isReloading:(BOOL)arg3;
- (void)friendingPossibilitiesDataSource:(FBFriendingPossibilitiesDataSource *)arg1 didRemoveEdges:(NSArray *)arg2 isReloading:(BOOL)arg3;
- (void)friendingPossibilitiesDataSource:(FBFriendingPossibilitiesDataSource *)arg1 didInsertEdges:(NSArray *)arg2 forLoadType:(int)arg3;
@end

