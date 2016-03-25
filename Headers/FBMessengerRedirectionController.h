//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBClassProvidable-Protocol.h"

@class FBMessengerInterstitialController, NSString;
@protocol FBMessengerPromotionProperties;

@interface FBMessengerRedirectionController : NSObject <FBClassProvidable>
{
    FBMessengerInterstitialController *_interstitialController;
    id <FBMessengerPromotionProperties> _promotionProperties;
}

- (void).cxx_destruct;
- (void)redirectToMessengerFromLocation:(int)arg1;
- (BOOL)shouldRedirectToMessenger;
- (BOOL)shouldPromptMessengerInstall;
- (id)initWithInterstitialController:(id)arg1 promotionProperties:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

