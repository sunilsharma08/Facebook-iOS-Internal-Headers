//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBScrollViewSwipeBasedDismissalManager, UIView;

@protocol FBScrollViewSwipeBasedDismissalManagerDelegate <NSObject>
- (void)scrollViewSwipeBasedDismissalManager:(FBScrollViewSwipeBasedDismissalManager *)arg1 didDetectDismissalGestureWithDirection:(unsigned int)arg2 fromView:(UIView *)arg3;

@optional
- (void)scrollViewSwipeBasedDismissalManager:(FBScrollViewSwipeBasedDismissalManager *)arg1 didUpdateContainerTranslationProgress:(float)arg2;
- (void)scrollViewSwipeBasedDismissalManagerDidBeginSwipingContainerView:(FBScrollViewSwipeBasedDismissalManager *)arg1;
- (void)scrollViewSwipeBasedDismissalManager:(FBScrollViewSwipeBasedDismissalManager *)arg1 didEndContainerResetWithAnimation:(BOOL)arg2;
- (void)scrollViewSwipeBasedDismissalManagerWillBeginContainerResetAnimation:(FBScrollViewSwipeBasedDismissalManager *)arg1;
@end

