//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAnalytics, FBReachabilityAnnouncer, FBUserSession, NSString, SBSyncStatusNotifier;

@interface SBAssetStatusChecker : NSObject
{
    NSString *_deviceID;
    SBSyncStatusNotifier *_syncStatusNotifier;
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    FBAnalytics *_analytics;
    FBUserSession *_session;
    int _numHashesChecked;
    BOOL _canceled;
    BOOL _isChecking;
}

- (void).cxx_destruct;
- (void)_checkAssetSyncStatusForAssetInfos:(id)arg1 withCheckBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)checkAssetSyncStatusForAssetInfos:(id)arg1 withCheckBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)cancel;
- (id)initWithDeviceID:(id)arg1 syncStatusNotifier:(id)arg2 analytics:(id)arg3 session:(id)arg4;

@end

