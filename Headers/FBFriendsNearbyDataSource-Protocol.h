//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFNSettingsDataController, NSArray, NSOrderedSet, NSString;
@protocol FBFriendsNearbyDataController;

@protocol FBFriendsNearbyDataSource <NSObject>
- (void)removePersonWithFBID:(NSString *)arg1;
- (void)reloadFriendsNearbyData:(BOOL)arg1;
- (FBFNSettingsDataController *)settingsDataController;
- (id <FBFriendsNearbyDataController>)dataController;
- (NSOrderedSet *)outPingSet;
- (NSOrderedSet *)inPingSet;
- (NSArray *)dashboardSections;
@end

