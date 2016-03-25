//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBPageTimelineHeaderLoggerListenerAnnouncer, NSMutableSet, NSSet, NSString;

@interface FBPageTimelineHeaderLogger : NSObject
{
    NSString *_extra;
    NSString *_analyticsUUID;
    NSString *_eventName;
    NSSet *_allPrerequisites;
    double _queryDownloadAge;
    NSString *_coverPhotoDownloadType;
    NSString *_profilePicDownloadType;
    NSMutableSet *_completedPrerequisites;
    FBPageTimelineHeaderLoggerListenerAnnouncer *_announcer;
    NSString *_wherePageWasLaunchedFrom;
    int _pageCountSinceColdStart;
}

+ (id)stringForDownloadType:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)_makeInfoExtras;
- (void)setProfilePicDownloadType:(unsigned int)arg1 analyticsUUID:(id)arg2;
- (void)setCoverPhotoDownloadType:(unsigned int)arg1 analyticsUUID:(id)arg2;
- (void)setQueryDownloadCachedAge:(double)arg1 analyticsUUID:(id)arg2;
- (void)setExtra:(id)arg1 analyticsUUID:(id)arg2;
- (void)setAnalyticsFromModule:(id)arg1 analyticsUUID:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)markDoneForPrerequisite:(id)arg1 analyticsUUID:(id)arg2;
- (void)markStopWithUnsuccessfulStatus:(id)arg1 analyticsUUID:(id)arg2;
- (void)markStartWithEventName:(id)arg1 fromExistingEvent:(id)arg2 analyticsUUID:(id)arg3 animationDuration:(double)arg4 prerequisites:(id)arg5;
- (void)_resetIvars;
- (id)init;

@end

