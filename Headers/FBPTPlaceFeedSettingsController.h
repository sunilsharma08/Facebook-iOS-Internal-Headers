//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBLocationAccessManager, FBPTState, FBUserSession, UINavigationController;
@protocol FBLocationManagerSubscription, FBNavigationCoordinator, FBPTPlaceFeedSettingsControllerDelegate;

@interface FBPTPlaceFeedSettingsController : NSObject
{
    FBUserSession *_session;
    FBPTState *_placeTipState;
    id <FBNavigationCoordinator> _navigationCoordinator;
    UINavigationController *_blacklistNavigationViewController;
    id <FBLocationManagerSubscription> _locationManagerToken;
    FBLocationAccessManager *_locationAccessManager;
    id <FBPTPlaceFeedSettingsControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_removeFromBlacklist;
- (void)_addToBlacklist;
- (void)_uploadNegativeFeedback:(id)arg1;
- (void)_logNegativeFeedback:(id)arg1;
- (void)_presentBlacklistConfirmation:(id)arg1;
- (void)_presentBlacklistReasonPicker;
- (void)_presentBlacklistFeedbackPrompt;
- (CDUnknownBlockType)_blacklistCloseHandler;
- (void)didTapNotAtPlaceAction:(id)arg1;
- (void)didTapWhySeeingAction:(id)arg1;
- (void)didTapHidePlaceAction:(id)arg1;
- (id)settingsActions;
- (void)dealloc;
- (id)initWithSession:(id)arg1 placeTipState:(id)arg2 navigationCoordinator:(id)arg3 delegate:(id)arg4;

@end

