//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSDictionary, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTPushNotificationManager : NSObject <RCTBridgeModule>
{
    NSDictionary *_initialNotification;
    RCTBridge *_bridge;
}

+ (id)__rct_export__2106;
+ (id)__rct_export__2045;
+ (id)__rct_export__1744;
+ (id)__rct_export__1693;
+ (id)__rct_export__1382;
+ (id)__rct_export__1311;
+ (id)__rct_export__1230;
+ (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
+ (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
+ (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)scheduleLocalNotification:(id)arg1;
- (void)presentLocalNotification:(id)arg1;
- (id)constantsToExport;
- (void)checkPermissions:(CDUnknownBlockType)arg1;
- (void)abandonPermissions;
- (void)requestPermissions:(id)arg1;
- (void)getApplicationIconBadgeNumber:(CDUnknownBlockType)arg1;
- (void)setApplicationIconBadgeNumber:(int)arg1;
- (void)handleRemoteNotificationsRegistered:(id)arg1;
- (void)handleRemoteNotificationReceived:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

