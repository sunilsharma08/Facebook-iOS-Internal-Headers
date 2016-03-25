//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBRotatable <NSObject>
@property(readonly, nonatomic) float currentRotation;

@optional
- (void)applyOrientationRotation:(float)arg1 withProgress:(float)arg2;
- (void)didFinishRotationToOrientation:(int)arg1 fromOrientation:(int)arg2;
- (void)willBeginRotationToOrientation:(int)arg1 fromOrientation:(int)arg2;
@end

