//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReachabilityMonitorDelegate-Protocol.h"
#import "FBReachabilityQualityMonitorDelegate-Protocol.h"

@class FBReachabilityListenerAnnouncer, FBReachabilityMonitor, FBReachabilityQualityMonitor, NSNotificationCenter, NSString;
@protocol FBReachabilityQualityAnalyticsLogger, FBReachabilityQualityDelegate, OS_dispatch_queue;

@interface FBReachabilityAnnouncer : NSObject <FBReachabilityMonitorDelegate, FBReachabilityQualityMonitorDelegate>
{
    unsigned int _currentReachabilityState;
    unsigned int _previousReachabilityState;
    unsigned int _currentDownloadBandwidthState;
    unsigned int _previousDownloadBandwidthState;
    unsigned int _currentUploadBandwidthState;
    unsigned int _previousUploadBandwidthState;
    unsigned int _currentLatencyState;
    unsigned int _previousLatencyState;
    FBReachabilityMonitor *_ipv4ReachabilityMonitor;
    FBReachabilityMonitor *_ipv6ReachabilityMonitor;
    FBReachabilityQualityMonitor *_qualityMonitor;
    FBReachabilityListenerAnnouncer *_codeGenAnnouncer;
    NSNotificationCenter *_notificationCenter;
    BOOL _backgrounded;
    id <FBReachabilityQualityAnalyticsLogger> _analyticsQualityLogger;
    BOOL _logNextDownloadBandwidthMeasurement;
    BOOL _logNextUploadBandwidthMeasurement;
    BOOL _logNextLatencyMeasurement;
    NSObject<OS_dispatch_queue> *_targetQueue;
    struct mutex _reachabilityLock;
    struct mutex _qualityLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <FBReachabilityQualityAnalyticsLogger> analyticsQualityLogger; // @synthesize analyticsQualityLogger=_analyticsQualityLogger;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)latencyEstimateChanged:(double)arg1 isFallback:(BOOL)arg2;
- (void)uploadBandwidthEstimateChanged:(double)arg1 isFallback:(BOOL)arg2;
- (void)downloadBandwidthEstimateChanged:(double)arg1 isFallback:(BOOL)arg2;
- (void)reachabilityStateChanged;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) id <FBReachabilityQualityDelegate> qualityDelegate;
@property(readonly, nonatomic) unsigned int currentLatencyState;
@property(readonly, nonatomic) double currentLatencyEstimate;
@property(readonly, nonatomic) unsigned int currentUploadBandwidthState;
@property(readonly, nonatomic) double currentUploadBandwidthEstimate;
@property(readonly, nonatomic) unsigned int currentDownloadBandwidthState;
@property(readonly, nonatomic) double currentDownloadBandwidthEstimate;
@property(readonly, nonatomic) unsigned int currentReachabilityState;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (void)dealloc;
- (id)initWithCodeGenAnnouncer:(id)arg1 targetQueue:(id)arg2 ipv4ReachabilityMonitorFactory:(CDUnknownBlockType)arg3 ipv6ReachabilityMonitorFactory:(CDUnknownBlockType)arg4 qualityMonitorFactory:(CDUnknownBlockType)arg5 notificationCenter:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

