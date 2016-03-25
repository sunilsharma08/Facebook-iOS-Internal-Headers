//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBComponentScrollEventListener <NSObject>

@optional
- (void)scrollViewDidEndScrollingAnimation:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(struct FBScrollViewState)arg1 withVelocity:(struct CGPoint)arg2 fixedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
@end

