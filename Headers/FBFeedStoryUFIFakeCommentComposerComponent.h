//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBMemFeedStory, NSArray;

@interface FBFeedStoryUFIFakeCommentComposerComponent : CKCompositeComponent
{
    NSArray *_parentTrackingCodes;
    NSArray *_trackingCodes;
    NSArray *_trackingNodes;
    FBFeedComponentToolbox *_toolbox;
    FBMemFeedStory *_story;
}

+ (id)newWithStory:(id)arg1 storyInsets:(struct UIEdgeInsets)arg2 toolbox:(id)arg3;
@property(readonly, nonatomic) FBMemFeedStory *story; // @synthesize story=_story;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (void)handleComposerTap;

@end

