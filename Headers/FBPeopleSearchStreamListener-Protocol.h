//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemFriendsCenterSearchResultsConnection, FBMemPerson, FBPeopleSearchStream, NSError;

@protocol FBPeopleSearchStreamListener <NSObject>
- (void)PeopleSearchStream:(FBPeopleSearchStream *)arg1 didUpdateSearchResult:(FBMemPerson *)arg2 atIndex:(unsigned int)arg3;
- (void)PeopleSearchStream:(FBPeopleSearchStream *)arg1 didFailLoadingSearchResults:(NSError *)arg2;
- (void)PeopleSearchStream:(FBPeopleSearchStream *)arg1 didFinishLoadingPagedSearchResults:(FBMemFriendsCenterSearchResultsConnection *)arg2;
@end

