//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBAvatarProtocol-Protocol.h"
#import "FBLikeable-Protocol.h"
#import "FBPlaceInFeed-Protocol.h"
#import "FBQueriedActorFieldsProtocol-Protocol.h"
#import "FBQueriedEntityFieldsProtocol-Protocol.h"
#import "FBQueriedMessagingActorFieldsProtocol-Protocol.h"
#import "FBQueriedNodeFieldsProtocol-Protocol.h"
#import "FBQueriedPlaceFieldsProtocol-Protocol.h"
#import "FBQueriedProfileFieldsProtocol-Protocol.h"
#import "FBQueriedSearchSuggestionUnitFieldsProtocol-Protocol.h"
#import "FBQueriedSearchableFieldsProtocol-Protocol.h"
#import "FBQueriedTopicFieldsProtocol-Protocol.h"
#import "FBQueriedVideoChannelFieldsProtocol-Protocol.h"
#import "FBRichStoryEntityActorProtocol-Protocol.h"
#import "FBSubscribable-Protocol.h"
#import "FBTimelineAppCollectionEntityProtocol-Protocol.h"
#import "FBTopicProtocol-Protocol.h"

@class NSString;

@interface FBMemPage : FBMemModelObject <FBAvatarProtocol, FBPlaceInFeed, FBTopicProtocol, FBTimelineAppCollectionEntityProtocol, FBLikeable, FBSubscribable, FBRichStoryEntityActorProtocol, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedActorFieldsProtocol, FBQueriedMessagingActorFieldsProtocol, FBQueriedPlaceFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedSearchableFieldsProtocol, FBQueriedTopicFieldsProtocol, FBQueriedVideoChannelFieldsProtocol, FBQueriedSearchSuggestionUnitFieldsProtocol>
{
}

+ (void)fetchAccessTokenWithSession:(id)arg1 pageID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)accessTokenWithSession:(id)arg1 pageID:(id)arg2;
+ (id)entityURLWithFBID:(id)arg1 filter:(int)arg2 version:(id)arg3 userFBID:(id)arg4;
- (BOOL)isGameEntityPage;
- (BOOL)isNativeAssociatedApplicationInstalled;
- (id)initialRatingPrivacyOption;
- (BOOL)isRatableMediaPage;
- (BOOL)isRatableLocalPage;
- (id)getAppCollectionSection;
- (id)topicFeedURL;
- (id)normalizedPageTypeAsString;
- (int)normalizedPageType;
- (id)updatedLikeableWithViewerLike:(BOOL)arg1;
- (void)setViewerLikes:(id)arg1;
- (void)setLikeCount:(id)arg1;
- (BOOL)viewerLikesValue;
- (id)viewerLikes;
- (id)likeCount;
- (id)legacyApiPostId;
- (BOOL)profilePicIsSilhoutte;
- (id)fbid;
- (id)longitude;
- (id)latitude;
- (BOOL)hasGeolocation;
- (id)cityName;
- (BOOL)isUnownedPage;
- (id)primaryPhone;
- (void)fetchAccessTokenWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accessTokenWithSession:(id)arg1;
- (unsigned int)pagePermissions;
- (id)entityURL;
- (id)category;
- (id)pageLikeCountSummaryWithStyle:(unsigned int)arg1;
- (id)localizedStringForPageLikeCount:(int)arg1 style:(unsigned int)arg2;
- (id)pageLikeCountSummary;
- (BOOL)isClosed;
- (id)closedStatusSummary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

