//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemProfileTileSectionsConnection, FBMemTimelineSectionsConnection, NSArray, NSString;
@protocol FBAvatarProtocol, FBTimelineDataController;

@protocol FBTimelineDataControllerDelegate <NSObject>
- (void)timelineDataController:(id <FBTimelineDataController>)arg1 didDownloadTimelineSections:(FBMemTimelineSectionsConnection *)arg2;
- (void)timelineDataController:(id <FBTimelineDataController>)arg1 targetDidChange:(id <FBAvatarProtocol>)arg2;
- (void)timelineDataController:(id <FBTimelineDataController>)arg1 targetDidUpdate:(id <FBAvatarProtocol>)arg2;
- (void)timelineDataControllerDidFailSyncing:(id <FBTimelineDataController>)arg1;
- (void)timelineDataControllerDidFinishSyncing:(id <FBTimelineDataController>)arg1;
- (NSString *)logName;
- (NSArray *)timelineHeaderGraphQLQueriesForTargetID:(NSString *)arg1;

@optional
- (void)timelineDataController:(id <FBTimelineDataController>)arg1 didDownloadProfileTileSections:(FBMemProfileTileSectionsConnection *)arg2;
- (unsigned int)timelineHeaderIndexOfGraphQLQueryForConsistentValuesUpdate;
@end

