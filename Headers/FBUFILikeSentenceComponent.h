//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBMemFeedback, FBUFICommentToolbox;

@interface FBUFILikeSentenceComponent : CKCompositeComponent
{
    FBMemFeedback *_feedback;
    FBUFICommentToolbox *_toolbox;
}

+ (id)newWithFeedback:(id)arg1 feedbackContainerType:(unsigned int)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (void)didTapAggregatedText;

@end

