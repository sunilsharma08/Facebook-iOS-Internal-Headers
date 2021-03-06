//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMusicPlayerListener-Protocol.h"

@class FBMusicPreviewFullCellView, NSString;

@interface FBMusicPreviewFullCellViewUpdater : NSObject <FBMusicPlayerListener>
{
    FBMusicPreviewFullCellView *_view;
}

- (void).cxx_destruct;
- (void)musicPlayer:(id)arg1 failedPlaying:(id)arg2 withError:(id)arg3;
- (void)musicPlayer:(id)arg1 completedPlaying:(id)arg2;
- (void)musicPlayer:(id)arg1 stoppedPlaying:(id)arg2;
- (void)musicPlayer:(id)arg1 resumedPlaying:(id)arg2;
- (void)musicPlayer:(id)arg1 pausedPlaying:(id)arg2;
- (void)musicPlayer:(id)arg1 isPlaying:(id)arg2 currentTime:(float)arg3 duration:(float)arg4;
- (void)musicPlayer:(id)arg1 beganBuffering:(id)arg2;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

