//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemPage;

@interface FBPageProfileComponent : CKCompositeComponent
{
    FBMemPage *_page;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
}

+ (id)newWithPage:(id)arg1 toolbox:(id)arg2 analyticsInfo:(id)arg3;
- (void).cxx_destruct;
- (void)didTapView;

@end

