//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMemPersonPaginatedFriendListHelper-Protocol.h"

@class FBUserSession, NSString;

@interface FBMemPersonRecentFriendsPaginatedFriendListHelper : NSObject <FBMemPersonPaginatedFriendListHelper>
{
    FBUserSession *_session;
    NSString *_friendListTitle;
    NSString *_friendListType;
    NSString *_friendListSurface;
    int _paginatedRequestLimit;
    int _paginatedBufferSize;
    const struct FBGraphQLFieldSet *_paginatedQueriedFieldSet;
}

@property(nonatomic) const struct FBGraphQLFieldSet *paginatedQueriedFieldSet; // @synthesize paginatedQueriedFieldSet=_paginatedQueriedFieldSet;
@property(nonatomic) int paginatedBufferSize; // @synthesize paginatedBufferSize=_paginatedBufferSize;
@property(nonatomic) int paginatedRequestLimit; // @synthesize paginatedRequestLimit=_paginatedRequestLimit;
@property(copy, nonatomic) NSString *friendListSurface; // @synthesize friendListSurface=_friendListSurface;
@property(copy, nonatomic) NSString *friendListType; // @synthesize friendListType=_friendListType;
@property(copy, nonatomic) NSString *friendListTitle; // @synthesize friendListTitle=_friendListTitle;
- (void).cxx_destruct;
- (id)paginatedQueryForEntityCardsInFriendListForTargetID:(id)arg1 pageInfo:(id)arg2 pageSize:(unsigned int)arg3;
@property(readonly, copy, nonatomic) NSString *entityKeyPath;
@property(readonly, copy, nonatomic) NSString *pageInfoKeyPath;
- (id)convertToMemPeopleArrayForLiteCompleteResponse:(id)arg1;
- (id)getPageInfoForPaginatedResponse:(id)arg1;
- (id)convertToMemPeopleArrayForPaginatedResponse:(id)arg1;
- (id)liteCompleteQueryForFriendListTargetID:(id)arg1;
- (id)paginatedQueryForFriendListTargetID:(id)arg1 andPageInfo:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

