//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKStatefulViewComponent.h"

@class FBCommentsModelController, FBFeedComponentToolbox, NSArray;
@protocol FBFeedbackTargetProtocol;

@interface FBCommentComposerViewComponent : CKStatefulViewComponent
{
    id <FBFeedbackTargetProtocol> _feedbackTarget;
    FBCommentsModelController *_commentsModelController;
    FBFeedComponentToolbox *_toolbox;
    NSArray *_trackingCodes;
}

+ (id)initialState;
+ (id)newWithFeedbackTarget:(id)arg1 commentsModelController:(id)arg2 toolbox:(id)arg3;
@property(readonly, copy, nonatomic) NSArray *trackingCodes; // @synthesize trackingCodes=_trackingCodes;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBCommentsModelController *commentsModelController; // @synthesize commentsModelController=_commentsModelController;
@property(readonly, nonatomic) id <FBFeedbackTargetProtocol> feedbackTarget; // @synthesize feedbackTarget=_feedbackTarget;
- (void).cxx_destruct;
- (void)needsHeightUpdate:(float)arg1;

@end

