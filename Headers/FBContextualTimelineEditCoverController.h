//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBTimelineEditCoverController.h"

@class FBContextualTimelineHeaderConfiguration, FBMemPerson, FBProfileToolbox, FBScenePath;

@interface FBContextualTimelineEditCoverController : FBTimelineEditCoverController
{
    FBMemPerson *_person;
    FBContextualTimelineHeaderConfiguration *_configuration;
    FBScenePath *_scenePath;
    FBProfileToolbox *_toolbox;
}

- (void).cxx_destruct;
- (void)_performBackAction:(id)arg1;
- (float)headerOverlayYOffset;
- (id)headerDataSource;
- (id)initWithPerson:(id)arg1 session:(id)arg2 scenePath:(id)arg3 coverPhoto:(id)arg4 isDirectEdit:(BOOL)arg5 configuration:(id)arg6 toolbox:(id)arg7;

@end

