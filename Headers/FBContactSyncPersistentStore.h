//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;
@protocol OS_dispatch_queue;

@interface FBContactSyncPersistentStore : NSObject
{
    FBUserSession *_session;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

- (void).cxx_destruct;
- (id)_contactSyncRecordFilePath;
- (void)deletePersistentContactsWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 callBackQueue:(id)arg3;
- (void)saveContactsPersistently:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3 callBackQueue:(id)arg4;
- (void)fetchPersistentContactsWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 callBackQueue:(id)arg3;
- (id)init;
- (id)initWithSession:(id)arg1;

@end

