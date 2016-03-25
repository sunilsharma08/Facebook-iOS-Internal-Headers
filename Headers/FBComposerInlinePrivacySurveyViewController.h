//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComposerInlinePrivacySurveyViewDelegate-Protocol.h"
#import "FBPopoverControllerDelegate-Protocol.h"

@class FBComposerAudienceEducationData, FBComposerInlinePrivacySurveyView, FBComposerPrivacySetting, NSString;
@protocol FBComposerInlinePrivacySurveyViewControllerDelegate;

@interface FBComposerInlinePrivacySurveyViewController : UIViewController <FBComposerInlinePrivacySurveyViewDelegate, FBPopoverControllerDelegate>
{
    FBComposerInlinePrivacySurveyView *_audienceEducationView;
    FBComposerAudienceEducationData *_inlinePrivacySurveyData;
    BOOL _isShowingConfirmationView;
    id <FBComposerInlinePrivacySurveyViewControllerDelegate> _delegate;
    FBComposerPrivacySetting *_firstDisplayedPrivacySetting;
    FBComposerPrivacySetting *_secondDisplayedPrivacySetting;
}

@property(copy, nonatomic) FBComposerPrivacySetting *secondDisplayedPrivacySetting; // @synthesize secondDisplayedPrivacySetting=_secondDisplayedPrivacySetting;
@property(copy, nonatomic) FBComposerPrivacySetting *firstDisplayedPrivacySetting; // @synthesize firstDisplayedPrivacySetting=_firstDisplayedPrivacySetting;
@property(nonatomic) __weak id <FBComposerInlinePrivacySurveyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inlinePrivacySurveyViewUserDidSelectSkip:(id)arg1;
- (void)inlinePrivacySurveyViewUserDidSelectConfirmation:(id)arg1;
- (void)inlinePrivacySurveyViewUserDidSelectMoreOptions:(id)arg1;
- (void)inlinePrivacySurveyView:(id)arg1 userDidSelectSecondaryPrivacy:(id)arg2;
- (void)inlinePrivacySurveyView:(id)arg1 userDidSelectPrimaryPrivacy:(id)arg2;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (struct CGSize)contentSizeForInlinePrivacySurveyViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithInlinePrivacySurveyData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

