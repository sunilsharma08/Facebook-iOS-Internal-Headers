//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBFeedSecondaryActionContext, FBMemFeedStory, FBMemGroupCommerceProductItem, NSArray;

@interface FBGroupSellProductItemSummaryCompactContentComponent : CKCompositeComponent
{
    FBMemFeedStory *_story;
    FBFeedComponentToolbox *_toolbox;
    FBMemGroupCommerceProductItem *_productItem;
    unsigned int _layoutIdiom;
    FBFeedSecondaryActionContext *_context;
    NSArray *_parentTrackingCodes;
    NSArray *_trackingCodes;
    NSArray *_trackingNodes;
    BOOL _routeLikeToPermalink;
    struct FBGroupCommerceCompactViewPostTapData _logData;
}

+ (id)newWithUnit:(id)arg1 attachment:(id)arg2 image:(id)arg3 toolbox:(id)arg4 style:(struct FBGroupSellProductItemSummaryStyle)arg5 routeLikeToPermalink:(BOOL)arg6 logData:(struct FBGroupCommerceCompactViewPostTapData)arg7 groupID:(id)arg8;
+ (id)newWithUnit:(id)arg1 attachment:(id)arg2 image:(id)arg3 toolbox:(id)arg4 style:(struct FBGroupSellProductItemSummaryStyle)arg5 groupID:(id)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logCompactViewTapEvent:(id)arg1;
- (void)didTapStoryContent:(id)arg1;

@end

