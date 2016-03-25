//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGraphQLDownloadRequest, NSDictionary, NSString;
@protocol FBConnectionPageProtocol, FBGraphQLConnectionSyncStoreProtocol;

@protocol FBGraphQLConnectionSyncStoreRequestProvider <NSObject>
- (const struct FBGraphQLFieldSet *)edgeFieldSet;
- (id <FBConnectionPageProtocol>)connectionPageForResponse:(NSDictionary *)arg1;
- (FBGraphQLDownloadRequest *)connectionSyncStore:(id <FBGraphQLConnectionSyncStoreProtocol>)arg1 findRequest:(NSString *)arg2;
- (FBGraphQLDownloadRequest *)connectionSyncStore:(id <FBGraphQLConnectionSyncStoreProtocol>)arg1 previousRequestBefore:(NSString *)arg2;
- (FBGraphQLDownloadRequest *)connectionSyncStore:(id <FBGraphQLConnectionSyncStoreProtocol>)arg1 nextRequestAfter:(NSString *)arg2;
- (NSString *)requestProviderID;
@end

