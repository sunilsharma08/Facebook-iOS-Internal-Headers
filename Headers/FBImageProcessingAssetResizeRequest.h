//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBImageProcessingConcurrentRequest.h"

@class FBPhotoCropInfo, NSString, UIImage;

@interface FBImageProcessingAssetResizeRequest : FBImageProcessingConcurrentRequest
{
    BOOL _networkAccessAllowed;
    UIImage *_standardImage;
    UIImage *_standardCroppedImage;
    UIImage *_thumbnailImage;
    UIImage *_thumbnailCroppedImage;
    NSString *_assetID;
    FBPhotoCropInfo *_cropInfo;
}

@property(nonatomic) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(retain, nonatomic) FBPhotoCropInfo *cropInfo; // @synthesize cropInfo=_cropInfo;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(retain, nonatomic) UIImage *thumbnailCroppedImage; // @synthesize thumbnailCroppedImage=_thumbnailCroppedImage;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) UIImage *standardCroppedImage; // @synthesize standardCroppedImage=_standardCroppedImage;
@property(retain, nonatomic) UIImage *standardImage; // @synthesize standardImage=_standardImage;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAssetID:(id)arg1 cropInfo:(id)arg2 networkAccessAllowed:(BOOL)arg3 completion:(CDUnknownBlockType)arg4 cancel:(CDUnknownBlockType)arg5;

@end

