//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBIntentHandler-Protocol.h"

@class FBFallbackIntentHandler, FBGoodwillCampaignComposerController, FBUserSession, NSString;
@protocol FBNavigationCoordinator;

@interface FBGoodwillIntentHandler : NSObject <FBIntentHandler>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBUserSession *_session;
    FBFallbackIntentHandler *_fallbackHandler;
    FBGoodwillCampaignComposerController *_composerController;
}

- (void).cxx_destruct;
- (void)handleIntent:(id)arg1;
- (id)initWithNavigationCoordinator:(id)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

