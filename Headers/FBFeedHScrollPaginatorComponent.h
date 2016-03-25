//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedHScrollPaginatorArrowComponent, FBFeedHScrollPaginatorDotsComponent;

@interface FBFeedHScrollPaginatorComponent : CKCompositeComponent
{
    FBFeedHScrollPaginatorArrowComponent *_leftArrowComponent;
    FBFeedHScrollPaginatorArrowComponent *_rightArrowComponent;
    FBFeedHScrollPaginatorDotsComponent *_dotsComponent;
    struct FBFeedHscrollPaginatorConfiguration _config;
}

+ (id)newWithConfig:(const struct FBFeedHscrollPaginatorConfiguration *)arg1;
+ (id)initialState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)theController;
- (void)updateStateWithNumTotalStories:(unsigned int)arg1;
- (void)setShowLeftArrow:(BOOL)arg1 showRightArrow:(BOOL)arg2 shouldPulseArrow:(BOOL)arg3;
- (void)setCurrentDotIndex:(unsigned int)arg1;

@end

