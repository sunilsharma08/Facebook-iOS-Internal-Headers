//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, FBPlacesQueryParameters, FBPlacesTilesDownloadRequest, FBUserSession;
@protocol FBPlacesDownloaderDelegate;

@interface FBPlacesDownloader : NSObject
{
    CLLocation *_userLocation;
    id _tilesDownloadRequestToken;
    struct CGSize _mapViewSize;
    FBPlacesQueryParameters *_currentQueryParams;
    id <FBPlacesDownloaderDelegate> _delegate;
    FBUserSession *_session;
    FBPlacesTilesDownloadRequest *_tilesDownloadRequest;
}

@property(retain, nonatomic) FBPlacesTilesDownloadRequest *tilesDownloadRequest; // @synthesize tilesDownloadRequest=_tilesDownloadRequest;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <FBPlacesDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelRequest;
- (BOOL)hasPendingRequest;
- (CDUnknownBlockType)_loadNearbyPlacesDownloadResponseBlockForParameters:(id)arg1;
- (void)_loadNearbyPlacesWithQueryParameters:(id)arg1 cachedTileIDs:(id)arg2 userLocation:(id)arg3 withConnectedFriends:(BOOL)arg4 regionHintRequestType:(int)arg5;
- (void)loadNearbyPlacesWithQueryParameters:(id)arg1 cachedTileIDs:(id)arg2 userLocation:(id)arg3 withConnectedFriends:(BOOL)arg4 regionHintRequestType:(int)arg5 mapViewSize:(struct CGSize)arg6;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

