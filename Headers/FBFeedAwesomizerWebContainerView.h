//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBFeedAwesomizerTopBarView, UIButton;

@interface FBFeedAwesomizerWebContainerView : UIView
{
    UIView *_contentView;
    FBFeedAwesomizerTopBarView *_topBarView;
    UIView *_loadingView;
    UIView *_webView;
    BOOL _isLoading;
    UIButton *_closeButton;
}

@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 themeColor:(id)arg2 isModal:(BOOL)arg3 webView:(id)arg4;

@end

