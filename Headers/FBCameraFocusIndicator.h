//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink;

@interface FBCameraFocusIndicator : UIView
{
    CADisplayLink *_reviewDisplayLink;
    int _currentAnimationFrame;
    BOOL _shouldStopAnimating;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_completeAnimation;
- (void)_stopRenderLoop;
- (void)_startRenderLoop;
- (void)stopAnimating;
- (void)startAnimatingAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

@end

