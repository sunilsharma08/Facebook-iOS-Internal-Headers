//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBMemGraphSearchModule, FBSearchResultsContext, NSString, NSURL;

@interface FBSearchResultsNewsRelatedTopicComponent : CKCompositeComponent
{
    NSURL *_nativeURL;
    NSString *_topicID;
    FBSearchResultsContext *_context;
    FBMemGraphSearchModule *_moduleEdgeModel;
    unsigned int _moduleIndex;
}

+ (id)_atrributedText:(id)arg1 withFont:(id)arg2 textColor:(id)arg3;
+ (id)_topicsActors:(id)arg1;
+ (id)_trendingTime:(id)arg1 withContext:(id)arg2;
+ (id)_subtext:(id)arg1;
+ (id)_title:(id)arg1;
+ (id)newWithModuleEdgeModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)logTappingEvent;
- (void)didTapOnNewsModule:(id)arg1;

@end

