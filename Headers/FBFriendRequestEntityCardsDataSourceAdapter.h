//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBEntityCardsPageDownloadRequestProvider-Protocol.h"

@class FBUserSession, NSString;

@interface FBFriendRequestEntityCardsDataSourceAdapter : NSObject <FBEntityCardsPageDownloadRequestProvider>
{
    FBUserSession *_session;
}

+ (id)entityCardDataSourceForPersons:(id)arg1 initialSelectedIndex:(unsigned int)arg2 session:(id)arg3 tailPageInfo:(id)arg4;
- (void).cxx_destruct;
- (id)requestToDownloadPageInScrollDirection:(unsigned int)arg1 pageInfo:(id)arg2 pageSize:(unsigned int)arg3 contextItemCount:(unsigned int)arg4 displaySurface:(id)arg5 displaySurfaceSourceId:(id)arg6 location:(id)arg7;
- (id)requestToDownloadEntityIDs:(id)arg1 contextItemCount:(unsigned int)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5;
- (id)entityKeyPath;
- (id)pageInfoKeyPath;
- (id)initWithSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

