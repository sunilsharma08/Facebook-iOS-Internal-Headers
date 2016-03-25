//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppService-Protocol.h"

@class FBDelayServicesOnColdStartExperimentContext, FBLocationAccessManager, FBPlacePickerPrefetchController, FBUserSession, NSSet, NSString;

@interface FBPlacePickerPrefetchService : NSObject <FBAppService>
{
    FBPlacePickerPrefetchController *_checkinPrefetchController;
    FBLocationAccessManager *_locationAccessManager;
    FBDelayServicesOnColdStartExperimentContext *_delayServiceOnColdStartExperimentContext;
    FBUserSession *_session;
}

@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (void)dealloc;
- (void)_prefetchPlacePickerResults;
- (void)_didFinishEnteringForegroundAndIsNowIdle;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

