//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBNotificationsSyncManagerExperimentContext : FBExperimentContext
{
    BOOL _isBackgroundFetchingEnabled;
    BOOL _isStoryPrefetchingEnabled;
    BOOL _isNotificationListRefreshingEnabled;
    BOOL _enableLiteQuery;
    BOOL _disableDeltaUpdatesForBackgroundFetch;
    BOOL _disableDeltaUpdatesForPTR;
    BOOL _disableDeltaUpdatesForIdle;
    BOOL _disableDeltaUpdatesForMQTT;
    BOOL _disableDeltaUpdatesForForegrounding;
    BOOL _disableDeltaUpdatesForSilentPush;
    BOOL _disableDeltaUpdatesForTailLoad;
    BOOL _enableReadnessQuery;
    int _maxWakeUpsPerBackground;
    int _secondsBeforeStaleness;
    double _deltaSyncInterval;
    double _maxPTRDeltaInterval;
    double _wakeUpInterval;
    double _backgroundFetchInterval;
    double _minBackgroundFetchInterval;
    double _maxBackgroundFetchInterval;
    double _backgroundFetchIntervalStep;
}

+ (BOOL)shouldUseReadnessManagerForLoadDataReason:(int)arg1 withSession:(id)arg2;
+ (BOOL)shouldDisableDeltaUpdatesForLoadDataReason:(int)arg1 withSession:(id)arg2;
+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL enableReadnessQuery; // @synthesize enableReadnessQuery=_enableReadnessQuery;
@property(readonly, nonatomic) BOOL disableDeltaUpdatesForTailLoad; // @synthesize disableDeltaUpdatesForTailLoad=_disableDeltaUpdatesForTailLoad;
@property(readonly, nonatomic) BOOL disableDeltaUpdatesForSilentPush; // @synthesize disableDeltaUpdatesForSilentPush=_disableDeltaUpdatesForSilentPush;
@property(readonly, nonatomic) BOOL disableDeltaUpdatesForForegrounding; // @synthesize disableDeltaUpdatesForForegrounding=_disableDeltaUpdatesForForegrounding;
@property(readonly, nonatomic) BOOL disableDeltaUpdatesForMQTT; // @synthesize disableDeltaUpdatesForMQTT=_disableDeltaUpdatesForMQTT;
@property(readonly, nonatomic) BOOL disableDeltaUpdatesForIdle; // @synthesize disableDeltaUpdatesForIdle=_disableDeltaUpdatesForIdle;
@property(readonly, nonatomic) BOOL disableDeltaUpdatesForPTR; // @synthesize disableDeltaUpdatesForPTR=_disableDeltaUpdatesForPTR;
@property(readonly, nonatomic) BOOL disableDeltaUpdatesForBackgroundFetch; // @synthesize disableDeltaUpdatesForBackgroundFetch=_disableDeltaUpdatesForBackgroundFetch;
@property(readonly, nonatomic) BOOL enableLiteQuery; // @synthesize enableLiteQuery=_enableLiteQuery;
@property(readonly, nonatomic) int secondsBeforeStaleness; // @synthesize secondsBeforeStaleness=_secondsBeforeStaleness;
@property(readonly, nonatomic) BOOL isNotificationListRefreshingEnabled; // @synthesize isNotificationListRefreshingEnabled=_isNotificationListRefreshingEnabled;
@property(readonly, nonatomic) BOOL isStoryPrefetchingEnabled; // @synthesize isStoryPrefetchingEnabled=_isStoryPrefetchingEnabled;
@property(readonly, nonatomic) BOOL isBackgroundFetchingEnabled; // @synthesize isBackgroundFetchingEnabled=_isBackgroundFetchingEnabled;
@property(readonly, nonatomic) double backgroundFetchIntervalStep; // @synthesize backgroundFetchIntervalStep=_backgroundFetchIntervalStep;
@property(readonly, nonatomic) double maxBackgroundFetchInterval; // @synthesize maxBackgroundFetchInterval=_maxBackgroundFetchInterval;
@property(readonly, nonatomic) double minBackgroundFetchInterval; // @synthesize minBackgroundFetchInterval=_minBackgroundFetchInterval;
@property(readonly, nonatomic) double backgroundFetchInterval; // @synthesize backgroundFetchInterval=_backgroundFetchInterval;
@property(nonatomic) double wakeUpInterval; // @synthesize wakeUpInterval=_wakeUpInterval;
@property(readonly, nonatomic) int maxWakeUpsPerBackground; // @synthesize maxWakeUpsPerBackground=_maxWakeUpsPerBackground;
@property(readonly, nonatomic) double maxPTRDeltaInterval; // @synthesize maxPTRDeltaInterval=_maxPTRDeltaInterval;
@property(readonly, nonatomic) double deltaSyncInterval; // @synthesize deltaSyncInterval=_deltaSyncInterval;

@end

