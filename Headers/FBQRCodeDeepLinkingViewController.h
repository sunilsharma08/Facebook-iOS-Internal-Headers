//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBProviderMap, FBUserSession, NSString, UIActivityIndicatorView;

@interface FBQRCodeDeepLinkingViewController : UIViewController
{
    FBUserSession *_session;
    FBProviderMap *_providerMap;
    NSString *_qrcodeID;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)finishWithViewDismissal;
- (void)handleError:(id)arg1;
- (void)qrcodeDownloadResponseBlockHelper:(id)arg1 error:(id)arg2;
- (void)handleDownloadError:(id)arg1;
- (void)initSpinner;
- (void)sendGraphAPICallToRecordScanHistory;
- (void)decode;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2 andQRCodeID:(id)arg3;

@end

