//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDisplayableMediaAnimator-Protocol.h"

@class NSString;

@interface FBDisplayableMediaDefaultAnimator : NSObject <FBDisplayableMediaAnimator>
{
}

- (void)cleanupAnimationGroup:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)animateWithDuration:(double)arg1 animationBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)animateMediaViewOrLayer:(id)arg1 toFrame:(struct CGRect)arg2 withStartingVelocity:(struct CGPoint)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

