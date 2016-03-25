//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBVideoDownloaderThrottler;

@protocol FBVideoDownloaderThrottlerDelegate <NSObject>
@property(readonly, nonatomic) unsigned int bytesDownloadedInLastRequest;
@property(readonly, nonatomic) unsigned int totalVideoByteLength;
@property(readonly, nonatomic, getter=isCurrentlyDownloading) BOOL downloading;
- (void)pauseDownloadFromThrottler:(FBVideoDownloaderThrottler *)arg1;
- (void)resumeDownloadFromThrottler:(FBVideoDownloaderThrottler *)arg1;
@end

