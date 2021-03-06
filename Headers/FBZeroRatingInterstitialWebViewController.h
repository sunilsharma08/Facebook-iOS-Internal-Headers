//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class FBWebView, NSString, NSURL;
@protocol FBZeroRatingInterstitialWebViewControllerDelegate;

@interface FBZeroRatingInterstitialWebViewController : UIViewController <UIWebViewDelegate>
{
    FBWebView *_webView;
    id <FBZeroRatingInterstitialWebViewControllerDelegate> _delegate;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <FBZeroRatingInterstitialWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_cancelUpsell;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)isNextStepURL:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)loadView;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

