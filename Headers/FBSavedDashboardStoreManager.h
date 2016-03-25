//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBPersistentCacheExperimentContext, FBUserPreferences, FBUserSession, NSMutableDictionary;

@interface FBSavedDashboardStoreManager : NSObject
{
    FBUserSession *_session;
    NSMutableDictionary *_storeDictionary;
    FBPersistentCacheExperimentContext *_experimentContext;
    FBUserPreferences *_preferences;
}

- (void).cxx_destruct;
- (id)_connectionWithTargetID:(id)arg1 session:(id)arg2;
- (id)_noResultsKeyForSection:(id)arg1;
- (BOOL)hasNoResultsStateForSection:(id)arg1;
- (void)recordNoResultsForSection:(id)arg1 hasNoResults:(BOOL)arg2;
- (void)prefetchEdgesForSection:(id)arg1;
- (id)savedDashboardStoreForSection:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

