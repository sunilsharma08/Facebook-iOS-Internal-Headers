//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemProfileTileSectionsConnection, FBMemTimelineSectionsConnection;
@protocol FBTimelineHeaderModelController;

@protocol FBTimelineHeaderModelControllerDelegate <NSObject>
- (void)timelineHeaderModelController:(id <FBTimelineHeaderModelController>)arg1 didDownloadProfileTileSections:(FBMemProfileTileSectionsConnection *)arg2;
- (void)timelineHeaderModelController:(id <FBTimelineHeaderModelController>)arg1 didDownloadTimelineSections:(FBMemTimelineSectionsConnection *)arg2;
- (void)timelineHeaderModelControllerDidUpdate:(id <FBTimelineHeaderModelController>)arg1;
@end

