//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator, AVPlayer, AVPlayerItem, AVPlayerLayer, AVURLAsset, FBKVOController, FBVideoPlayerContentView, UIView;
@protocol FBVideoPlayerControllerDelegate;

@interface FBVideoPlayerController : NSObject
{
    FBKVOController *_KVOController;
    AVURLAsset *_asset;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    char _loadingComponents[4];
    BOOL _preparedToPlay;
    id _timeObserver;
    FBVideoPlayerContentView *_view;
    AVAssetImageGenerator *_imageGenerator;
    BOOL _muted;
    id <FBVideoPlayerControllerDelegate> _delegate;
    float _volume;
    double _seekTolerance;
}

@property(nonatomic) double seekTolerance; // @synthesize seekTolerance=_seekTolerance;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) BOOL preparedToPlay; // @synthesize preparedToPlay=_preparedToPlay;
@property(nonatomic) __weak id <FBVideoPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)snapshotAtTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didFinishScrubbing;
- (void)didScrubToPlaybackTime:(double)arg1;
- (void)didBeginScrubbing;
- (void)_applyMute;
- (void)_playerItemDidReachEnd:(id)arg1;
- (void)reset;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (BOOL)_shouldLoadAssetTracks;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (void)_assetFinishedLoad;
- (void)_playerLayerReadyForDisplayDidChange:(id)arg1;
- (void)_playerStatusDidChange:(id)arg1;
- (void)_playerItemStatusDidChange:(id)arg1;
- (void)_updateLoadingComponent:(unsigned int)arg1 ready:(BOOL)arg2 error:(id)arg3;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContentURL:(id)arg1;

@end

