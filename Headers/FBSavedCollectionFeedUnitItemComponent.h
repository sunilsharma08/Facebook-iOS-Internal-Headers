//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemSavedCollectionFeedUnitItem;

@interface FBSavedCollectionFeedUnitItemComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBMemSavedCollectionFeedUnitItem *_item;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
}

+ (id)urlStringForItem:(id)arg1;
+ (id)newWithStory:(id)arg1 toolbox:(id)arg2;
- (void).cxx_destruct;
- (void)becameFullyVisible;
- (void)didTapBackground:(id)arg1;

@end

