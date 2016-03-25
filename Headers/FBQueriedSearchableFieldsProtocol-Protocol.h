//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBModelObjectProtocol-Protocol.h"

@class FBMemEventMembersConnection, FBMemFocusedPhoto, FBMemFriendsWhoLikeConnection, FBMemGroup, FBMemGroupMembersConnection, FBMemImage, FBMemLastActiveMessagesStatus, FBMemLocation, FBMemMultiBackgroundIcon, FBMemMutualFriendsConnection, FBMemPageLikersConnection, FBMemPageVisitsConnection, FBMemStreetAddress, NSArray, NSNumber, NSString;

@protocol FBQueriedSearchableFieldsProtocol <FBModelObjectProtocol>
- (NSArray *)viewerProfilePermissions;
- (NSString *)viewerJoinState;
- (NSString *)urlString;
- (int)unreadCountValue;
- (NSNumber *)unreadCount;
- (NSString *)superCategoryType;
- (BOOL)requiresAdminMembershipApprovalValue;
- (NSNumber *)requiresAdminMembershipApproval;
- (NSArray *)redirectionInfo;
- (NSString *)queryFunction;
- (FBMemImage *)profilePicture74;
- (FBMemImage *)profilePicture50;
- (FBMemImage *)profilePicture130;
- (FBMemImage *)profilePicture;
- (NSString *)placeType;
- (FBMemPageVisitsConnection *)pageVisits;
- (FBMemPageLikersConnection *)pageLikers;
- (NSString *)name;
- (FBMemMutualFriendsConnection *)mutualFriends;
- (FBMemLocation *)location;
- (FBMemLastActiveMessagesStatus *)lastActiveMessagesStatus;
- (BOOL)isViewerFriendValue;
- (NSNumber *)isViewerFriend;
- (BOOL)isVerifiedValue;
- (NSNumber *)isVerified;
- (BOOL)isOwnedValue;
- (NSNumber *)isOwned;
- (BOOL)isForsaleGroupValue;
- (NSNumber *)isForsaleGroup;
- (FBMemFocusedPhoto *)group_icon_cover_photo;
- (FBMemGroupMembersConnection *)groupMembers;
- (FBMemMultiBackgroundIcon *)groupIcon;
- (NSString *)graphQLID;
- (NSString *)friendshipStatus;
- (FBMemFriendsWhoLikeConnection *)friendsWhoLike;
- (BOOL)expressedAsPlaceValue;
- (NSNumber *)expressedAsPlace;
- (FBMemEventMembersConnection *)eventMembers;
- (BOOL)doesViewerLikeValue;
- (NSNumber *)doesViewerLike;
- (NSString *)categoryType;
- (NSArray *)categoryNames;
- (BOOL)canViewerJoinValue;
- (NSNumber *)canViewerJoin;
- (NSString *)alternateName;
- (FBMemGroup *)adminAwareGroup;
- (FBMemStreetAddress *)address;
@end

