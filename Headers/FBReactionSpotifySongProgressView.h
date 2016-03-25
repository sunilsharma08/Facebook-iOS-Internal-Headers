//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

@interface FBReactionSpotifySongProgressView : UIView
{
    double _initialTime;
    double _initialPosition;
    double _duration;
    NSTimer *_timer;
    CDUnknownBlockType _songCompletionHandler;
    BOOL _animating;
}

@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)timerDidFire;
- (float)_progress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithPosition:(double)arg1 duration:(double)arg2 songFinishedHandler:(CDUnknownBlockType)arg3;

@end

