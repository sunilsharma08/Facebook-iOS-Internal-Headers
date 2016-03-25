//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ZRFenceBase.h"

#import "FBZeroRatingInterstitialWebViewControllerDelegate-Protocol.h"

@class NSString, NSURL, ZRApplicationState;
@protocol FBZeroRatingFenceNavigationDelegate;

@interface FBZeroRatingWebViewFence : ZRFenceBase <FBZeroRatingInterstitialWebViewControllerDelegate>
{
    ZRApplicationState *_zeroRatingState;
    NSURL *_url;
    id <FBZeroRatingFenceNavigationDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)upsellInterstitial:(id)arg1 exitedSuccessfully:(BOOL)arg2;
- (void)show;
- (id)initWithZeroRatingState:(id)arg1 session:(id)arg2 url:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

