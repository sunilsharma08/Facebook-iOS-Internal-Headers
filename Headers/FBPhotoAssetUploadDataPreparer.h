//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBImageProcessingConcurrentPipe, FBImageProcessingRequestContextHandle, NSMutableDictionary;

@interface FBPhotoAssetUploadDataPreparer : NSObject
{
    FBImageProcessingConcurrentPipe *_uploadAssetLoadingAndProcessingPipe;
    FBImageProcessingConcurrentPipe *_displayProcessingPipe;
    FBImageProcessingConcurrentPipe *_displayAssetLoadingPipe;
    FBImageProcessingRequestContextHandle *_displayRequestContextHandle;
    NSMutableDictionary *_assetURLsToMostRecentDisplayRequests;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_removePendingDisplayRequestForAssetURL:(id)arg1 cancel:(BOOL)arg2;
- (void)_setPendingDisplayRequest:(id)arg1 forAssetURL:(id)arg2;
- (id)_writeImage:(id)arg1 intoData:(id)arg2 compressionRate:(float)arg3 inMetadata:(id)arg4 error:(id *)arg5;
- (void)_prepareDisplayImageForAssetURL:(id)arg1 edits:(id)arg2 maxDimension:(int)arg3 shouldUseTargetDimension:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_prepareImageDataForAssetURL:(id)arg1 edits:(id)arg2 metadata:(id)arg3 uploadDimension:(int)arg4 shouldUseTargetDimension:(BOOL)arg5 compressionRate:(float)arg6 loggingBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)cancelDisplayImagePreparationForAssetID:(id)arg1;
- (void)prepareDisplayImageForAssetID:(id)arg1 edits:(id)arg2 maxDimension:(int)arg3 shouldUseTargetDimension:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)prepareDisplayImageForPhotoAttachment:(id)arg1 maxDimension:(int)arg2 shouldUseTargetDimension:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareUploadDataForPhotoAttachment:(id)arg1 uploadDimension:(int)arg2 shouldUseTargetDimension:(BOOL)arg3 compressionRate:(float)arg4 loggingBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)init;

@end

