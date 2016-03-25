//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentHostingViewDelegate-Protocol.h"
#import "FBPrivacyCheckupViewControllerDelegate-Protocol.h"

@class CKComponentHostingView, FBPrivacyCheckupViewController, FBUserSession, NSString, UIScrollView;

@interface FBPrivacyCheckupInterstitialViewController : UIViewController <CKComponentHostingViewDelegate, FBPrivacyCheckupViewControllerDelegate>
{
    CKComponentHostingView *_hostingView;
    FBUserSession *_session;
    FBPrivacyCheckupViewController *_privacyCheckupViewController;
    BOOL _showingConfirmationView;
    NSString *_source;
    UIScrollView *_scrollView;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)didTapDoneButton:(id)arg1;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapContinueButton:(id)arg1;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)privacyCheckupViewControllerDidTapDone:(id)arg1;
- (void)privacyCheckupViewControllerDidTapCancel:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)_appWillResign;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 forSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

