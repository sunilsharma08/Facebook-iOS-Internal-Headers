//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppService-Protocol.h"
#import "FBBTLEStateListener-Protocol.h"

@class NSSet, NSString;

@interface FBActivityMonitorDeviceStatusService : NSObject <FBBTLEStateListener, FBAppService>
{
    id _btleStateSubscription;
}

- (void).cxx_destruct;
- (void)btleStateChanged:(id)arg1;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly) Class superclass;

@end

