//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"

@class MNActiveParticipantSet, MNLastActivityLogger, MNMQTTPresenceSubscriptionMonitor, MNPresenceCache, MNPresenceSubscriptionUpdateListenerCoordinator, MNSyncPresenceTracker, NSString;

@interface MNPresenceSubscriptionService : NSObject <FBSessionClassProvidable>
{
    MNActiveParticipantSet *_activeParticipantSet;
    MNMQTTPresenceSubscriptionMonitor *_presenceSubscriptionMonitor;
    MNPresenceSubscriptionUpdateListenerCoordinator *_updateListenerCoordinator;
    MNSyncPresenceTracker *_syncPresenceTracker;
    MNPresenceCache *_presenceCache;
    MNLastActivityLogger *_lastActivityLogger;
}

- (void).cxx_destruct;
- (id)onlineUserIds;
- (void)startWithLastActiveTrackers:(id)arg1 presenceUpdater:(id)arg2;
- (void)removeAllPresenceUpdateSubscriptionsForListener:(id)arg1;
- (void)removePresenceUpdateListenerForAllPeople:(id)arg1;
- (void)addPresenceUpdateListenerForAllPeople:(id)arg1;
- (void)removePresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2;
- (void)addPresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithActiveParticipantSet:(id)arg1 analytics:(id)arg2 application:(id)arg3 notificationCenter:(id)arg4 presenceCache:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

