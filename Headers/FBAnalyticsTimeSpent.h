//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol FBAnalyticsTimeSpentDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FBAnalyticsTimeSpent : NSObject
{
    double _lastActive;
    double _startTime;
    int _tosArrayLengthInSeconds;
    int _sequenceID;
    int _tosCumulativeBitsSet;
    NSObject<OS_dispatch_queue> *_queue;
    double _unixTime;
    long _persistentUptime;
    int _tosArray[2];
    CDUnknownBlockType _timingBlock;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _isActiveTimer;
    NSString *_userFBID;
    BOOL _hasValidUserFBID;
    int _bucketForReportingActiveSeconds;
    BOOL _shouldComputeBucketForReportingActiveSeconds;
    id <FBAnalyticsTimeSpentDelegate> delegate;
    unsigned int _immediateActiveSecondsSamplingRate;
    double _lastForegroundTime;
}

@property(nonatomic) double lastForegroundTime; // @synthesize lastForegroundTime=_lastForegroundTime;
@property(nonatomic) unsigned int immediateActiveSecondsSamplingRate; // @synthesize immediateActiveSecondsSamplingRate=_immediateActiveSecondsSamplingRate;
@property(nonatomic) __weak id <FBAnalyticsTimeSpentDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_startTimer:(int)arg1;
- (void)_stopTimer;
- (void)_resetArray;
- (void)_setArrayStartTime:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long)arg3;
- (void)_doUpdate:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long)arg3;
- (id)_packageData;
- (BOOL)_tosArrayEmpty;
- (int)_calculateElapsedFromTime:(double)arg1;
- (void)_shipItWithSystemTime:(double)arg1 hasValidUserFBID:(BOOL)arg2;
- (void)reset;
- (void)save;
- (void)setUserFBID:(id)arg1;
- (BOOL)_existReportableActiveSecondsFromTime:(unsigned int)arg1 toTime:(unsigned int)arg2;
- (void)updateClientEvent:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3;
- (void)update:(double)arg1;
- (BOOL)_shouldReportCurrentActiveSecond:(double)arg1;
- (double)_currentUnixTime;
- (double)_currentSystemTime;
- (long)_currentPersistentUptime;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

