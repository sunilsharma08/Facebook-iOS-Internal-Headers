//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBScenePath, FBUserSession;
@protocol FBPresenceSettingsFetcherListener;

@interface FBPresenceSettingsFetcher : NSObject
{
    FBUserSession *_session;
    FBScenePath *_scenePath;
    id <FBPresenceSettingsFetcherListener> _listener;
}

@property(copy, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
- (void).cxx_destruct;
- (void)didReceiveGraphQLError:(id)arg1;
- (void)didReceiveGraphQLResponse:(id)arg1;
- (void)fetchCurrentSettings;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 listener:(id)arg3;

@end

