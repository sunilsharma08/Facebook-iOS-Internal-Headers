//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol FBVideoPlaybackController;

@protocol FBFeedVideoPlayerContainer <NSObject>
- (NSArray *)videoContainerTrackingCodes;
- (id)memModel;
- (BOOL)isInFullScreen;
- (void)stopPlayingVideo;
- (void)didDisplay;
- (id <FBVideoPlaybackController>)videoPlaybackController;

@optional
@property(readonly, nonatomic) unsigned int layoutIdiom;
@property(readonly, nonatomic) unsigned int videoPlayerOptions;
- (void)performFullScreenActions;
- (void)didTapVideoView;
- (void)dismiss;
- (void)enterChannel;
- (void)enterFullScreenWithBlock:(void (^)(id))arg1;
@end

