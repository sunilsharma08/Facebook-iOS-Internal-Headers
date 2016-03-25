//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface MNAnimatedNetworkPhotoInfo : FBValueObject <NSCopying>
{
    NSString *_localUploadCacheKey;
    NSURL *_animatedImageSrc;
    NSURL *_animatedImagePreviewSrc;
    int _animatedFileFormat;
}

@property(readonly, nonatomic) int animatedFileFormat; // @synthesize animatedFileFormat=_animatedFileFormat;
@property(readonly, copy, nonatomic) NSURL *animatedImagePreviewSrc; // @synthesize animatedImagePreviewSrc=_animatedImagePreviewSrc;
@property(readonly, copy, nonatomic) NSURL *animatedImageSrc; // @synthesize animatedImageSrc=_animatedImageSrc;
@property(readonly, copy, nonatomic) NSString *localUploadCacheKey; // @synthesize localUploadCacheKey=_localUploadCacheKey;
- (void).cxx_destruct;
- (id)initWithLocalUploadCacheKey:(id)arg1 animatedImageSrc:(id)arg2 animatedImagePreviewSrc:(id)arg3 animatedFileFormat:(int)arg4;

@end

