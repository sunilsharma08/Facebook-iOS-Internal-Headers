//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFacebookAPIRequest.h"

@class FBRequestDeviceAPIContext, NSArray, NSMutableArray, NSString;

@interface FBGraphBatchRequest : FBFacebookAPIRequest
{
    NSMutableArray *_requests;
    BOOL _requireAllRequestsToSucceed;
    BOOL _flush;
    BOOL _rollbackOnFailure;
    CDUnknownBlockType _responseHandlerFactory;
    NSString *_batchName;
    NSString *_callerContext;
    NSString *_batchAppID;
    FBRequestDeviceAPIContext *_deviceAPIContext;
}

@property(retain) FBRequestDeviceAPIContext *deviceAPIContext; // @synthesize deviceAPIContext=_deviceAPIContext;
@property BOOL rollbackOnFailure; // @synthesize rollbackOnFailure=_rollbackOnFailure;
@property BOOL flush; // @synthesize flush=_flush;
@property(copy, nonatomic) NSString *batchAppID; // @synthesize batchAppID=_batchAppID;
@property(readonly, copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) BOOL requireAllRequestsToSucceed; // @synthesize requireAllRequestsToSucceed=_requireAllRequestsToSucceed;
@property(copy, nonatomic) NSString *callerContext; // @synthesize callerContext=_callerContext;
@property(copy, nonatomic) NSString *batchName; // @synthesize batchName=_batchName;
- (void)setResponseHandlerFactory:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)responseHandlerFactory;
- (void).cxx_destruct;
- (id)methodForSignature;
- (unsigned int)compressionMethod;
- (BOOL)useMultipartForm;
- (id)parameters;
- (id)relativePath;
- (id)host;
- (id)httpMethod;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)requestForUDPPriming;
- (id)description;
- (void)addGraphRequest:(id)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequests:(id)arg1 requireAllRequestsToSucceed:(BOOL)arg2;
- (id)initWithRequest:(id)arg1 requireAllRequestsToSucceed:(BOOL)arg2;

@end

