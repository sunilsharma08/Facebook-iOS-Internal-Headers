//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface FBAppDelegate : NSObject <UIApplicationDelegate>
{
}

- (void)fbapplication:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fbApplicationDidEnterBackground:(id)arg1;
- (void)fbApplicationWillEnterForeground:(id)arg1;
- (void)fbApplicationWillResignActive:(id)arg1;
- (void)fbApplicationDidBecomeActive:(id)arg1;
- (BOOL)fbApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)fbApplication:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (id)backgroundTaskHandler;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

