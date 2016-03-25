//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBMemResearchPollMultipleChoiceQuestion, FBMemResearchPollSurvey, FBUserSession, NSString;

@interface FBResearchPollSurveyComponent : CKCompositeComponent
{
    BOOL _autoSubmit;
    BOOL _questionState;
    BOOL _selectionState;
    FBMemResearchPollSurvey *_researchPoll;
    FBMemResearchPollMultipleChoiceQuestion *_currentQuestion;
    FBUserSession *_session;
    NSString *_clientToken;
}

+ (id)newWithUnit:(id)arg1 toolbox:(id)arg2;
@property(readonly, nonatomic) BOOL selectionState; // @synthesize selectionState=_selectionState;
@property(readonly, nonatomic) BOOL questionState; // @synthesize questionState=_questionState;
@property(readonly, copy, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) FBMemResearchPollMultipleChoiceQuestion *currentQuestion; // @synthesize currentQuestion=_currentQuestion;
@property(readonly, nonatomic) FBMemResearchPollSurvey *researchPoll; // @synthesize researchPoll=_researchPoll;
@property(readonly, nonatomic) BOOL autoSubmit; // @synthesize autoSubmit=_autoSubmit;
- (void).cxx_destruct;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;

@end

