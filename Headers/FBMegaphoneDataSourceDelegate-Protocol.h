//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFeedViewTopDataSourceDelegate-Protocol.h"

@class FBMegaphoneDataSource, NSURL;

@protocol FBMegaphoneDataSourceDelegate <FBFeedViewTopDataSourceDelegate>
- (BOOL)megaphoneDataSource:(FBMegaphoneDataSource *)arg1 openMegaphoneURL:(NSURL *)arg2;
- (BOOL)megaphoneDataSource:(FBMegaphoneDataSource *)arg1 shouldDismissAfterOpenURL:(NSURL *)arg2;
@end

