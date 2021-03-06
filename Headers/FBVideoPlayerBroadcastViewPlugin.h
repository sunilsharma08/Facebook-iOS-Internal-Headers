//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBFacecastLiveViewerCountViewDelegate-Protocol.h"
#import "FBLiveBroadcastVideoStatusUpdaterDelegate-Protocol.h"
#import "FBVideoPluginView-Protocol.h"

@class FBConsistentLookasideCacheObservationHandle, FBFacecastFlashingIconView, FBFacecastLiveViewerCountView, FBLiveBroadcastVideoStatusUpdater, FBMemVideo, FBUserSession, NSString, UILabel;
@protocol FBVideoPlaybackController;

@interface FBVideoPlayerBroadcastViewPlugin : UIView <FBFacecastLiveViewerCountViewDelegate, FBLiveBroadcastVideoStatusUpdaterDelegate, FBVideoPluginView>
{
    FBUserSession *_session;
    UILabel *_liveIndicator;
    FBFacecastFlashingIconView *_flashingIconView;
    UILabel *_dotLabel;
    FBFacecastLiveViewerCountView *_viewerCountView;
    struct CGRect _videoFrame;
    int _viewerCount;
    FBLiveBroadcastVideoStatusUpdater *_statusUpdater;
    FBMemVideo *_video;
    FBConsistentLookasideCacheObservationHandle *_cacheHandle;
    BOOL _showLiveOverlay;
    BOOL _showLiveViewerCountOverlay;
    id <FBVideoPlaybackController> videoController;
    NSString *_videoID;
}

@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(nonatomic) BOOL showLiveViewerCountOverlay; // @synthesize showLiveViewerCountOverlay=_showLiveViewerCountOverlay;
@property(nonatomic) BOOL showLiveOverlay; // @synthesize showLiveOverlay=_showLiveOverlay;
@property(nonatomic) __weak id <FBVideoPlaybackController> videoController; // @synthesize videoController;
- (void).cxx_destruct;
- (id)_textShadow;
- (void)statusUpdaterVODTransitionCompleted:(id)arg1 withVideo:(id)arg2;
- (void)statusUpdaterVODTransitionStarted:(id)arg1;
- (void)videoPlaybackControllerDidFinishPlayback:(id)arg1;
- (void)facecastLiveViewerCountView:(id)arg1 didUpdateWithViewerCount:(int)arg2;
- (id)deepCopy;
@property(readonly, nonatomic) unsigned int visibilityOptions;
- (void)sizeToFit;
@property(nonatomic) struct CGRect videoFrame;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (void)_videoDidUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2 video:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

