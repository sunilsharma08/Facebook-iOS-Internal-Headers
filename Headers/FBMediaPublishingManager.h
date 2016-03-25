//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMediaPublishingManagerProtocol-Protocol.h"
#import "FBMediaUploadItemManagerDelegate-Protocol.h"

@class FBComposerLogger, FBComposerPublisherData, FBMediaUploadItemManager, FBPublisherManager, FBUserSession, NSError, NSString, NSTimer;
@protocol FBMediaPublishingManagerDelegate;

@interface FBMediaPublishingManager : NSObject <FBMediaUploadItemManagerDelegate, FBMediaPublishingManagerProtocol>
{
    float _totalProgress;
    double _flowStartTime;
    double _uploadBatchStartTime;
    double _uploadPublishStartTime;
    BOOL _flowStarted;
    NSError *_flowError;
    BOOL _uploading;
    float _timeForWaitingRetry;
    BOOL _attemptTimeout;
    FBComposerLogger *_logger;
    NSTimer *_stepTimeoutTimer;
    NSTimer *_attemptTimeoutTimer;
    NSTimer *_waitingRetryTimer;
    NSTimer *_canCancelPublishingOfPublisherDataTimer;
    FBUserSession *_userSession;
    BOOL _isStartedState;
    FBComposerPublisherData *_publisherData;
    id <FBMediaPublishingManagerDelegate> _delegate;
    FBMediaUploadItemManager *_uploadManager;
    FBPublisherManager *_publisherManager;
    unsigned int _attemptNumber;
}

@property(nonatomic) unsigned int attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(readonly, nonatomic) __weak FBPublisherManager *publisherManager; // @synthesize publisherManager=_publisherManager;
@property(retain, nonatomic) FBMediaUploadItemManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(nonatomic) __weak id <FBMediaPublishingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_uploadStepIsDone;
- (void)_clearDiscardedUploadedMedia;
- (void)_publishUploadedMediaAttachmentsAttempt;
- (void)_didUploadAllMediaAttachments;
- (void)_startUploadAndPublishVideoAttachment:(BOOL)arg1;
- (void)_startUploadAndPublishImageAttachments:(BOOL)arg1;
- (BOOL)cancelFreeEnabled;
- (void)_cancelWaitingRetryTimer;
- (void)_didExceedWaitingRetry;
- (void)_startWaitingRetryTimer;
- (void)_cancelAttemptTimeoutTimer;
- (void)_didExceedAttemptTimeout;
- (void)_startAttemptTimeoutTimer;
- (void)_cancelStepTimeoutTimer;
- (void)_didExceedStepTimeout;
- (void)_startStepTimeoutTimer;
- (void)_cancelCanCancelPublishingOfPublisherDataTimer;
- (void)_didExceedCanCancelPublishingOfPublisherDataTimeout;
- (void)_startCanCancelPublishingOfPublisherDataTimer;
- (double)_durationOfCanCancelPublishingOfPublisherDataTimer:(id)arg1;
- (void)_notifyCurrentUploadItemType:(int)arg1 thumbnail:(id)arg2;
- (void)_notifyCurrentUploadItem:(id)arg1;
- (void)publishFlowDidSucceedWithResult:(id)arg1;
- (BOOL)_errorIsTransient:(id)arg1;
- (void)_attemptDidFailWithError:(id)arg1;
- (void)_logEvent:(id)arg1 status:(id)arg2 done:(BOOL)arg3 error:(id)arg4 info:(id)arg5 numberOfRequestsSent:(int)arg6;
- (void)_logEvent:(id)arg1 info:(id)arg2;
- (void)_logEvent:(id)arg1;
- (void)_logFlowFatal;
- (void)_logFlowGiveupOrCancelWithReason:(id)arg1;
- (void)_logApplicationSignificantTimeChange;
- (void)_logApplicationDidReceiveMemoryWarning;
- (void)_logApplicationDidFinishLaunching;
- (void)_logApplicationWillEnterForeground;
- (void)_logApplicationDidEnterBackground;
- (void)_logApplicationWillTerminate;
- (void)_logApplicationWillResignActive;
- (void)_logApplicationBecameActive;
- (void)_logFlowSuccess;
- (void)_logAttemptFailureWithError:(id)arg1;
- (void)_logPublishRequestFailure:(id)arg1 withError:(id)arg2 numberOfRequestsSent:(int)arg3;
- (void)_logPublishRequestSuccess:(id)arg1 numberOfRequestsSent:(int)arg2;
- (void)_logPublishRequestDequeue;
- (void)_logPublishRequestStart:(id)arg1;
- (void)_logUploadBatchCancel;
- (void)_logUploadBatchSuccess;
- (void)_logUploadBatchFailure;
- (void)_logUploadBatchStart;
- (void)_logFlowStart;
- (void)_markUploadDone;
- (void)_markUploadStart;
- (void)uploadManager:(id)arg1 didUploadMediaItem:(id)arg2 failWithError:(id)arg3;
- (void)uploadManager:(id)arg1 didUpdateTotalProgress:(float)arg2;
- (void)uploadManager:(id)arg1 didFinishMediaUploadItem:(id)arg2;
- (void)uploadManager:(id)arg1 didStartMediaUploadItem:(id)arg2;
- (void)completedUploadAllMedia:(id)arg1;
- (void)publishRequestFailWithError:(id)arg1 status:(id)arg2 numberOfRequestsSent:(int)arg3;
- (void)publishRequestSucceedWithResult:(id)arg1 status:(id)arg2 numberOfRequestsSent:(int)arg3;
- (void)publishRequestDidStart;
- (void)publishRequestWillStart:(id)arg1;
- (void)startPublishAttempt:(BOOL)arg1;
- (BOOL)_existExpiredMedia;
- (void)publishFlowDidTerminallyFail;
- (void)publishFlowDidPauseWithPublisherData:(id)arg1;
- (void)publishFlowDidIncompleteWithState:(id)arg1;
- (void)publishFlowDidCancelWithPublisherData:(id)arg1 reason:(id)arg2;
- (void)publishFlowDidStartWithPublisherData:(id)arg1;
- (void)publishFlowDidRetryWithPublisherData:(id)arg1 source:(unsigned int)arg2;
@property(readonly, nonatomic) int mediaPublisherPhotoPostType;
- (void)dealloc;
- (id)initWithPublisherManager:(id)arg1 logger:(id)arg2 mediaType:(unsigned int)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

