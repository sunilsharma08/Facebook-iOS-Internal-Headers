//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReachabilityListener-Protocol.h"

@class FBReachabilityAnnouncer, FBUserSession, NSMutableDictionary, NSSet, NSString;
@protocol FBNuxAppEventManagerDataSource;

@interface FBNuxAppEventManager : NSObject <FBReachabilityListener>
{
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    FBUserSession *_session;
    id <FBNuxAppEventManagerDataSource> _dataSource;
    NSSet *_supportedEvents;
    NSMutableDictionary *_lastEventTime;
}

+ (void)postAppEvent:(id)arg1 withContext:(id)arg2;
+ (void)postAppEvent:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(copy, nonatomic) NSSet *supportedEvents; // @synthesize supportedEvents=_supportedEvents;
@property(readonly, nonatomic) id <FBNuxAppEventManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (id)_contextForNotification:(id)arg1;
- (id)_eventNameForNotification:(id)arg1;
- (void)_handleEvent:(id)arg1 withContext:(id)arg2;
- (void)_processNotification:(id)arg1;
- (id)_allNuxAppEvents;
- (void)logAppEvent:(id)arg1;
- (void)postAppEventForTabBarItemSelectedWithBookmarkID:(id)arg1;
- (id)lastOccurrenceTimeForEvent:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 reachabilityAnnouncer:(id)arg2 dataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

