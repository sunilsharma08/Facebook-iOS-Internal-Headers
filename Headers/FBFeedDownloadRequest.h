//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLPagedDownloadRequest.h"

#import "FBFeedClientQueryTracking-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface FBFeedDownloadRequest : FBGraphQLPagedDownloadRequest <FBFeedClientQueryTracking>
{
    int _feedType;
    NSDictionary *_queryOptions;
    struct FBDeviceBatteryInfo _batteryInfo;
    unsigned int _refreshMode;
    NSArray *_mostRecentVPVs;
    NSString *_prePrimedChannelID;
    NSString *_clientQueryID;
}

@property(readonly, copy, nonatomic) NSString *clientQueryID; // @synthesize clientQueryID=_clientQueryID;
- (void).cxx_destruct;
- (id)networkRequest;
- (BOOL)cachedQueryEnabled;
- (id)newQueryWithCursor:(id)arg1;
- (id)newFragmentBasedQueryForCursor:(id)arg1;
- (id)targetIDForBatchRequestRelativeAfterCursor;
- (id)initWithTargetID:(id)arg1 feedType:(int)arg2 callbackPerformer:(id)arg3 queryOptions:(id)arg4 batteryInfo:(struct FBDeviceBatteryInfo)arg5 refreshMode:(unsigned int)arg6 mostRecentVPVs:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

