//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPrivacyEducationCollapsedViewDelegate-Protocol.h"

@class FBMemPrivacyEducationInfo, FBUserSession;
@protocol FBStoryPrivacyEducationManagerDelegate;

@interface FBStoryPrivacyEducationManager : NSObject <FBPrivacyEducationCollapsedViewDelegate>
{
    unsigned int _storyEducationType;
    unsigned int _nuxEducationState;
    FBUserSession *_session;
    FBMemPrivacyEducationInfo *_privacyEducationInfo;
    id <FBStoryPrivacyEducationManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBStoryPrivacyEducationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)privacyCollapseEducationTappedShowMoreEducation:(id)arg1;
- (void)_userDidTapLearnMoreLink;
- (void)_userDidTapStateChangeButton;
- (id)_getReshareActiveEducationNuxView:(struct CGRect)arg1 nuxTitle:(id)arg2 educationContent:(id)arg3 iconImage:(id)arg4;
- (void)_nuxEducationStateDidChange;
- (id)privacyEducationNuxView;
@property(readonly, nonatomic) BOOL showPrivacyEducation;
- (id)initWithPrivacyEducationInfo:(id)arg1 session:(id)arg2;

@end

