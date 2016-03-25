//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBTableViewDataSourceDelegate-Protocol.h"

@class NSIndexPath, UIScrollView, UITableView, UITableViewCell;

@protocol FBTableViewDataSourceDelegateTransitioning <FBTableViewDataSourceDelegate>

@optional
- (void)tableView:(UITableView *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg1;
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
@end

