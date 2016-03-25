//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerPhotoOverlayAttachmentLogger-Protocol.h"

@class FBAnalytics, NSMutableDictionary, NSString;
@protocol FBCreativeEditingToolsLoggerAggregatorDelegate;

@interface FBStickersInPhotosLogger : NSObject <FBComposerPhotoOverlayAttachmentLogger>
{
    FBAnalytics *_analytics;
    NSMutableDictionary *_assetIDsToLogs;
    NSString *_compositionID;
    unsigned int _source;
    id <FBCreativeEditingToolsLoggerAggregatorDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCreativeEditingToolsLoggerAggregatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didShowPhotoInComposerWithAssetID:(id)arg1;
- (void)_aggregateWithExtraData:(id)arg1;
- (id)_logForAssetID:(id)arg1;
- (void)_logEvent:(id)arg1 withAssetID:(id)arg2;
- (id)_extraDataForPhotoWithAssetID:(id)arg1;
- (void)_logStickerRemovedForPhotoWithAssetID:(id)arg1;
- (void)_logStickerAddedForPhotoWithAssetID:(id)arg1;
- (void)_logStickersFlowEnteredForPhotoWithAssetID:(id)arg1;
- (void)logSizedPhotoOverlayAttachmentForPhotoWithAssetID:(id)arg1;
- (void)logRotatedPhotoOverlayAttachmentForPhotoWithAssetID:(id)arg1;
- (void)logMovedPhotoOverlayAttachmentForPhotoWithAssetID:(id)arg1;
- (void)logChangedTabForStickersPickerForPhotoWithAssetID:(id)arg1;
- (void)logOpenedPickerForStickersPickerForPhotoWithAssetID:(id)arg1;
- (void)logHitCancelForStickersPickerForPhotoWithAssetID:(id)arg1;
- (void)logHitDoneFromPhotoOverlayAttachmentsFlowForPhotoWithAssetID:(id)arg1;
- (void)logHitCancelFromPhotoOverlayAttachmentsFlowForPhotoWithAssetID:(id)arg1;
- (void)logEventsAndAggregateWithExtraData:(id)arg1 published:(BOOL)arg2;
- (void)logEventsAndAggregateWithExtraData:(id)arg1 finalSelectedPhotosAssetIDs:(id)arg2 published:(BOOL)arg3;
- (void)didEnterEditingForAssetID:(id)arg1;
- (void)didRemovePhotoOverlayAttachmentFromPhotoWithAssetID:(id)arg1;
- (void)didRemovePhotoWithAssetID:(id)arg1;
- (void)didHitCancelWithPhotoOverlayAttachmentAmount:(unsigned int)arg1 forAssetID:(id)arg2;
- (void)didAddPhotoOverlayAttachmentToPhotoWithAssetID:(id)arg1;
- (void)didAddPhotoWithAssetID:(id)arg1;
- (id)initWithCompositionID:(id)arg1 source:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

