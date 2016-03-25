//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBModalDialogViewDelegate-Protocol.h"

@class FBCrowdsourcingPageContextSubtextView, FBFullscreenSpinnerController, FBModalDialogViewController, FBUserSession, NSString, UIWindow;
@protocol FBCrowdsourcingPageContextRowHandlerDelegate, FBServiceTransactionMutating;

@interface FBCrowdsourcingPageContextRowHandler : NSObject <FBModalDialogViewDelegate>
{
    FBModalDialogViewController *_modalDialogViewController;
    UIWindow *_window;
    id <FBServiceTransactionMutating> _token;
    FBUserSession *_session;
    NSString *_placeID;
    NSString *_contextItemType;
    FBCrowdsourcingPageContextSubtextView *_customView;
    NSString *_questionID;
    NSString *_primaryButtonAnswerValue;
    NSString *_secondaryButtonAnswerValue;
    NSString *_tertiaryButtonAnswerValue;
    FBFullscreenSpinnerController *_spinnerController;
    id <FBCrowdsourcingPageContextRowHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCrowdsourcingPageContextRowHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_answerWithAnswerValue:(id)arg1;
- (void)_handlePlaceQuestions:(id)arg1;
- (void)modalDialogView:(id)arg1 didSelectTertiaryButton:(id)arg2;
- (void)modalDialogView:(id)arg1 didSelectSecondaryButton:(id)arg2;
- (void)modalDialogView:(id)arg1 didSelectPrimaryButton:(id)arg2;
- (void)handlePageVotingContextRowWithPlaceID:(id)arg1 fieldType:(id)arg2 contextItemType:(id)arg3 window:(id)arg4;
- (void)dealloc;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

