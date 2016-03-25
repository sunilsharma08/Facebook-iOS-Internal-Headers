//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBImageProcessingConcurrentRequest.h"

@class NSError, NSURL, UIImage;

@interface FBImageProcessingAssetLoadRequest : FBImageProcessingConcurrentRequest
{
    NSURL *_assetURL;
    BOOL _fullResolution;
    int _targetDimension;
    UIImage *_image;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)clear;
- (void)executeWithContext:(id)arg1;
- (id)initWithAssetURL:(id)arg1 fullResolution:(BOOL)arg2 targetDimension:(int)arg3 completion:(CDUnknownBlockType)arg4 cancel:(CDUnknownBlockType)arg5;

@end

