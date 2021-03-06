//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBEntityCardsCollectionPageDownloading-Protocol.h"

@class FBUserSession, NSMutableArray, NSString;

@interface FBPYMKEntityCardsPageDownloader : NSObject <FBEntityCardsCollectionPageDownloading>
{
    FBUserSession *_session;
    NSMutableArray *_entityIDs;
    BOOL _hasMoreSuggestions;
    unsigned int _transactionID;
}

- (void).cxx_destruct;
- (id)_entitiesFromGraphQLNodeQueryResponse:(id)arg1;
- (id)_entityIDsFromPYMKFetchResponse:(id)arg1;
- (void)_processPYMKFetchResponse:(id)arg1 transactionID:(unsigned int)arg2 contextItemCount:(unsigned int)arg3 displaySurface:(id)arg4 displaySurfaceSourceId:(id)arg5 location:(id)arg6 loadBlock:(CDUnknownBlockType)arg7;
- (id)requestToDownloadEntityIDs:(id)arg1 contextItemCount:(unsigned int)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5;
- (void)loadEntitiesInScrollDirection:(unsigned int)arg1 pageSize:(unsigned int)arg2 contextItemCount:(unsigned int)arg3 displaySurface:(id)arg4 displaySurfaceSourceId:(id)arg5 location:(id)arg6 loadBlock:(CDUnknownBlockType)arg7;
- (BOOL)canLoadEntitiesInScrollDirection:(unsigned int)arg1 pageSize:(unsigned int *)arg2;
- (void)loadEntitiesForIDs:(id)arg1 contextItemCount:(unsigned int)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5 enableBatching:(BOOL)arg6 initialEntityIndex:(unsigned int)arg7 batchLoadBlock:(CDUnknownBlockType)arg8;
- (id)initWithSession:(id)arg1 initialEntities:(id)arg2 hasMoreSuggestions:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

