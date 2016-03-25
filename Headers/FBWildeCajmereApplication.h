//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBBaseApplication-Protocol.h"
#import "FBStartupPipelineProviding-Protocol.h"

@class FBDependencyManager, NSString;

@interface FBWildeCajmereApplication : NSObject <FBBaseApplication, FBStartupPipelineProviding>
{
    FBDependencyManager *_dependencyManager;
}

- (void).cxx_destruct;
- (BOOL)appDelegate:(id)arg1 application:(id)arg2 continueUserActivity:(id)arg3;
- (BOOL)appDelegate:(id)arg1 application:(id)arg2 willContinueUserActivityWithType:(id)arg3;
- (BOOL)appDelegate:(id)arg1 application:(id)arg2 openURL:(id)arg3 sourceApplication:(id)arg4 annotation:(id)arg5;
- (void)appDelegate:(id)arg1 applicationWillTerminate:(id)arg2;
- (void)appDelegate:(id)arg1 applicationWillEnterForeground:(id)arg2;
- (void)appDelegate:(id)arg1 applicationDidEnterBackground:(id)arg2;
- (void)appDelegate:(id)arg1 applicationWillResignActive:(id)arg2;
- (void)appDelegate:(id)arg1 applicationDidBecomeActive:(id)arg2;
- (Pipe_1e244a60)appDelegate:(id)arg1 startupPipelineForApplication:(id)arg2 withLaunchOptions:(id)arg3;
- (void)appDelegate:(id)arg1 application:(id)arg2 didFinishLaunchingWithOptions:(id)arg3;
- (void)appDelegate:(id)arg1 application:(id)arg2 didReceiveRemoteNotification:(id)arg3;
- (void)appDelegate:(id)arg1 application:(id)arg2 didReceiveLocalNotification:(id)arg3;
- (void)appDelegate:(id)arg1 application:(id)arg2 didFailToRegisterForRemoteNotificationsWithError:(id)arg3;
- (void)appDelegate:(id)arg1 application:(id)arg2 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg3;
- (void)appDelegate:(id)arg1 application:(id)arg2 didRegisterUserNotificationSettings:(id)arg3;
- (void)appDelegate:(id)arg1 application:(id)arg2 willFinishLaunchingWithOptions:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithExceptionHandler:(id)arg1 rootWindow:(id)arg2 dependencyManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

