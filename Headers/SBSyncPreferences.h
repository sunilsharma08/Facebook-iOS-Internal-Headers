//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBInvalidating-Protocol.h"

@class FBUserPreferences, FBUserSession, NSMutableArray, NSString, SBVaultDevice;

@interface SBSyncPreferences : NSObject <FBInvalidating>
{
    BOOL _requiresUpdateToServer;
    FBUserSession *_session;
    BOOL _invalidated;
    FBUserPreferences *_preferences;
    SBVaultDevice *_device;
    BOOL _flyoutNuxCompleted;
    id _uploadHiResOnWifiOnly;
    float _minBatteryLevelThreshold;
    float _minPluggedInBatteryLevelThreshold;
    int _hiResImageSize;
    int _maxImageSize;
    NSMutableArray *_updateRequests;
}

@property(retain, nonatomic) NSMutableArray *updateRequests; // @synthesize updateRequests=_updateRequests;
- (void).cxx_destruct;
- (void)upgradePreferencesIfNecessary;
- (void)setAtleastOneUserHadEnabledShoeboxBefore;
@property(readonly, nonatomic) BOOL atleastOneUserHadEnabledShoeboxBefore;
- (void)_sendAnotherUpdateIfNeeded;
- (void)_sendUpdateRequest;
- (void)_persistVaultDeviceState:(BOOL)arg1;
@property BOOL syncOlderPhotos;
@property BOOL syncOverWiFiAndWWAN;
@property BOOL completedNUX;
@property BOOL enabled;
@property(retain) SBVaultDevice *device;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)initWithSession:(id)arg1;
@property int maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property int hiResImageSize; // @synthesize hiResImageSize=_hiResImageSize;
@property float minPluggedInBatteryLevelThreshold; // @synthesize minPluggedInBatteryLevelThreshold=_minPluggedInBatteryLevelThreshold;
@property float minBatteryLevelThreshold; // @synthesize minBatteryLevelThreshold=_minBatteryLevelThreshold;
@property(retain) id uploadHiResOnWifiOnly; // @synthesize uploadHiResOnWifiOnly=_uploadHiResOnWifiOnly;
@property BOOL flyoutNuxCompleted; // @synthesize flyoutNuxCompleted=_flyoutNuxCompleted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

