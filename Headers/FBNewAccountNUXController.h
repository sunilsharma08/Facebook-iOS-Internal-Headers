//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBProfilePicturePickerControllerDelegate-Protocol.h"
#import "FBSimpleNUXStepViewControlling-Protocol.h"

@class FBNewAccountNUXNavController, FBNewAccountNUXStepFactory, FBUserSession, NSArray, NSMutableDictionary, NSString;
@protocol FBNewAccountNUXControllerDelegate;

@interface FBNewAccountNUXController : NSObject <FBSimpleNUXStepViewControlling, FBProfilePicturePickerControllerDelegate>
{
    FBUserSession *_session;
    FBNewAccountNUXStepFactory *_stepFactory;
    NSMutableDictionary *_cachedStepControllers;
    unsigned int _currentStepIndex;
    FBNewAccountNUXNavController *_navController;
    id <FBNewAccountNUXControllerDelegate> _delegate;
    NSArray *_steps;
}

@property(copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) __weak id <FBNewAccountNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBNewAccountNUXNavController *navController; // @synthesize navController=_navController;
@property(nonatomic) unsigned int currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
- (void).cxx_destruct;
- (void)profilePicturePickerDidFailSettingPic:(id)arg1 error:(id)arg2;
- (void)profilePicturePickerDidUploadPic:(id)arg1;
- (void)profilePicturePickerDidChooseVideo:(id)arg1 selectingViewController:(id)arg2;
- (void)profilePicturePickerDidChoosePic:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)skipAction:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)logEvent;
- (void)addNextButtonForViewController:(id)arg1;
- (void)incrementCurrentStepIndex;
- (void)addSkipButtonForViewController:(id)arg1;
- (void)addBackButtonForViewController:(id)arg1;
- (id)stepViewControllerBeforeCurrentIndex;
- (id)stepViewControllerStartingFromCurrentIndex;
- (void)updateServerCurrentStepStatus:(unsigned int)arg1;
- (void)pushSubstepViewController:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isComplete;
- (void)goToNextStep;
- (void)didCompleteStep;
- (void)didPartiallyCompleteStep:(id)arg1;
- (void)didSkipStep;
- (void)didGoBack;
- (void)presentNUXFromViewController:(id)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 steps:(id)arg2 currentStepIndex:(unsigned int)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

