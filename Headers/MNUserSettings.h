//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"

@class FBTimeThrottler, NSMutableDictionary, NSNotificationCenter, NSString, NSUserDefaults;
@protocol MNAuthenticationManager, OS_dispatch_queue;

@interface MNUserSettings : NSObject <FBSessionClassProvidable>
{
    NSNotificationCenter *_notificationCenter;
    NSMutableDictionary *_userSettings;
    NSMutableDictionary *_userThreadSettings;
    NSObject<OS_dispatch_queue> *_saveQueue;
    FBTimeThrottler *_saveThrottler;
    BOOL _didLoadSettings;
    id <MNAuthenticationManager> _authManager;
    NSUserDefaults *_userDefaults;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) id <MNAuthenticationManager> authManager; // @synthesize authManager=_authManager;
- (void).cxx_destruct;
- (void)_performDelayedSaveSettings;
- (id)objectForKey:(id)arg1 threadFbId:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 threadFbId:(id)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)getCurrentUserSettings;
- (void)saveSettings;
- (void)loadSettings;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithAuthManager:(id)arg1 userDefaults:(id)arg2 notificationCenter:(id)arg3;
- (id)getShowAvailableToChatUserOverride;
- (void)setShowAvailableToChatUserOverride:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

