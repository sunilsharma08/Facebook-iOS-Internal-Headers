//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, UIScrollView, UIView;
@protocol FBTimelineDataController;

@protocol FBSwipableProfileViewController <NSObject>
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)logViewAppearedEvent;
- (void)setDisplayOptions:(unsigned int)arg1;
- (UIColor *)swipableContainerViewBackgroundColor;
- (UIView *)swipableContainerView;
- (id <FBTimelineDataController>)dataController;
- (UIScrollView *)swipableScrollView;
@end

