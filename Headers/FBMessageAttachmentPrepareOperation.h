//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "MNRichMediaUploadListener-Protocol.h"

@class FBMessageAttachmentUploadResultCache, FBMessageOutgoingAttribution, FBUserSession, MNPhotoUploader, MNPhotoViewModel, MNRichMediaAttachmentUploadDecisionConfig, MNRichMediaUploadHandler, NSString, NSURL;
@protocol FBMessageAttachmentPreparerListener, FBMessageAttachmentServerFbIdQuerier, MNAuthenticationManager, MNPhotoUploadListener, MNVideoUploadListener, OutgoingAttachment;

@interface FBMessageAttachmentPrepareOperation : NSOperation <MNRichMediaUploadListener>
{
    NSString *_messageOfflineId;
    id <OutgoingAttachment> _attachment;
    FBMessageOutgoingAttribution *_outgoingAttribution;
    MNPhotoViewModel *_attachedPhotoViewModel;
    int _photoAttachmentType;
    id <FBMessageAttachmentPreparerListener> _attachmentPreparerListener;
    id <MNPhotoUploadListener> _photoUploadListener;
    id <MNVideoUploadListener> _videoUploadListener;
    MNPhotoUploader *_photoUploader;
    NSString *_videoUploadToken;
    BOOL _isVideoUploadEnabled;
    MNRichMediaUploadHandler *_uploadHandler;
    id <MNAuthenticationManager> _authManager;
    id <FBMessageAttachmentServerFbIdQuerier> _attachmentServerFbIdQuerier;
    MNRichMediaAttachmentUploadDecisionConfig *_photoUploadConfig;
    MNRichMediaAttachmentUploadDecisionConfig *_videoUploadConfig;
    FBUserSession *_userSession;
    FBMessageAttachmentUploadResultCache *_attachmentUploadResultCache;
    BOOL _finished;
    BOOL _executing;
    unsigned int _state;
    CDUnknownBlockType _messagePreparerProgressBlock;
    NSURL *_animatedExternalURL;
}

@property(copy, nonatomic) NSURL *animatedExternalURL; // @synthesize animatedExternalURL=_animatedExternalURL;
- (void).cxx_destruct;
- (void)_finish;
- (void)setExecuting:(BOOL)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setCancelled;
- (BOOL)isCancelled;
- (BOOL)isReady;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(struct MNRichMediaUploadJobProgressInformation)arg2;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned int)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withContentFBID:(id)arg2 metrics:(id)arg3;
- (void)_cancelVideoUpload;
- (void)_finishVideoUploadWithFBID:(id)arg1 error:(id)arg2 failureToken:(id)arg3 metrics:(id)arg4;
- (void)_videoDidUploadWithFBID:(id)arg1 error:(id)arg2 failureToken:(id)arg3 metrics:(id)arg4;
- (void)_videoUploadWithData:(id)arg1;
- (BOOL)_isAttachmentAVideo;
- (void)_cancelPhotoUpload;
- (void)_finishPhotoUploadWithFBID:(id)arg1 error:(id)arg2;
- (void)_photoDidUploadWithFBID:(id)arg1 error:(id)arg2;
- (void)_photoUploadWithData:(id)arg1;
- (BOOL)_isAttachmentAPhoto;
- (void)_finishPrepareWithFBID:(id)arg1 resultPath:(id)arg2;
- (void)_mediaSkippedUploadFromServerWithFBID:(id)arg1;
- (void)_mediaSkippedUploadFromCacheWithFBID:(id)arg1;
- (void)_cancelMediaUpload;
- (void)_uploadDidMakeProgress:(float)arg1;
- (void)_cancelPrepare;
- (void)_attachmentWasPreparedWithData:(id)arg1 error:(id)arg2;
- (BOOL)_shouldUploadVideoAttachmentData:(id)arg1 forAttachment:(id)arg2;
- (BOOL)_shouldUploadPhotoAttachmentData:(id)arg1 forAttachment:(id)arg2;
- (void)_setMediaFbidInCache:(id)arg1;
- (id)_getMediaFbidFromCache;
- (BOOL)_isAttachmentAlreadyUploaded;
- (BOOL)_isSkipFromServerEnabled;
- (BOOL)_isSkipFromCacheEnabled;
- (void)_prepareAttachmentData;
- (void)_resumeFailedUpload;
- (BOOL)_uploadIsResumable;
- (id)_prepareStateToString;
- (void)_cancelInternal;
- (void)cancel;
- (void)start;
- (void)enableVideoUpload;
- (void)enablePhotoUpload:(id)arg1 photoAttachmentType:(int)arg2 animatedExternalURL:(id)arg3;
- (id)initWithMessageOfflineId:(id)arg1 attachment:(id)arg2 outgoingAttribution:(id)arg3 userSession:(id)arg4 authManager:(id)arg5 uploadHandler:(id)arg6 attachmentServerFbIdQuerier:(id)arg7 photoUploadConfig:(id)arg8 videoUploadConfig:(id)arg9 attachmentPrepListener:(id)arg10 photoUploadListener:(id)arg11 videoUploadListener:(id)arg12 progressBlock:(CDUnknownBlockType)arg13 attachmentUploadResultCache:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

