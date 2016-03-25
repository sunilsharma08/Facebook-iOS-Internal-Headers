//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMessageAttachmentPreparerListener-Protocol.h"
#import "MNPhotoUploadListener-Protocol.h"
#import "MNVideoUploadListener-Protocol.h"

@class FBAnalytics, FBMMediaUploadBandwidthTracker, FBReachabilityAnnouncer, NSString;
@protocol MNMessageAttachmentPreparerPhotoExtractionDelegate;

@interface FBMessageAttachmentPreparerLogger : NSObject <FBMessageAttachmentPreparerListener, MNPhotoUploadListener, MNVideoUploadListener>
{
    double _prepareForSendStartTime;
    double _prepareForUploadStartTime;
    double _photoUploadStartTime;
    double _videoUploadStartTime;
    FBAnalytics *_analytics;
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    FBMMediaUploadBandwidthTracker *_uploadBandwidthTracker;
    id <MNMessageAttachmentPreparerPhotoExtractionDelegate> _photoInfoDelegate;
}

- (void).cxx_destruct;
- (void)_addNetworkCondition:(id)arg1;
- (id)_attachmentTypeToString:(unsigned int)arg1;
- (void)didCancelVideoAttachmentUploadWithData:(id)arg1 messageOfflineId:(id)arg2 metrics:(id)arg3;
- (void)didFailToUploadVideoAttachmentWithData:(id)arg1 messageOfflineId:(id)arg2 error:(id)arg3 metrics:(id)arg4;
- (void)didUploadVideoAttachmentWithData:(id)arg1 fbId:(id)arg2 messageOfflineId:(id)arg3 metrics:(id)arg4;
- (void)didUploadVideoAttachmentWithProgress:(double)arg1 messageOfflineId:(id)arg2;
- (void)willUploadVideoAttachmentWithData:(id)arg1 messageOfflineId:(id)arg2;
- (void)didCancelPhotoAttachmentUploadWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3;
- (void)didFailToUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3 error:(id)arg4;
- (void)didUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 fbId:(id)arg2 photoData:(id)arg3 messageOfflineId:(id)arg4;
- (void)didUploadPhotoAttachmentWithProgress:(double)arg1 messageOfflineId:(id)arg2;
- (void)willUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3;
- (void)messageWithOfflineId:(id)arg1 didCancelPrepareAttachmentForSend:(id)arg2 resultPath:(id)arg3 stage:(id)arg4;
- (void)messageWithOfflineId:(id)arg1 didFailPrepareAttachmentForSend:(id)arg2 resultPath:(id)arg3 stage:(id)arg4;
- (void)messageWithOfflineId:(id)arg1 didPrepareAttachmentForSend:(id)arg2 resultPath:(id)arg3;
- (void)messageWithOfflineId:(id)arg1 willPrepareAttachmentForSend:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 didCancelPrepareAttachmentForUpload:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 didFailPrepareAttachmentForUpload:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 didPrepareAttachmentForUpload:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 willPrepareAttachmentForUpload:(id)arg2;
- (id)initWithAnalytics:(id)arg1 uploadBandwidthTracker:(id)arg2 photoInfoDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

