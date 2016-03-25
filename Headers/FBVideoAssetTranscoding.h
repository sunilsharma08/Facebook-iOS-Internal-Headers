//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBTranscodingHandlerDelegate-Protocol.h"

@class AVAsset, AVAssetReader, AVAssetWriter, FBKVOController, FBMobileTraceAsyncTokenPtr, FBVideoExportConfig, NSError, NSMutableArray, NSString, NSURL;
@protocol FBVideoAssetTranscodingDelegate, OS_dispatch_queue;

@interface FBVideoAssetTranscoding : NSObject <FBTranscodingHandlerDelegate>
{
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    CDUnknownBlockType _completionHandler;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    FBKVOController *_KVOController;
    NSMutableArray *_transcodingHandlers;
    CDStruct_1b6d18a9 _startSessionTime;
    CDStruct_1b6d18a9 _endSessionTime;
    CDStruct_1b6d18a9 _videoDuration;
    float _totalProgress;
    FBMobileTraceAsyncTokenPtr *_mobileTraceAsyncToken;
    AVAsset *_asset;
    NSError *_assetLoadError;
    BOOL _shouldOptimizeForNetworkUse;
    NSError *_error;
    unsigned int _status;
    NSURL *_videoURL;
    NSURL *_outputURL;
    FBVideoExportConfig *_videoExportConfig;
    id <FBVideoAssetTranscodingDelegate> _delegate;
    CDStruct_1b6d18a9 _outputDuration;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) __weak id <FBVideoAssetTranscodingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 outputDuration; // @synthesize outputDuration=_outputDuration;
@property(readonly, nonatomic) BOOL shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(readonly, nonatomic) FBVideoExportConfig *videoExportConfig; // @synthesize videoExportConfig=_videoExportConfig;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) unsigned int status; // @synthesize status=_status;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)transcodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (CDStruct_1b6d18a9)duration;
@property(readonly, nonatomic) long long estimatedOutputFileLength;
- (void)transcodingHandler:(id)arg1 didFinishWithPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)transcodingHandler:(id)arg1 didUpdatePresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)_assetWriterStatusChanged:(id)arg1;
- (void)_finishWithPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)_invokeCompletionHandler;
- (void)_updateTranscodingProgress:(float)arg1;
- (id)initWithVideoURL:(id)arg1 outputURL:(id)arg2 videoExportConfig:(id)arg3 shouldOptimizeForNetworkUse:(BOOL)arg4 queue:(id)arg5 timeRange:(CDStruct_e83c9415)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

