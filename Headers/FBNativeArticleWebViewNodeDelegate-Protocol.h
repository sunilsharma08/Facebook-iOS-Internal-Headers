//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNativeArticleWebViewNode, NSError, NSURLRequest, UIScrollView;

@protocol FBNativeArticleWebViewNodeDelegate <NSObject>

@optional
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 didUpdateContentSize:(struct CGSize)arg2;
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 didUpdateProgress:(float)arg2;
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 didFinishNavigationRequest:(NSURLRequest *)arg2;
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 didFailNavigationRequest:(NSURLRequest *)arg2 withError:(NSError *)arg3;
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 didStartNavigationRequest:(NSURLRequest *)arg2;
- (BOOL)webViewNode:(FBNativeArticleWebViewNode *)arg1 shouldStartNavigationRequest:(NSURLRequest *)arg2 navigationType:(int)arg3;
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 scrollViewWillEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)webViewNode:(FBNativeArticleWebViewNode *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
@end

