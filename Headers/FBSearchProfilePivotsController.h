//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBGraphSearchTypeaheadSessionStatus, FBScenePath, FBSearchContext, FBSearchTypeaheadActivityListenerAnnouncer, FBUserSession, NSArray;

@interface FBSearchProfilePivotsController : NSObject
{
    FBUserSession *_session;
    FBSearchContext *_searchContext;
    FBSearchTypeaheadActivityListenerAnnouncer *_announcer;
    NSArray *_moduleControllers;
    FBGraphSearchTypeaheadSessionStatus *_sessionStatus;
    FBScenePath *_scenePath;
}

- (void).cxx_destruct;
- (void)setupPivotModuleControllers;
- (BOOL)isLoading;
- (id)tableViewDataByInjectingCustomContentWithData:(id)arg1;
- (id)initWithSession:(id)arg1 searchContext:(id)arg2 announcer:(id)arg3 typeaheadSessionStatus:(id)arg4 scenePath:(id)arg5;

@end

