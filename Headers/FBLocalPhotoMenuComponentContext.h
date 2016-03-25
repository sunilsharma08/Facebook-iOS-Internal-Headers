//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBScenePath;
@protocol CKNetworkImageDownloading;

@interface FBLocalPhotoMenuComponentContext : NSObject
{
    id <CKNetworkImageDownloading> _imageDownloader;
    FBScenePath *_scenePath;
}

@property(readonly, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) id <CKNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (void).cxx_destruct;
- (id)initWithImageDownloader:(id)arg1 scenePath:(id)arg2;

@end

