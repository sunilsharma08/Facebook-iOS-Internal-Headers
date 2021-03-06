//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPhotoAttachmentProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class CLLocation, FBAssetMetadata, FBPhotoAssetEdits, NSArray, NSDate, NSString, UIImage;

@interface FBMultiPickerPhotoAttachment : NSObject <FBPhotoAttachmentProtocol, NSCoding>
{
    BOOL _shouldUseTargetDimension;
    BOOL _allowEditing;
    BOOL _showServerProcessingProgress;
    UIImage *_thumbnailImage;
    NSString *_assetID;
    NSString *_dataSourceID;
    NSString *_dataSourceDescription;
    FBAssetMetadata *_metadata;
    NSDate *_creationDate;
    NSArray *_publishedPhotoTags;
    NSString *_caption;
    NSArray *_mentions;
    FBPhotoAssetEdits *_edits;
    unsigned int _indexHint;
    UIImage *_displayImage;
}

+ (id)propertiesToSkipForCoding;
@property(nonatomic) BOOL showServerProcessingProgress; // @synthesize showServerProcessingProgress=_showServerProcessingProgress;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(nonatomic) unsigned int indexHint; // @synthesize indexHint=_indexHint;
@property(retain, nonatomic) FBPhotoAssetEdits *edits; // @synthesize edits=_edits;
@property(copy, nonatomic) NSArray *mentions; // @synthesize mentions=_mentions;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSArray *publishedPhotoTags; // @synthesize publishedPhotoTags=_publishedPhotoTags;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) FBAssetMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *dataSourceDescription; // @synthesize dataSourceDescription=_dataSourceDescription;
@property(readonly, copy, nonatomic) NSString *dataSourceID; // @synthesize dataSourceID=_dataSourceID;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *existingFBID;
@property(readonly, nonatomic) BOOL requiresUpload;
@property(readonly, nonatomic) BOOL selectedFromMultiPicker;
- (BOOL)supportsQualitySampling;
- (void)loadImageDataForUploadWithCompressionRate:(float)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)isPhotoCropped;
- (void)cancelDisplayImageGeneration;
- (void)loadThumbnailFromDisplayImage;
- (void)loadDisplayImageAndFiltererFromSourceForUserSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDisplayImageFromSourceForUserSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadThumbnailImageFromSourceForUserSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) float aspectRatio;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(copy, nonatomic) NSArray *tagsEdges;
@property(retain, nonatomic) CLLocation *location;
- (unsigned int)attachmentType;
- (id)visualDedupRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAssetID:(id)arg1 dataSourceID:(id)arg2 dataSourceDescription:(id)arg3 indexHint:(unsigned int)arg4 metadata:(id)arg5 creationDate:(id)arg6 edits:(id)arg7 thumbnailImage:(id)arg8 shouldUseTargetDimension:(BOOL)arg9;
- (id)initWithAssetID:(id)arg1 dataSourceID:(id)arg2 dataSourceDescription:(id)arg3 indexHint:(unsigned int)arg4 metadata:(id)arg5 creationDate:(id)arg6 edits:(id)arg7 thumbnailImage:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

