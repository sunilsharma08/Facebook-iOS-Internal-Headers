//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNativeAppModule.h"

#import "FBAppService-Protocol.h"
#import "FBReactAppModule-Protocol.h"

@class FBExceptionHandler, FBReactEarlyBridgeBootExperimentContext, NSSet, NSString, RCTAsyncLocalStorage, RCTBridge;

@interface FBReactModule : FBNativeAppModule <FBAppService, FBReactAppModule>
{
    int _bridgeInitializationCount;
    RCTBridge *_bridge;
    RCTBridge *_permanentBridge;
    FBReactEarlyBridgeBootExperimentContext *_earlyBootExperiment;
    RCTAsyncLocalStorage *_storageModule;
}

+ (id)moduleForSession:(id)arg1;
@property(nonatomic) __weak RCTAsyncLocalStorage *storageModule; // @synthesize storageModule=_storageModule;
@property(retain, nonatomic) FBReactEarlyBridgeBootExperimentContext *earlyBootExperiment; // @synthesize earlyBootExperiment=_earlyBootExperiment;
@property(retain, nonatomic) RCTBridge *permanentBridge; // @synthesize permanentBridge=_permanentBridge;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (id)services;
- (id)bridgedModules;
- (void)cleanupSession;
- (id)viewControllerForModuleName:(id)arg1 initialProperties:(id)arg2 onViewDidDisappear:(CDUnknownBlockType)arg3;
- (id)viewControllerForModuleName:(id)arg1 initialProperties:(id)arg2;
- (id)ID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FBExceptionHandler *exceptionHandler;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

