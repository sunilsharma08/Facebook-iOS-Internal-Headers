//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerCompositionStateChangedListener-Protocol.h"
#import "FBComposerLifecycleListener-Protocol.h"

@class NSString;
@protocol FBClock, FBComposerLogger;

@interface FBComposerLifecycleLogger : NSObject <FBComposerLifecycleListener, FBComposerCompositionStateChangedListener>
{
    id <FBClock> _clock;
    BOOL _hasLoggedEventIndicatingThatUserHasWrittenTextIntoComposer;
    id <FBComposerLogger> _logger;
}

- (void).cxx_destruct;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (void)composerPostComposedWithCompositionState:(id)arg1;
- (void)composerDisplayedWithCompositionState:(id)arg1;
- (void)composerCreatedWithInitialCompositionState:(id)arg1;
- (void)composerCancelledWithCompositionState:(id)arg1;
- (id)initWithLogger:(id)arg1 clock:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

