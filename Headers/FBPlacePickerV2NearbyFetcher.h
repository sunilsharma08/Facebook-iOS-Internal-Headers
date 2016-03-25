//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCheckinRecentPlacesControllerDelegate-Protocol.h"
#import "FBLocationAccessManagerDelegate-Protocol.h"
#import "FBPlacePickerPrefetchControllerDelegate-Protocol.h"

@class CLLocation, FBCheckinRecentPlacesController, FBCheckinSearchController, FBLocationAccessManager, FBNearbyDataSet, FBPlacePickerPrefetchController, FBUserSession, NSString, NSTimer;
@protocol FBLocationManagerSubscription, FBPlacePickerNearbyFetcherPrefetchDelegate, FBPlacePickerV2NearbyFetcherDelegate;

@interface FBPlacePickerV2NearbyFetcher : NSObject <FBLocationAccessManagerDelegate, FBPlacePickerPrefetchControllerDelegate, FBCheckinRecentPlacesControllerDelegate>
{
    FBUserSession *_session;
    FBNearbyDataSet *_nearbyDataset;
    CLLocation *_location;
    FBLocationAccessManager *_locationAccessManager;
    FBCheckinSearchController *_searchController;
    NSString *_query;
    int _searchType;
    id <FBLocationManagerSubscription> _locationSubscription;
    NSTimer *_locationFallbackTimer;
    NSTimer *_resultsFallbackTimer;
    unsigned int _searchHandle;
    FBPlacePickerPrefetchController *_prefetchController;
    BOOL _fetchingPlaces;
    BOOL _fetchingLocation;
    BOOL _requestedFetch;
    FBCheckinRecentPlacesController *_recentPlacesController;
    FBNearbyDataSet *_recentPlaces;
    id <FBPlacePickerV2NearbyFetcherDelegate> _delegate;
    id <FBPlacePickerNearbyFetcherPrefetchDelegate> _prefetchDelegate;
    double _querylessSearchTimeout;
}

@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(nonatomic) double querylessSearchTimeout; // @synthesize querylessSearchTimeout=_querylessSearchTimeout;
@property(nonatomic) __weak id <FBPlacePickerNearbyFetcherPrefetchDelegate> prefetchDelegate; // @synthesize prefetchDelegate=_prefetchDelegate;
@property(nonatomic) __weak id <FBPlacePickerV2NearbyFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_lastPictureWithLocationForAttachments:(id)arg1;
- (void)_endRequests;
- (void)cancelFetch;
- (BOOL)isFetchingPlaces;
- (void)locationAccessManager:(id)arg1 accessDenied:(unsigned int)arg2;
- (void)locationAccessManager:(id)arg1 accessGranted:(id)arg2;
- (void)prefetchController:(id)arg1 didFinishWithError:(id)arg2;
- (void)prefetchController:(id)arg1 didFinishWithNearbyDataSet:(id)arg2;
- (void)recentPlacesController:(id)arg1 didFailToLoadRecentPlacesWithError:(id)arg2;
- (void)recentPlacesController:(id)arg1 didFinishWithRecentPlaces:(id)arg2 loadedFromCache:(BOOL)arg3;
- (BOOL)canAccessLocation;
- (void)requestLocationAccess;
- (void)_searchNearbyPlaces;
- (void)_fetchLocationUseTimeout:(BOOL)arg1;
- (BOOL)_isQueryEmpty:(id)arg1;
- (BOOL)_queryChanged:(id)arg1;
- (void)_fallbackOnSearchResults;
- (void)_fetchNearbyPlacesWithoutRefresh;
- (void)fetchNearbyPlacesWithQuery:(id)arg1 shouldRefreshLocation:(BOOL)arg2;
- (void)clearNearbyAndLocationCache;
- (void)clearNearbyCache;
- (void)prefetchResults;
- (void)_updateWithPhoto:(id)arg1;
- (void)updateWithPhotoAttachments:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 searchType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

