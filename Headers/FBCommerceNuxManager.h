//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNuxStepChainControllerDelegate-Protocol.h"

@class FBUserSession, NSString;
@protocol FBCommerceProductSaveButtonNuxViewControllerDelegate;

@interface FBCommerceNuxManager : NSObject <FBNuxStepChainControllerDelegate>
{
    FBUserSession *_session;
    id <FBCommerceProductSaveButtonNuxViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_buildInterstitialNux;
- (void)_buildProductSaveButtonAppearToolTipOver:(id)arg1;
- (void)showProductSaveButtonAppearToolTipIfRequiredOver:(id)arg1;
- (void)showProductSavedNuxIfRequired;
- (void)stepChainControllerDidEnd:(id)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

