//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBGraphQLMemResponseCache, FBGraphQLQuery, FBGraphQLService, FBScenePath;
@protocol FBPresenceIconCategoryDataSourceListener, OS_dispatch_queue;

@interface FBPresenceIconCategoryDataSource : NSObject
{
    FBScenePath *_scenePath;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    id <FBPresenceIconCategoryDataSourceListener> _listener;
    FBGraphQLQuery *_query;
    FBGraphQLMemResponseCache *_cache;
    FBGraphQLService *_graphQLService;
    NSObject<OS_dispatch_queue> *_workerQueue;
    FBPresenceIconCategoryDataSource *_self;
}

- (void).cxx_destruct;
- (void)processError:(id)arg1;
- (void)processResponse:(id)arg1;
- (void)didFinishCachingResponse:(id)arg1 error:(id)arg2;
- (void)didReceiveDownloadError:(id)arg1;
- (void)didReceiveDownloadResponse:(id)arg1;
- (void)startDownload;
- (void)didReceiveCacheResponse:(id)arg1 downloadDate:(id)arg2;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 listenerQueue:(id)arg3 listener:(id)arg4;

@end

