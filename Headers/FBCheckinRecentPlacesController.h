//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBInvalidating-Protocol.h"
#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBCheckinRecentPlacesDownloadRequest, FBNearbyDataSet, FBUserSession, NSString;
@protocol FBCheckinRecentPlacesControllerDelegate;

@interface FBCheckinRecentPlacesController : NSObject <FBNetworkerRequestDelegate, FBInvalidating>
{
    FBCheckinRecentPlacesDownloadRequest *_downloadRequest;
    FBUserSession *_session;
    FBNearbyDataSet *_recentPlacesDataSet;
    BOOL _invalidated;
    id <FBCheckinRecentPlacesControllerDelegate> _delegate;
}

+ (void)_parseFBCheckingRecentPlacesQueryForPerson:(id)arg1 dataSet:(id)arg2;
@property(nonatomic) __weak id <FBCheckinRecentPlacesControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)_setRecentPlacesFromMemModelResponse:(id)arg1 cached:(BOOL)arg2;
- (void)fetchRecentPlaces;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

