//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;
@protocol FBAnalyticsJavaScriptEvaluatorDelegate;

@interface FBAnalyticsJavaScriptEvaluator : NSObject <UIWebViewDelegate>
{
    UIWebView *_webView;
    id <FBAnalyticsJavaScriptEvaluatorDelegate> _delegate;
    NSString *_javaScriptToEvaluate;
}

@property(copy, nonatomic) NSString *javaScriptToEvaluate; // @synthesize javaScriptToEvaluate=_javaScriptToEvaluate;
@property(nonatomic) id <FBAnalyticsJavaScriptEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)stop;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 thenEvaluateJS:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

