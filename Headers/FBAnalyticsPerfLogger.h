//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBReachabilityAnnouncer, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FBAnalyticsPerfLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _logResmemEnabled;
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    NSMutableDictionary *_pendingPerfEvents;
}

+ (id)sharedPerfLogger;
@property(retain, nonatomic) NSMutableDictionary *pendingPerfEvents; // @synthesize pendingPerfEvents=_pendingPerfEvents;
- (void).cxx_destruct;
- (void)waitForQueue;
- (void)onCTScanWillExit;
- (void)onCTScanDidTriggerAppEventLogging;
- (id)sequenceIdForEvent:(id)arg1 nameSpace:(id)arg2;
- (id)generateSequenceId;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)setContext:(id)arg1 forEvent:(id)arg2 nameSpace:(id)arg3;
- (id)contextForEvent:(id)arg1 nameSpace:(id)arg2;
- (BOOL)hasPendingEvent:(id)arg1 nameSpace:(id)arg2;
- (void)addToPendingPerfEventsEventName:(id)arg1 nameSpace:(id)arg2 timeStamp:(double)arg3 residentMemory:(unsigned long long)arg4;
- (double)currentTimeStamp;
- (void)setLogResmemEnabled:(BOOL)arg1;
- (void)_cleanUpNameSpaceIfNeeded:(id)arg1;
- (void)setTimeMarker:(id)arg1 atTime:(double)arg2 forEvent:(id)arg3 nameSpace:(id)arg4;
- (void)setTimeMarker:(id)arg1 atTime:(double)arg2 forEvent:(id)arg3;
- (void)setTimeMarker:(id)arg1 forEvent:(id)arg2 nameSpace:(id)arg3;
- (void)setTimeMarker:(id)arg1 forEvent:(id)arg2;
- (void)setTimeMarker:(id)arg1 forEvents:(id)arg2;
- (void)setExtrasSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setExtrasForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setExtrasForEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markScopedForEvent:(id)arg1 nameSpace:(id)arg2 onQueue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)markScopedForEvent:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)markScopedForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)markScopedForEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markCancelSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2;
- (void)markCancelForEvent:(id)arg1 nameSpace:(id)arg2;
- (void)markCancelForEvent:(id)arg1;
- (void)logEvent:(id)arg1 module:(id)arg2 timeInterval:(double)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)logEvent:(id)arg1 timeInterval:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)markStopSynchronouslyForEvent:(id)arg1 module:(id)arg2 nameSpace:(id)arg3 stopTime:(double)arg4 stopResidentMemory:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (void)markStopForEvent:(id)arg1 atTime:(double)arg2 nameSpace:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)markStopForEvent:(id)arg1 nameSpace:(id)arg2;
- (void)markStopForEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markStopForEvent:(id)arg1;
- (void)markStartSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 startTime:(double)arg3 startResidentMemory:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)markStartForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)markStartForEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markStartForEvent:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithReachabilityAnnouncer:(id)arg1;
- (id)init;
- (CDUnknownBlockType)_wrapperBlockForContext:(id)arg1 tti:(double)arg2;
- (id)nonClosedPerfEventsForBugReporting;
- (void)syncPerfLoggerQueueInCTScan;
- (void)logTotalSize:(int)arg1 forClass:(id)arg2;
- (void)logPersistedObjects:(int)arg1 forClass:(id)arg2;
- (void)logResidentMemoryEvent:(id)arg1;
- (void)logEvent:(id)arg1 residentMemoryCount:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_copyExtrasFromSourceEvent:(id)arg1 sourceNameSpace:(id)arg2 toDestinationEvent:(id)arg3 destinationNameSpace:(id)arg4;
- (unsigned long long)_residentMemoryForPendingEvent:(id)arg1 nameSpace:(id)arg2;
- (double)_startTimeForPendingEvent:(id)arg1 nameSpace:(id)arg2;
- (void)renameExistingEvent:(id)arg1 toNewEventNamed:(id)arg2 nameSpace:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 fromExistingEvent:(id)arg3 existingNameSpace:(id)arg4 copyExtras:(BOOL)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (void)markStopForEvent:(id)arg1 fromExistingEvent:(id)arg2 nameSpace:(id)arg3 copyExtras:(BOOL)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)markStartForEvent:(id)arg1 nameSpace:(id)arg2 fromExistingEvent:(id)arg3 existingNameSpace:(id)arg4 copyExtras:(BOOL)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (void)markStartForEvent:(id)arg1 fromExistingEvent:(id)arg2 nameSpace:(id)arg3 copyExtras:(BOOL)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)markCancelForEvents:(id)arg1 nameSpace:(id)arg2;
- (void)setExtrasForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)markStopForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)markStartForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end

