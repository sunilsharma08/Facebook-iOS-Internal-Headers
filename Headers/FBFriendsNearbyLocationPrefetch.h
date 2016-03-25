//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation;
@protocol FBFriendsNearbyLocationPrefetchDelegate, FBLocationManagerSubscription;

@interface FBFriendsNearbyLocationPrefetch : NSObject
{
    id <FBLocationManagerSubscription> _pendingLocation;
    unsigned int _interval;
    unsigned int _accuracy;
    BOOL _isFetching;
    CLLocation *_lastLocation;
    id <FBFriendsNearbyLocationPrefetchDelegate> _delegate;
}

@property(nonatomic) BOOL isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) __weak id <FBFriendsNearbyLocationPrefetchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
- (void).cxx_destruct;
- (BOOL)_isGoodLocation:(id)arg1;
- (id)_getBestLocation:(id)arg1 andLocation:(id)arg2;
- (void)_fetchLocation;
- (void)cancelFetchingLocation;
- (BOOL)isFetchingLocation;
- (void)startFetchingLocationWithSignificantTimeInterval:(unsigned int)arg1 accuracy:(unsigned int)arg2 timeoutSeconds:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

