//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComponentScrollEventListener-Protocol.h"
#import "FBVideoPlaybackEventListener-Protocol.h"

@class FBVideoChannelPlaylistScrollBlockingEventListenerAnnouncer, NSMutableArray, NSString, NSTimer, UIScrollView;
@protocol FBVideoPlaybackController;

@interface FBVideoChannelPlaylistScrollBlockingController : NSObject <FBVideoPlaybackEventListener, FBComponentScrollEventListener>
{
    FBVideoChannelPlaylistScrollBlockingEventListenerAnnouncer *_announcer;
    id <FBVideoPlaybackController> _blockingForVideoController;
    float _nextPositionToBlockTo;
    float _lastPositionBlockedTo;
    NSMutableArray *_positionsToBlockTo;
    NSTimer *_hideExplanationTimer;
    UIScrollView *_scrollView;
    double _skipInterval;
    unsigned int _state;
    float _startedDraggingAt;
    double _remainingTimeToBlock;
    double _startedPlaybackTime;
}

- (void).cxx_destruct;
- (void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2;
- (void)videoPlaybackControllerDidFinishPlayback:(id)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (BOOL)_scrollViewOffsetAllowed;
- (float)_contentOffsetToCenterVideoForScrollViewState:(struct FBScrollViewState)arg1;
- (void)_hideExplanationTimerFired:(id)arg1;
- (void)_didFinishBlocking;
- (BOOL)isBlocking;
- (void)didStartPlayingScrollBlockedVideoController:(id)arg1;
- (void)setScrollView:(id)arg1 blockToPositions:(id)arg2 skipInterval:(double)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

