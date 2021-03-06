//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class CLLocation, FBUserSession, NSArray, NSString;

@interface FBPlacesNearbySearchDataSource : NSObject <UITableViewDataSource>
{
    NSArray *_placeResults;
    NSArray *_topicResults;
    BOOL _hasUserLocationAccess;
    CLLocation *_userLocation;
    FBUserSession *_session;
    unsigned int _searchMode;
    NSArray *_citiesResults;
}

@property(nonatomic) BOOL hasUserLocationAccess; // @synthesize hasUserLocationAccess=_hasUserLocationAccess;
@property(copy, nonatomic) NSArray *citiesResults; // @synthesize citiesResults=_citiesResults;
@property(nonatomic) unsigned int searchMode; // @synthesize searchMode=_searchMode;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
- (void).cxx_destruct;
- (id)_createCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_cellReuseIdentifierForCellInIndexPath:(id)arg1;
- (id)cityIDs;
- (id)placeIDs;
- (unsigned int)numberOfPlaces;
- (unsigned int)numberOfSuggestions;
- (void)updateWithTopicResults:(id)arg1 placeResults:(id)arg2;
- (BOOL)resultsEmpty;
- (id)resultForRowAtIndexPath:(id)arg1;
- (unsigned int)resultTypeForRowAtIndexPath:(id)arg1;
- (id)_pictureViewWithPlace:(id)arg1 session:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithUserLocation:(id)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

