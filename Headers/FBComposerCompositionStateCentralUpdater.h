//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBComposerCompositionState, FBComposerCompositionStateChangedListenerAnnouncer;

@interface FBComposerCompositionStateCentralUpdater : NSObject
{
    FBComposerCompositionStateChangedListenerAnnouncer *_announcer;
    FBComposerCompositionState *_currentCompositionState;
    FBComposerCompositionState *_previousCompositionState;
}

- (void).cxx_destruct;
- (void)updatedComposerCompositionState:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

@end

