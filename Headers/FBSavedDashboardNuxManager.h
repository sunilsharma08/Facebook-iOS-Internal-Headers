//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNuxStepChainControllerDelegate-Protocol.h"

@class FBNuxController, FBUserSession, NSString;

@interface FBSavedDashboardNuxManager : NSObject <FBNuxStepChainControllerDelegate>
{
    FBUserSession *_session;
    FBNuxController *_nuxController;
}

- (void).cxx_destruct;
- (id)_buildInterstitialNux;
- (void)showSavedDashboardNuxIfRequired;
- (void)stepChainControllerDidEnd:(id)arg1;
- (id)init;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

