//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFeedSeeFirstTopCoefficientListFetchListenerAnnouncer, FBUserSession, NSArray;

@interface FBFeedSeeFirstTopCoefficientListFetcher : NSObject
{
    FBUserSession *_session;
    int _profileType;
    unsigned int _topFetchCount;
    NSArray *_topCoefficientList;
    FBFeedSeeFirstTopCoefficientListFetchListenerAnnouncer *_announcer;
}

@property(readonly, nonatomic) FBFeedSeeFirstTopCoefficientListFetchListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, copy, nonatomic) NSArray *topCoefficientList; // @synthesize topCoefficientList=_topCoefficientList;
- (void).cxx_destruct;
- (void)graphqlFetchSucceededWithResponse:(id)arg1;
- (void)fetchTopCoefficientList;
- (id)initWithSession:(id)arg1 profileType:(int)arg2 topFetchCount:(unsigned int)arg3;

@end

