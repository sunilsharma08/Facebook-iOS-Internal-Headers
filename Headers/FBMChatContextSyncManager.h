//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMessengerSyncEngineManager, NSTimer;

@interface FBMChatContextSyncManager : NSObject
{
    BOOL _isPeriodicalSyncing;
    BOOL _isObservingNotifications;
    FBMessengerSyncEngineManager *_syncEngineManager;
    NSTimer *_periodicalSyncingTimer;
}

@property(nonatomic) BOOL isObservingNotifications; // @synthesize isObservingNotifications=_isObservingNotifications;
@property(nonatomic) BOOL isPeriodicalSyncing; // @synthesize isPeriodicalSyncing=_isPeriodicalSyncing;
@property(retain, nonatomic) NSTimer *periodicalSyncingTimer; // @synthesize periodicalSyncingTimer=_periodicalSyncingTimer;
@property(retain, nonatomic) FBMessengerSyncEngineManager *syncEngineManager; // @synthesize syncEngineManager=_syncEngineManager;
- (void)_onApplicationForeground;
- (void)_onApplicationBackground;
- (void)_onLocationChanged;
- (void)_periodicalTimerDidFire:(id)arg1;
- (void)_stopPeriodicalTimer;
- (void)_startPeriodicalTimer;
- (void)_stopObservingNotifications;
- (void)_startObservingNotifications;
- (void)_cancelSync;
- (void)_sync;
- (void)stopPeriodicalSyncingChatContext;
- (void)startPeriodicalSyncingChatContext;
- (void)dealloc;
- (id)initWithSyncEngineManager:(id)arg1;
- (id)init;

@end

