//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNewAccountNUXControllerDelegate-Protocol.h"
#import "FBNuxPresenter-Protocol.h"

@class FBNewAccountNUXController, FBNewAccountNUXInterstitialContext, FBUserSession, NSDictionary, NSString;
@protocol FBNuxDelegate;

@interface FBNewAccountNUXInterstitialController : NSObject <FBNewAccountNUXControllerDelegate, FBNuxPresenter>
{
    FBUserSession *_session;
    id <FBNuxDelegate> _nuxCoordinator;
    FBNewAccountNUXInterstitialContext *_context;
    FBNewAccountNUXController *_nuxController;
}

@property(retain, nonatomic) FBNewAccountNUXController *nuxController; // @synthesize nuxController=_nuxController;
@property(retain, nonatomic) FBNewAccountNUXInterstitialContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <FBNuxDelegate> nuxCoordinator; // @synthesize nuxCoordinator=_nuxCoordinator;
- (void).cxx_destruct;
- (void)didCompleteNewAccountNUXController:(id)arg1;
- (unsigned int)presenterOptions;
- (int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2;
- (id)viewControllerForPresentation;
- (void)prepareWithServerContext:(id)arg1;
@property(readonly, nonatomic) int nuxType;
- (id)triggerIDs;
- (Class)serverContextClass;
- (id)nuxID;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *extraLogData;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *nuxAnalyticsModule;
@property(copy, nonatomic) CDUnknownBlockType onClosedBlock;
@property(readonly) Class superclass;

@end

