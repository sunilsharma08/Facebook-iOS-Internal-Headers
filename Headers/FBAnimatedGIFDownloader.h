//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAnimatedGIFDownloadRequest, FBImageDownloader, FBUserSession;

@interface FBAnimatedGIFDownloader : NSObject
{
    FBImageDownloader *_imageDownloader;
    FBUserSession *_session;
    id _currentPlaceholderImageDownload;
    FBAnimatedGIFDownloadRequest *_currentAnimatedGIFDownloadRequest;
}

- (void).cxx_destruct;
- (void)cancelCurrentAnimatedImageDownloadWasDownloaded:(BOOL)arg1;
- (void)downloadAnimatedImageForURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)cancelCurrentPlaceholderImageDownloadWasDownloaded:(BOOL)arg1;
- (void)dowloadPlaceholderImageWithURL:(id)arg1 scenePath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithImageDownloader:(id)arg1 session:(id)arg2;

@end

