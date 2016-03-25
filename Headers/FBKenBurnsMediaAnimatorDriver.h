//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "POPAnimationDelegate-Protocol.h"

@class NSString, POPBasicAnimation;
@protocol FBKenBurnsMediaAnimatorDriverDelegate;

@interface FBKenBurnsMediaAnimatorDriver : NSObject <POPAnimationDelegate>
{
    POPBasicAnimation *_animation;
    float _progress;
    float _panDuration;
    BOOL _inReverse;
    id <FBKenBurnsMediaAnimatorDriverDelegate> _delegate;
}

@property(nonatomic) float panDuration; // @synthesize panDuration=_panDuration;
@property(nonatomic) __weak id <FBKenBurnsMediaAnimatorDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)pop_animationDidReachToValue:(id)arg1;
- (float)_panDurationRemaining;
- (float)_progressRemaining;
- (void)_setProgress:(float)arg1;
- (void)_createAnimationIfNecessary;
- (void)pause;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

