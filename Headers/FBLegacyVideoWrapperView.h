//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBLegacyFeedVideoPlayerView;

@interface FBLegacyVideoWrapperView : UIView
{
    FBLegacyFeedVideoPlayerView *_videoView;
    BOOL _isRelinquishable;
    CDUnknownBlockType _isRelinquishableChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType isRelinquishableChangedHandler; // @synthesize isRelinquishableChangedHandler=_isRelinquishableChangedHandler;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, nonatomic) BOOL isRelinquishable;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
@property(retain, nonatomic) FBLegacyFeedVideoPlayerView *videoView;

@end

