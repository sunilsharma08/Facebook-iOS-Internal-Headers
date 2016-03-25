//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBEntityCardsCollectionPageDownloading-Protocol.h"
#import "FBInfiniteHScrollDataSourceListener-Protocol.h"

@class FBInfiniteHScrollEntityCardsPageDownloaderCurrentLoadContext, FBUserSession, NSString;
@protocol FBInfiniteHScrollDataSourceProtocol;

@interface FBInfiniteHScrollEntityCardsPageDownloader : NSObject <FBInfiniteHScrollDataSourceListener, FBEntityCardsCollectionPageDownloading>
{
    FBUserSession *_session;
    id <FBInfiniteHScrollDataSourceProtocol> _dataSource;
    FBInfiniteHScrollEntityCardsPageDownloaderCurrentLoadContext *_loadContext;
    BOOL _hasMoreObjects;
}

- (void).cxx_destruct;
- (id)_entitiesFromGraphQLNodeQueryResponse:(id)arg1;
- (id)_queryToDownloadEntityIDs:(id)arg1 contextItemCount:(unsigned int)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5;
- (void)dataSourceDidUpdateElement:(id)arg1 allObjects:(id)arg2;
- (void)dataSource:(id)arg1 didFailLoadingWithError:(id)arg2 isReloading:(BOOL)arg3;
- (void)dataSource:(id)arg1 didFinishLoadingWithAllObjects:(id)arg2 newObjectsRange:(struct _NSRange)arg3 hasMoreObjects:(BOOL)arg4 isReloading:(BOOL)arg5;
- (void)dataSourceDidStartLoadMoreObjects:(id)arg1;
- (void)loadEntitiesInScrollDirection:(unsigned int)arg1 pageSize:(unsigned int)arg2 contextItemCount:(unsigned int)arg3 displaySurface:(id)arg4 displaySurfaceSourceId:(id)arg5 location:(id)arg6 loadBlock:(CDUnknownBlockType)arg7;
- (BOOL)canLoadEntitiesInScrollDirection:(unsigned int)arg1 pageSize:(unsigned int *)arg2;
- (void)loadEntitiesForIDs:(id)arg1 contextItemCount:(unsigned int)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5 enableBatching:(BOOL)arg6 initialEntityIndex:(unsigned int)arg7 batchLoadBlock:(CDUnknownBlockType)arg8;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 dataSource:(id)arg2 hasMoreObjects:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

