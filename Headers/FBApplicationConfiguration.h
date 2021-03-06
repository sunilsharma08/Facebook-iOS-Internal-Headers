//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBApplicationModulesConfiguration;

@interface FBApplicationConfiguration : NSObject
{
    BOOL _allowDelayingServices;
    BOOL _shouldUseInterstitialPushRegistration;
    CDUnknownBlockType _shoeboxSyncServiceIsEnabled;
    Class _appSessionControllerClass;
    CDUnknownBlockType _messengerProviderModule;
    CDUnknownBlockType _additionalCanOpenURLCheck;
    unsigned int _simpleSearchFilterType;
    unsigned int _jewelBadgeFilterType;
    FBApplicationModulesConfiguration *_applicationModulesConfiguration;
    CDUnknownBlockType _beforeBootingApplication;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType beforeBootingApplication; // @synthesize beforeBootingApplication=_beforeBootingApplication;
@property(readonly, nonatomic) FBApplicationModulesConfiguration *applicationModulesConfiguration; // @synthesize applicationModulesConfiguration=_applicationModulesConfiguration;
@property(readonly, nonatomic) unsigned int jewelBadgeFilterType; // @synthesize jewelBadgeFilterType=_jewelBadgeFilterType;
@property(readonly, nonatomic) unsigned int simpleSearchFilterType; // @synthesize simpleSearchFilterType=_simpleSearchFilterType;
@property(readonly, copy, nonatomic) CDUnknownBlockType additionalCanOpenURLCheck; // @synthesize additionalCanOpenURLCheck=_additionalCanOpenURLCheck;
@property(readonly, nonatomic) CDUnknownBlockType messengerProviderModule; // @synthesize messengerProviderModule=_messengerProviderModule;
@property(readonly, nonatomic) Class appSessionControllerClass; // @synthesize appSessionControllerClass=_appSessionControllerClass;
@property(readonly, copy, nonatomic) CDUnknownBlockType shoeboxSyncServiceIsEnabled; // @synthesize shoeboxSyncServiceIsEnabled=_shoeboxSyncServiceIsEnabled;
@property(readonly, nonatomic) BOOL shouldUseInterstitialPushRegistration; // @synthesize shouldUseInterstitialPushRegistration=_shouldUseInterstitialPushRegistration;
@property(readonly, nonatomic) BOOL allowDelayingServices; // @synthesize allowDelayingServices=_allowDelayingServices;
- (void).cxx_destruct;
- (id)initWithAllowDelayingServices:(BOOL)arg1 shouldUseInterstitialPushRegistration:(BOOL)arg2 shoeboxSyncServiceIsEnabled:(CDUnknownBlockType)arg3 appSessionControllerClass:(Class)arg4 messengerProviderModule:(CDUnknownBlockType)arg5 additionalCanOpenURLCheck:(CDUnknownBlockType)arg6 navigationBarSimpleSearchFilterType:(unsigned int)arg7 jewelBadgeFilterType:(unsigned int)arg8 applicationModulesConfiguration:(id)arg9 beforeBootingApplication:(CDUnknownBlockType)arg10;
- (id)init;

@end

