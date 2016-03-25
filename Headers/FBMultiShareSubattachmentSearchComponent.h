//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBIntentAnalyticsInfo, FBMemStoryAttachment, NSDictionary;

@interface FBMultiShareSubattachmentSearchComponent : CKCompositeComponent
{
    SEL _tapSearchButtonAction;
    FBMemStoryAttachment *_attachment;
    FBIntentAnalyticsInfo *_analyticsInfo;
    NSDictionary *_tagToSearchURL;
}

+ (id)newWithAttachment:(id)arg1 tapSearchButtonAction:(SEL)arg2 analyticsInfo:(id)arg3 toolbox:(id)arg4;
- (void).cxx_destruct;
- (void)tapCommon:(id)arg1 sender:(id)arg2;
- (void)didTapIconWithDescriptionComponent:(id)arg1;
- (void)didTapSearchButton:(id)arg1;

@end

