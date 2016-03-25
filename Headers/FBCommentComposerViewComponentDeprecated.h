//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKStatefulViewComponent.h"

@class FBFeedComponentToolbox, FBMemFeedStory, NSArray;

@interface FBCommentComposerViewComponentDeprecated : CKStatefulViewComponent
{
    float _minComposerHeight;
    FBMemFeedStory *_story;
    FBFeedComponentToolbox *_toolbox;
    NSArray *_trackingCodes;
}

+ (id)newWithStory:(id)arg1 toolbox:(id)arg2;
@property(copy, nonatomic) NSArray *trackingCodes; // @synthesize trackingCodes=_trackingCodes;
@property(retain, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(retain, nonatomic) FBMemFeedStory *story; // @synthesize story=_story;
- (void).cxx_destruct;
- (void)controllerUpdatedHeight:(float)arg1;

@end

