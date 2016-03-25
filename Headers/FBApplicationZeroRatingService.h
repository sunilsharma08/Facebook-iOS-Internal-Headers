//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppService-Protocol.h"

@class FBUserSession, FBZeroRatedNetworkActivityCoordinator, NSSet, NSString, ZRApplicationState, ZRBannerDataCache, ZRHeaderRequestCoordinator, ZRTokenRefreshCoordinator;

@interface FBApplicationZeroRatingService : NSObject <FBAppService>
{
    FBUserSession *_session;
    ZRApplicationState *_zrApplicationState;
    ZRTokenRefreshCoordinator *_zrTokenRefreshCoordinator;
    FBZeroRatedNetworkActivityCoordinator *_zrNetworkActivityCoordinator;
    ZRBannerDataCache *_zrBannerDataCache;
    ZRHeaderRequestCoordinator *_zrHeaderRequestCoordinator;
}

@property(retain, nonatomic) ZRHeaderRequestCoordinator *zrHeaderRequestCoordinator; // @synthesize zrHeaderRequestCoordinator=_zrHeaderRequestCoordinator;
@property(retain, nonatomic) ZRBannerDataCache *zrBannerDataCache; // @synthesize zrBannerDataCache=_zrBannerDataCache;
@property(retain, nonatomic) FBZeroRatedNetworkActivityCoordinator *zrNetworkActivityCoordinator; // @synthesize zrNetworkActivityCoordinator=_zrNetworkActivityCoordinator;
@property(retain, nonatomic) ZRTokenRefreshCoordinator *zrTokenRefreshCoordinator; // @synthesize zrTokenRefreshCoordinator=_zrTokenRefreshCoordinator;
@property(retain, nonatomic) ZRApplicationState *zrApplicationState; // @synthesize zrApplicationState=_zrApplicationState;
- (void).cxx_destruct;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)signalAppServiceToHandleInitialSessionIdle;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly) Class superclass;

@end

