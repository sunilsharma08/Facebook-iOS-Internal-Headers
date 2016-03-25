//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemPlaceReviewFeedUnitItem;

@interface FBPlaceReviewFeedUnitItemComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBMemPlaceReviewFeedUnitItem *_item;
    SEL _action;
    FBIntentAnalyticsInfo *_analyticsInfo;
    SEL _tapXOutAction;
    FBFeedComponentToolbox *_toolbox;
}

+ (id)newWithStory:(id)arg1 tapComposeReviewAction:(SEL)arg2 tapXOutAction:(SEL)arg3 toolbox:(id)arg4;
@property(readonly, nonatomic) FBMemPlaceReviewFeedUnitItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)becameFullyVisible;
- (void)launchNativePage;
- (void)didTapXOut:(id)arg1;

@end

