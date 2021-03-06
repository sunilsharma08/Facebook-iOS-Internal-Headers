//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKStatefulViewComponentController.h"

@class FBAVPlayerBasedVideoPlaybackController, FBPluginBasedFeedVideoDisplayController;

@interface FBVideoPlayerComponentController : CKStatefulViewComponentController
{
    FBPluginBasedFeedVideoDisplayController *_videoDisplayController;
    BOOL _resourceCleanupEnabled;
    BOOL _isInChannelFeed;
}

+ (void)configClosedCaptionPlugin:(id)arg1 withSession:(id)arg2;
+ (void)configCTAPlugin:(id)arg1 withSession:(id)arg2 analyticsModule:(id)arg3 intentHandler:(id)arg4 videoComponent:(id)arg5 videoItem:(id)arg6 layoutIdiom:(unsigned int)arg7;
+ (void)configWatchLaterPlugin:(id)arg1 withSession:(id)arg2 withVideoComponent:(id)arg3 watchLaterButtonEnabled:(BOOL)arg4 layoutIdiom:(unsigned int)arg5;
+ (void)configBroadcastViewPlugin:(id)arg1 withSession:(id)arg2 withVideoItem:(id)arg3 withVideoModel:(id)arg4;
+ (void)configOverlayPlugin:(id)arg1 withSession:(id)arg2;
+ (void)configDebugOverlayPlugin:(id)arg1;
+ (void)configAudienceResponsePlugin:(id)arg1 withSession:(id)arg2 withVideoComponent:(id)arg3;
+ (void)configStatusPlugin:(id)arg1 withVideoComponent:(id)arg2 playbackItem:(id)arg3;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)newStatefulView:(id)arg1;
+ (id)contextForNewStatefulView:(id)arg1;
- (void).cxx_destruct;
- (void)replayTapped;
- (void)_enterFullScreenFromNewsFeed;
- (void)_enterFullScreen;
- (void)_enterFullScreenFromChannel;
- (id)newVideoDisplayControllerWithVideoPlayerController:(id)arg1;
@property(readonly, nonatomic) FBAVPlayerBasedVideoPlaybackController *videoPlayerController;
- (void)willRelinquishStatefulView:(id)arg1;
- (BOOL)canRelinquishStatefulView;
- (void)didAcquireStatefulView:(id)arg1;

@end

