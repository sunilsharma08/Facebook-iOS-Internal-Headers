//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBProfileFriendListStream, NSArray, NSDictionary, NSError;

@protocol FBProfileFriendListStreamDelegate
- (void)profileFriendListStream:(FBProfileFriendListStream *)arg1 didFailLoadingFriendsArrayWithError:(NSError *)arg2;
- (void)profileFriendListStream:(FBProfileFriendListStream *)arg1 didFinishLoadingFriendsArray:(NSArray *)arg2;
- (void)profileFriendListStream:(FBProfileFriendListStream *)arg1 didFailLoadingFullListWithError:(NSError *)arg2;
- (void)profileFriendListStream:(FBProfileFriendListStream *)arg1 didFinishLoadingFullListWithResponse:(NSDictionary *)arg2;
@end

