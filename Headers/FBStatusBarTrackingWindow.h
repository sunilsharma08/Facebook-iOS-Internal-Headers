//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIApplication, UIView;
@protocol FBStatusBarTrackingWindowDelegate;

@interface FBStatusBarTrackingWindow : UIWindow
{
    UIView *_outerView;
    struct CGRect _lastStatusBarFrame;
    int _lastStatusBarOrientation;
    UIWindow *_baseWindow;
    UIView *_containerView;
    UIApplication *_application;
    double _lastTimestamp;
    unsigned int _tapSupport;
    id <FBStatusBarTrackingWindowDelegate> _tapDelegate;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <FBStatusBarTrackingWindowDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (struct CGRect)boundsFromCurrentOrientation;
- (void)_statusBarWillChangeOrientation:(id)arg1;
- (void)_statusBarWillChangeFrame:(id)arg1;
- (void)_layoutWithStatusBarFrame:(struct CGRect)arg1 statusBarOrientation:(int)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)makeKeyWindow;
- (void)dealloc;
- (id)initWithBaseWindow:(id)arg1 application:(id)arg2 tapSupport:(unsigned int)arg3;

@end

