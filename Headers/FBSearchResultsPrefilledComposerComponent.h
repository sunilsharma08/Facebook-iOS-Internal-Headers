//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBMemGraphSearchModule, FBMemInlineActivity, FBSearchResultsContext;

@interface FBSearchResultsPrefilledComposerComponent : CKCompositeComponent
{
    FBMemInlineActivity *_inlineActicity;
    FBSearchResultsContext *_context;
    FBMemGraphSearchModule *_moduleEdgeModel;
    unsigned int _moduleIndex;
}

+ (id)newWithModuleEdgeModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)logTappingEvent;
- (void)didTapPublishPhotoButton:(id)arg1;
- (void)didTapPublishStatusButton:(id)arg1;

@end

