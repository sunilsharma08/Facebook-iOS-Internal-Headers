//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBSimpleNetworkerRequest, FBUserSession, NSString;
@protocol MNAuthenticationManager, OS_dispatch_queue;

@interface MNPhotoUploader : NSObject <FBNetworkerRequestDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBUserSession *_session;
    id <MNAuthenticationManager> _authManager;
    FBSimpleNetworkerRequest *_downloadRequest;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didUpdateUploadProgress:(float)arg2 complete:(BOOL)arg3;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)startUploadForImageAttachment:(id)arg1 outgoingAttribution:(id)arg2 extraLoggingData:(id)arg3 shouldUploadAsAnimatedImage:(BOOL)arg4 shouldTagSourceAsSelfieCam:(BOOL)arg5 allowExternalURLUpload:(BOOL)arg6 progressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithUserSession:(id)arg1 authManager:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

