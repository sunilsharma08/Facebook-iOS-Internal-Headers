//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBStoryStream.h"

@class FBFeedEndToEndAnalyticsLogger, FBFeedReliabilityLogger, FBFeedTailLoadRetryPolicyExperimentContext;
@protocol FBNetworkDispatch;

@interface FBFeedStream : FBStoryStream
{
    FBFeedReliabilityLogger *_feedLogger;
    FBFeedEndToEndAnalyticsLogger *_feedEndToEndAnalyticsLogger;
    FBFeedTailLoadRetryPolicyExperimentContext *_tailLoadRetryPolicyExperimentContext;
    id <FBNetworkDispatch> _firstLoadNetworkDispatcher;
}

+ (id)graphQLRequestWithParameters:(id)arg1 feedType:(int)arg2 enableUDPPriming:(BOOL)arg3 callbackPerformer:(id)arg4 subsequentRequest:(BOOL)arg5 queryOptions:(id)arg6;
- (void).cxx_destruct;
- (void)streamLoadDidFinishLoading:(id)arg1;
- (void)streamLoadDidReceiveFailingResponseForDownloadRequestWithAnalyticsUUID:(id)arg1 error:(id)arg2 status:(id)arg3;
- (void)streamLoadDidCancelDownloadRequestWithAnalyticsUUID:(id)arg1;
- (void)streamLoadDidStartDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 retryCount:(unsigned int)arg3 analyticsUUID:(id)arg4;
- (void)streamLoadDidEnqueueDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 analyticsUUID:(id)arg3;
- (void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned int)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 responseChunkResults:(id)arg4 expectedResponseChunks:(unsigned int)arg5 userInfo:(id)arg6;
- (void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned int)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 currentResponseChunkIndex:(unsigned int)arg4 expectedResponseChunks:(unsigned int)arg5 userInfo:(id)arg6;
- (void)startStreaming;
- (id)_streamLoadForLoadType:(unsigned int)arg1 refreshMode:(unsigned int)arg2 cursor:(id)arg3;
- (BOOL)canLoadTail;
- (id)initWithSession:(id)arg1 connection:(id)arg2 connectionInfo:(id)arg3 enableUDPPriming:(BOOL)arg4 scenePathProvider:(id)arg5 analyticsUUID:(id)arg6 queryOptions:(id)arg7;
- (id)initWithSession:(id)arg1 connection:(id)arg2 connectionInfo:(id)arg3 enableUDPPriming:(BOOL)arg4 scenePathProvider:(id)arg5 analyticsUUID:(id)arg6 feedEndToEndAnalyticsLogger:(id)arg7 queryOptions:(id)arg8 firstLoadNetworkDispatcher:(id)arg9;

@end

