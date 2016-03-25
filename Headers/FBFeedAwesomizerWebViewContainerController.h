//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBWebViewControllerDelegate-Protocol.h"

@class FBFeedAwesomizerWebContainerView, FBWebViewController, NSString, UIView;

@interface FBFeedAwesomizerWebViewContainerController : UIViewController <FBWebViewControllerDelegate>
{
    UIView *_loadingView;
    FBWebViewController *_webViewController;
    FBFeedAwesomizerWebContainerView *_webContainerView;
    BOOL _isModal;
    CDUnknownBlockType _closeBlock;
    BOOL _statusBarHiddenBeforePresentation;
    int _statusBarStyleBeforePresentation;
}

- (void).cxx_destruct;
- (void)didTapCloseButton:(id)arg1;
- (void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2;
- (void)webViewController:(id)arg1 didStartLoadURL:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)loadURL:(id)arg1;
- (id)initWithSession:(id)arg1 title:(id)arg2 themeColor:(id)arg3 isModal:(BOOL)arg4 closeBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

