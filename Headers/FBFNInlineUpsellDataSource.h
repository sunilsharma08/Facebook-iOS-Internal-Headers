//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFNFacepileViewDataSource-Protocol.h"
#import "FBFNInlineUpsellDataFetcher-Protocol.h"

@class FBScenePath, FBUserSession, NSArray, NSDate, NSString;
@protocol FBFNInlineUpsellNuxManager;

@interface FBFNInlineUpsellDataSource : NSObject <FBFNInlineUpsellDataFetcher, FBFNFacepileViewDataSource>
{
    FBUserSession *_session;
    FBScenePath *_scenePath;
    NSDate *_lastDownloadDate;
    id <FBFNInlineUpsellNuxManager> _nuxManager;
    BOOL _isLoaded;
    NSArray *_people;
    NSString *_currentCity;
    unsigned int _totalCount;
}

@property(nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, copy, nonatomic) NSString *currentCity; // @synthesize currentCity=_currentCity;
@property(copy, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (void)presentNuxForInlineUpsellView:(id)arg1;
- (BOOL)_shouldFetchCache;
- (id)facepileViewImageDownloader;
- (id)facepileView:(id)arg1 firstNamePersonAtIndex:(unsigned int)arg2;
- (id)facepileView:(id)arg1 imageURLForPersonAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPeopleInFacepile:(id)arg1;
- (unsigned int)numberOfFriendsWithNearbyFriends:(id)arg1;
- (void)fetchUpsellInfo:(CDUnknownBlockType)arg1;
- (void)_processUpsellResponse:(id)arg1 downloadDate:(id)arg2;
- (void)_fetchUpsellInfo:(double)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)prefetchUpsellInfo;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 nuxManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

