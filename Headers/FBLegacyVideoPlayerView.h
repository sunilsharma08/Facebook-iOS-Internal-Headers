//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "FBClientProxyThrottlingDelegate-Protocol.h"
#import "FBPlayerContainerViewDelegate-Protocol.h"
#import "FBSimpleVideoPlaybackController-Protocol.h"
#import "FBVideoLoaderDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, FBClientProxy, FBKVOController, FBLegacyFeedVideoDisplayController, FBLegacyVideoPlayerLogger, FBNetworkImageView, FBPlaybackWaterfallCounter, FBPlayerContainerView, FBRectangleWithRoundedCornerView, FBScenePath, FBStateMachine, FBUserSession, FBVideoBitrate, FBVideoInitializationTracker, FBVideoLoader, FBVideoPlaybackInfoView, FBVideoPlaybackItem, FBVideoPlayerAudioMeters, FBVideoPlayerAudioSessionClient, FBVideoPlayerStatusIndicatorView, FBVideoPlayerThrottlerDataProvider, NSArray, NSFileManager, NSString, UIImageView, UILabel, ZRTariffedUxSentry;
@protocol FBLegacyVideoPlayerViewDelegate;

@interface FBLegacyVideoPlayerView : UIControl <FBPlayerContainerViewDelegate, FBVideoLoaderDelegate, FBSimpleVideoPlaybackController, FBClientProxyThrottlingDelegate>
{
    UILabel *_captionsLabel;
    FBRectangleWithRoundedCornerView *_captionsRoundedCornerView;
    FBNetworkImageView *_imagePlaceholderView;
    NSFileManager *_fileManager;
    BOOL _presentedFullScreen;
    FBVideoPlayerStatusIndicatorView *_statusIndicatorView;
    UIImageView *_playImageView;
    FBVideoPlayerAudioMeters *_audioMeters;
    FBPlayerContainerView *_playerContainerView;
    FBPlaybackWaterfallCounter *_playbackWaterfallCounter;
    FBKVOController *_observation;
    id _periodicTimeObserver;
    int _assetStatus;
    BOOL _isSeekChanged;
    BOOL _playStateWhenScrubbingStarted;
    double _videoSeekSourceTimePosition;
    FBClientProxy *_clientProxy;
    FBVideoPlaybackInfoView *_videoPlaybackInfoView;
    FBVideoPlayerAudioSessionClient *_audioSessionManagerClient;
    FBVideoPlayerThrottlerDataProvider *_throttlerDataProvider;
    FBStateMachine *_playerInternalState;
    float _startSeconds;
    FBVideoBitrate *_videoBitRate;
    FBScenePath *_scenePath;
    int _priority;
    FBVideoInitializationTracker *_videoInitializationTracker;
    BOOL _wasHD;
    BOOL _videoStoredLocally;
    BOOL _mute;
    BOOL _playerIsStalled;
    BOOL _hideIDontWantToSeeThisButton;
    BOOL _allowsExternalPlayback;
    BOOL _showsStatusIndicator;
    BOOL _showsAudioMeters;
    BOOL _showsVideoPreviewImage;
    BOOL _shouldShowPlayButtonWhenNotPlaying;
    BOOL _shouldAutoplayInFeed;
    BOOL _manuallyPaused;
    BOOL _playHDVideo;
    BOOL _autoplayInFeed;
    BOOL _showSoundPrompt;
    BOOL _seekInProgress;
    FBLegacyVideoPlayerLogger *_logger;
    id <FBLegacyVideoPlayerViewDelegate> _delegate;
    NSString *_videoGravity;
    float _playIconSize;
    NSString *_playIconImageName;
    FBVideoPlaybackItem *_videoItem;
    int _videoViewState;
    UILabel *_playCountsView;
    NSString *_autoplayReason;
    int _captionVisibility;
    ZRTariffedUxSentry *_zeroRatingSentry;
    NSString *_soundIconName;
    NSString *_soundMessage;
    float _audioMeterYOffset;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    FBVideoLoader *_videoLoader;
    NSArray *_captions;
    NSString *_tempVideoFilePath;
    FBUserSession *_session;
    AVPlayerItem *_unloadedPlayerItem;
    double _videoTimePosition;
    double _videoTimeDuration;
    double _videoTimeLoaded;
    double _videoPlayedRatio;
    double _videoLastStartTimePosition;
    double _videoPendingSeekPosition;
}

@property(retain, nonatomic) AVPlayerItem *unloadedPlayerItem; // @synthesize unloadedPlayerItem=_unloadedPlayerItem;
@property(readonly, nonatomic) BOOL seekInProgress; // @synthesize seekInProgress=_seekInProgress;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) double videoPendingSeekPosition; // @synthesize videoPendingSeekPosition=_videoPendingSeekPosition;
@property(copy, nonatomic) NSString *tempVideoFilePath; // @synthesize tempVideoFilePath=_tempVideoFilePath;
@property(copy, nonatomic) NSArray *captions; // @synthesize captions=_captions;
@property(retain, nonatomic) FBVideoLoader *videoLoader; // @synthesize videoLoader=_videoLoader;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) float audioMeterYOffset; // @synthesize audioMeterYOffset=_audioMeterYOffset;
@property(copy, nonatomic) NSString *soundMessage; // @synthesize soundMessage=_soundMessage;
@property(copy, nonatomic) NSString *soundIconName; // @synthesize soundIconName=_soundIconName;
@property(nonatomic) BOOL showSoundPrompt; // @synthesize showSoundPrompt=_showSoundPrompt;
@property(retain, nonatomic) ZRTariffedUxSentry *zeroRatingSentry; // @synthesize zeroRatingSentry=_zeroRatingSentry;
@property(nonatomic) int captionVisibility; // @synthesize captionVisibility=_captionVisibility;
@property(copy, nonatomic) NSString *autoplayReason; // @synthesize autoplayReason=_autoplayReason;
@property(nonatomic) BOOL autoplayInFeed; // @synthesize autoplayInFeed=_autoplayInFeed;
@property(nonatomic) BOOL playHDVideo; // @synthesize playHDVideo=_playHDVideo;
@property(nonatomic) BOOL manuallyPaused; // @synthesize manuallyPaused=_manuallyPaused;
@property(nonatomic) BOOL shouldAutoplayInFeed; // @synthesize shouldAutoplayInFeed=_shouldAutoplayInFeed;
@property(nonatomic) BOOL shouldShowPlayButtonWhenNotPlaying; // @synthesize shouldShowPlayButtonWhenNotPlaying=_shouldShowPlayButtonWhenNotPlaying;
@property(nonatomic) BOOL showsVideoPreviewImage; // @synthesize showsVideoPreviewImage=_showsVideoPreviewImage;
@property(nonatomic) BOOL showsAudioMeters; // @synthesize showsAudioMeters=_showsAudioMeters;
@property(nonatomic) BOOL showsStatusIndicator; // @synthesize showsStatusIndicator=_showsStatusIndicator;
@property(readonly, nonatomic) UILabel *playCountsView; // @synthesize playCountsView=_playCountsView;
@property(readonly, nonatomic) BOOL videoStoredLocally; // @synthesize videoStoredLocally=_videoStoredLocally;
@property(nonatomic) double videoLastStartTimePosition; // @synthesize videoLastStartTimePosition=_videoLastStartTimePosition;
@property(readonly, nonatomic) double videoPlayedRatio; // @synthesize videoPlayedRatio=_videoPlayedRatio;
@property(readonly, nonatomic) double videoTimeLoaded; // @synthesize videoTimeLoaded=_videoTimeLoaded;
@property(nonatomic) double videoTimeDuration; // @synthesize videoTimeDuration=_videoTimeDuration;
@property(nonatomic) double videoTimePosition; // @synthesize videoTimePosition=_videoTimePosition;
@property(nonatomic) int videoViewState; // @synthesize videoViewState=_videoViewState;
@property(retain, nonatomic) FBVideoPlaybackItem *videoItem; // @synthesize videoItem=_videoItem;
@property(copy, nonatomic) NSString *playIconImageName; // @synthesize playIconImageName=_playIconImageName;
@property(nonatomic) float playIconSize; // @synthesize playIconSize=_playIconSize;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) BOOL hideIDontWantToSeeThisButton; // @synthesize hideIDontWantToSeeThisButton=_hideIDontWantToSeeThisButton;
@property(nonatomic) BOOL playerIsStalled; // @synthesize playerIsStalled=_playerIsStalled;
@property(nonatomic) __weak id <FBLegacyVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBLegacyVideoPlayerLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) BOOL mute; // @synthesize mute=_mute;
- (void).cxx_destruct;
- (void)cancelScheduledAnimation;
- (void)scheduleSoundPromptShowingAnimation:(id)arg1 hidingAnimation:(id)arg2 scaleAnimation:(id)arg3;
- (id)accessibilityIdentifier;
- (BOOL)isCurrentlyPlaying;
- (void)videoLoader:(id)arg1 didLoadSuccessfully:(id)arg2 videoDuration:(double)arg3;
- (void)videoLoader:(id)arg1 didAllocatePlayerItem:(id)arg2;
- (void)videoLoaderLogDidAllocatePlayerItem;
- (void)videoLoader:(id)arg1 didFailWithError:(id)arg2;
- (CDStruct_facbd6cb)calculateVideoBasicData;
- (CDStruct_bccf9d01)calculateThrottlingData;
- (void)playerContainerView:(id)arg1 isReadyToDisplay:(BOOL)arg2;
- (void)_handlePlayerItemLoadedTimeRangesChanged:(id)arg1;
- (BOOL)_inFullScreenLandscape;
- (void)_handleError:(id)arg1;
- (void)_cancelLoadingCurrent;
- (void)_setNewItemOnPlayerAndCancelLoadingCurrent:(id)arg1;
- (int)_fetchAtomSize;
- (int)_fetchBitRate;
- (CDStruct_7c32120d)_fetchVideoMetadataForClientProxyAnalysis;
- (void)_updateStatusIndicator;
- (id)_imagePlaceholderView;
- (double)_verifyTimeIntervalAndLogError:(double)arg1 duringSeek:(BOOL)arg2;
- (void)_handlePlayerStatusChanged;
- (void)_handlePlayerRateChanged:(id)arg1;
- (void)_itemDidAddErrorLogEvent;
- (void)itemDidPlayToEndTime;
- (void)_resumePlaybackFromStallIfNeeded;
- (void)_itemDidStall;
- (void)_updateStalledStateOnPeriodicTimeUpdate;
- (void)_layoutImagePlaceholderView;
- (void)_showImagePlaceHolderView:(BOOL)arg1;
- (void)_refreshAudioSession;
- (void)_cleanupTempVideoFile;
- (void)_teardownPeriodicTimeObserver;
- (void)_setupPeriodicTimeObserver;
- (void)_throttle;
- (void)_resumePlayback;
- (void)setAudioFadeOutWithDuration:(double)arg1;
- (void)setAudioFadeInWithDuration:(double)arg1;
- (void)_setAudioFadeVolumeWithStartVolume:(float)arg1 endVolume:(float)arg2 duration:(double)arg3;
- (id)screenshot;
- (void)updateScenePath:(id)arg1 priority:(int)arg2;
- (void)_updateLoadedTime:(CDStruct_e83c9415)arg1;
- (void)_updateAudioVolumes;
- (void)restoreVideoPlayerState:(id)arg1;
- (void)_seekToTime:(double)arg1;
- (void)finishSeek;
- (void)seekToTime:(double)arg1;
- (void)beginSeek;
- (void)stopStreaming;
- (void)prepareToPlay;
- (void)_pauseWithCancelation:(BOOL)arg1;
- (void)pause;
- (int)play;
- (void)logDisplayedWithAutoplayFailureReasons:(id)arg1;
- (void)_bugReportInProgress:(id)arg1;
- (BOOL)_isPlayingMuted;
- (id)_captionForTime:(double)arg1;
- (void)_setCaptionsHidden:(BOOL)arg1;
- (void)_updateCaptions;
- (BOOL)_shouldShowCaptions;
- (void)_fetchCaptionsForCurrentVideo;
- (void)_buildCaptionsLabel;
@property(nonatomic) BOOL hasShownSoundPrompt;
@property(readonly, nonatomic) BOOL didLogStartedPlaying;
@property(nonatomic) BOOL statusIndicatorHidden;
- (void)_unloadVideo;
- (void)_reloadVideo;
- (void)willBePresentedInFullScreen:(BOOL)arg1;
- (void)setVideoItem:(id)arg1 checkPredownloadCache:(BOOL)arg2;
- (void)_refreshImagePlaceHolderURL;
- (void)setBackgroundColor:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)_playIfReady;
- (void)_loadVideoAndPlayRequested:(BOOL)arg1;
- (void)_clearExistingVideoPlayer;
- (void)_replaceVideoLoader:(id)arg1;
- (id)loggingProvider;
- (void)_buildPlayerIfNecessary;
@property(readonly, nonatomic) BOOL isHLSVideo;
- (struct CGSize)videoItemSize;
- (struct CGRect)videoFrame;
- (void)_reorderSubviews;
- (void)_layoutCaptionsLabel;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)videoFrameBounds;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak FBLegacyFeedVideoDisplayController *owningFeedVideoDisplayController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

