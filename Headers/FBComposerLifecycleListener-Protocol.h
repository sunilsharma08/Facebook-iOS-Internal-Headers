//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerCompositionState;

@protocol FBComposerLifecycleListener <NSObject>
- (void)composerPostComposedWithCompositionState:(FBComposerCompositionState *)arg1;
- (void)composerDisplayedWithCompositionState:(FBComposerCompositionState *)arg1;
- (void)composerCreatedWithInitialCompositionState:(FBComposerCompositionState *)arg1;
- (void)composerCancelledWithCompositionState:(FBComposerCompositionState *)arg1;
@end

