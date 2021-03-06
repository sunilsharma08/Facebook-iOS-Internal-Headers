//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBModelObjectProtocol-Protocol.h"

@class FBMemEventMembersConnection, FBMemFlowableTaggableActivity, FBMemFocusedPhoto, FBMemFriendsWhoLikeConnection, FBMemFriendsWhoVisitedConnection, FBMemImage, FBMemLocation, FBMemMetapageEventsHereConnection, FBMemPage, FBMemPageLikersConnection, FBMemPageRecommendationsConnection, FBMemPageStarRatersConnection, FBMemPageVisitsConnection, FBMemPhoto, FBMemPlacePageReactionUnitsConnection, FBMemRating, FBMemStreetAddress, FBMemTimelineAppCollection, NSArray, NSNumber, NSString;
@protocol FBQueriedPlaceFieldsProtocol;

@protocol FBQueriedPlaceFieldsProtocol <FBModelObjectProtocol>
- (NSArray *)viewerProfilePermissions;
- (NSString *)urlString;
- (NSString *)superCategoryType;
- (NSArray *)spotlightLocalsSnippets;
- (BOOL)shouldShowReviewsOnProfileValue;
- (NSNumber *)shouldShowReviewsOnProfile;
- (NSArray *)shortCategoryNames;
- (FBMemTimelineAppCollection *)savedCollection;
- (NSArray *)representativePlacePhotos;
- (NSArray *)redirectionInfo;
- (FBMemPageRecommendationsConnection *)recommendationsByViewerFriends;
- (FBMemPageStarRatersConnection *)raters;
- (BOOL)profilePictureIsSilhouetteValue;
- (NSNumber *)profilePictureIsSilhouette;
- (FBMemImage *)profilePicture74;
- (FBMemImage *)profilePicture50;
- (FBMemImage *)profilePicture320;
- (FBMemImage *)profilePicture180;
- (FBMemImage *)profilePicture;
- (FBMemPhoto *)profilePhoto;
- (NSString *)priceRangeDescription;
- (NSString *)placeType;
- (FBMemPlacePageReactionUnitsConnection *)placeReactionUnits;
- (NSString *)permanentlyClosedStatus;
- (FBMemPage *)parentGeoPage;
- (FBMemPageVisitsConnection *)pageVisits;
- (FBMemPageLikersConnection *)pageLikers;
- (FBMemRating *)overallStarRating;
- (NSString *)name;
- (FBMemMetapageEventsHereConnection *)metapageEventsHere;
- (FBMemLocation *)location;
- (BOOL)isOwnedValue;
- (NSNumber *)isOwned;
- (NSArray *)hours;
- (NSString *)graphQLID;
- (FBMemFriendsWhoVisitedConnection *)friendsWhoVisited;
- (FBMemFriendsWhoLikeConnection *)friendsWhoLike;
- (FBMemFlowableTaggableActivity *)flowableTaggableActivity;
- (BOOL)expressedAsPlaceValue;
- (NSNumber *)expressedAsPlace;
- (id <FBQueriedPlaceFieldsProtocol>)eventPlace;
- (FBMemEventMembersConnection *)eventMembers;
- (BOOL)doesViewerLikeValue;
- (NSNumber *)doesViewerLike;
- (NSString *)descriptionText;
- (FBMemFocusedPhoto *)coverPhoto;
- (NSString *)contextualName;
- (FBMemPage *)city;
- (NSString *)categoryType;
- (NSArray *)categoryNames;
- (FBMemImage *)categoryIcon;
- (BOOL)canViewerRateValue;
- (NSNumber *)canViewerRate;
- (BOOL)canViewerClaimValue;
- (NSNumber *)canViewerClaim;
- (FBMemImage *)backgroundImage;
- (FBMemStreetAddress *)address;
@end

