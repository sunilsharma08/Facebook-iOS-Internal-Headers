//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemStoryAttachment;

@interface FBMultiShareViewMoreComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBMemStoryAttachment *_attachment;
    FBIntentAnalyticsInfo *_analyticsInfo;
    FBFeedComponentToolbox *_toolbox;
    SEL _becameFullyVisibleAction;
    SEL _tapAttachmentAction;
}

+ (id)newWithAttachment:(id)arg1 toolbox:(id)arg2 contentComponent:(id)arg3 becameFullyVisibleAction:(SEL)arg4 tapAttachmentAction:(SEL)arg5;
- (void).cxx_destruct;
- (void)becameFullyVisible;
- (void)didTapOnAttachment:(id)arg1;

@end

