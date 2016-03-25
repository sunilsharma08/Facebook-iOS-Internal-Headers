//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBOrientationState;

@protocol FBOrientationStateDelegate <NSObject>

@optional
- (float)rotationForInterfaceOrientation:(int)arg1;
- (int)orientationState:(FBOrientationState *)arg1 interfaceOrientationForDeviceOrientation:(int)arg2;
- (BOOL)orientationState:(FBOrientationState *)arg1 supportsDeviceOrientation:(int)arg2;
- (BOOL)orientationState:(FBOrientationState *)arg1 shouldUpdateStatusBarToInterfaceOrientation:(int)arg2;
- (BOOL)orientationState:(FBOrientationState *)arg1 shouldBlockChangeToInterfaceOrientation:(int)arg2;
- (void)orientationState:(FBOrientationState *)arg1 didUpdateRotationToOrientation:(int)arg2 fromOrientation:(int)arg3 progress:(float)arg4;
- (void)orientationState:(FBOrientationState *)arg1 willBeginRotationToOrientation:(int)arg2 fromOrientation:(int)arg3 animationConfig:(CDStruct_29228278)arg4;
- (void)orientationState:(FBOrientationState *)arg1 didFinishRotationToOrientation:(int)arg2 fromOrientation:(int)arg3;
- (void)orientationState:(FBOrientationState *)arg1 didChangeToInterfaceOrientation:(int)arg2;
@end

