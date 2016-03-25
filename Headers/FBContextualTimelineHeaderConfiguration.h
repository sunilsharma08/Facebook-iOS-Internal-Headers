//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBTimelineConfiguration-Protocol.h"

@class FBContextualTimelineReferrerInformation, NSString, UIColor, UIFont;
@protocol FBContextualTimelineHeaderEventListener;

@interface FBContextualTimelineHeaderConfiguration : NSObject <FBTimelineConfiguration>
{
    BOOL _updatesHeaderAsynchronously;
    BOOL _showTimelineMegaphone;
    BOOL _canShowInfoReview;
    BOOL _showTimelineComposer;
    BOOL _showPYMK;
    BOOL _carouselEnabled;
    BOOL _shouldShowPhotoSwipeNUX;
    BOOL _updatesActionBarAsynchronously;
    BOOL _useHighQualityContextItems;
    BOOL _showContextItemExpander;
    BOOL _showNavTiles;
    BOOL _displayFooter;
    BOOL _enableProfilePicController;
    BOOL _profilePictureAndNameCentered;
    BOOL _canShowRememberingLabel;
    BOOL _shouldShowProtiles;
    BOOL _shouldShowProtilesAbout;
    BOOL _enableStickyNav;
    BOOL _shouldShowProtilesSlimNav;
    BOOL _useStreamingForCoverPhoto;
    BOOL _shouldShowPhotoOnHeaderTap;
    BOOL _shouldShowIntroCardBio;
    BOOL _shouldShowIntroCardPublicAbout;
    BOOL _shouldShowIntroCardFavPhotos;
    BOOL _shouldHavePullToRefresh;
    BOOL _shouldShowContextItems;
    BOOL _shouldShowSubscriberCount;
    BOOL _hasPullToRefreshView;
    BOOL _beginSyncingDataInInit;
    unsigned int _presentationStyle;
    NSString *_cardLayoutFadeAnimationFunction;
    float _cardLayoutTransformFactor;
    NSString *_carouselPrivacyFilter;
    float _coverPhotoHeight;
    unsigned int _actionBarSize;
    unsigned int _initialContextItemLimit;
    float _contextItemVerticalPadding;
    float _contextItemsTotalFixedHeight;
    float _contextItemLeftPadding;
    float _contextItemRightPadding;
    FBContextualTimelineReferrerInformation *_referrer;
    UIColor *_footerBackgroundColor;
    UIFont *_footerTextFont;
    UIColor *_footerTextColor;
    float _footerCellHeight;
    UIColor *_footerSeparatorColor;
    float _profilePictureSize;
    float _profilePictureLeftPadding;
    float _profilePictureBottomPadding;
    float _profilePictureBorderSize;
    float _nameLabelLeftPadding;
    float _nameLabelVerticalPadding;
    unsigned int _maxNumOfLinesForNameLabel;
    NSString *_subscribeLocation;
    NSString *_friendRequestHowFound;
    unsigned int _initialDisplayOptions;
    NSString *_topItemType;
    NSString *_analyticsUUID;
    NSString *_analyticsEventSource;
    NSString *_actionType;
    float _slimNavBarWidth;
    id <FBContextualTimelineHeaderEventListener> _headerEventListener;
    double _cardLayoutFadeAnimationDuration;
}

+ (id)configurationWithDisplayOptions:(unsigned int)arg1 beginSyncingDataInInit:(BOOL)arg2 useStreamingForCoverPhoto:(BOOL)arg3 enableProfilePicController:(BOOL)arg4 analyticsUUID:(id)arg5 topItemType:(id)arg6 headerEventListener:(id)arg7 actionType:(id)arg8 shouldShowProtiles:(BOOL)arg9 shouldShowProtilesAbout:(BOOL)arg10 shouldShowProtilesSlimNav:(BOOL)arg11 enableStickyNav:(BOOL)arg12 shouldShowIntroCardBio:(BOOL)arg13 shouldShowIntroCardPublicAbout:(BOOL)arg14 shouldShowIntroCardFavPhotos:(BOOL)arg15 shouldHavePullToRefresh:(BOOL)arg16 enableProfile9Cover:(BOOL)arg17 referrer:(id)arg18 canShowRememberingLabel:(BOOL)arg19;
+ (id)configurationForHeadPublisherWithSession:(id)arg1 TimelineAnalytics:(id)arg2;
+ (id)configurationForTimelineService;
+ (id)configurationForCoverPhotoEdit;
+ (id)configurationForProfileWithSession:(id)arg1 timelineAnalytics:(id)arg2 topItemType:(id)arg3 actionType:(id)arg4 referrer:(id)arg5;
+ (id)configurationForEntityCard:(id)arg1 forDisplaySurface:(id)arg2 headerEventListener:(id)arg3;
+ (id)configurationForSwipablePersonCard:(id)arg1 displayOptions:(unsigned int)arg2;
@property(nonatomic) BOOL beginSyncingDataInInit; // @synthesize beginSyncingDataInInit=_beginSyncingDataInInit;
@property(nonatomic) BOOL hasPullToRefreshView; // @synthesize hasPullToRefreshView=_hasPullToRefreshView;
@property(nonatomic) BOOL shouldShowSubscriberCount; // @synthesize shouldShowSubscriberCount=_shouldShowSubscriberCount;
@property(nonatomic) BOOL shouldShowContextItems; // @synthesize shouldShowContextItems=_shouldShowContextItems;
@property(nonatomic) BOOL shouldHavePullToRefresh; // @synthesize shouldHavePullToRefresh=_shouldHavePullToRefresh;
@property(nonatomic) BOOL shouldShowIntroCardFavPhotos; // @synthesize shouldShowIntroCardFavPhotos=_shouldShowIntroCardFavPhotos;
@property(nonatomic) BOOL shouldShowIntroCardPublicAbout; // @synthesize shouldShowIntroCardPublicAbout=_shouldShowIntroCardPublicAbout;
@property(nonatomic) BOOL shouldShowIntroCardBio; // @synthesize shouldShowIntroCardBio=_shouldShowIntroCardBio;
@property(nonatomic) BOOL shouldShowPhotoOnHeaderTap; // @synthesize shouldShowPhotoOnHeaderTap=_shouldShowPhotoOnHeaderTap;
@property(nonatomic) BOOL useStreamingForCoverPhoto; // @synthesize useStreamingForCoverPhoto=_useStreamingForCoverPhoto;
@property(retain, nonatomic) id <FBContextualTimelineHeaderEventListener> headerEventListener; // @synthesize headerEventListener=_headerEventListener;
@property(nonatomic) float slimNavBarWidth; // @synthesize slimNavBarWidth=_slimNavBarWidth;
@property(nonatomic) BOOL shouldShowProtilesSlimNav; // @synthesize shouldShowProtilesSlimNav=_shouldShowProtilesSlimNav;
@property(nonatomic) BOOL enableStickyNav; // @synthesize enableStickyNav=_enableStickyNav;
@property(nonatomic) BOOL shouldShowProtilesAbout; // @synthesize shouldShowProtilesAbout=_shouldShowProtilesAbout;
@property(nonatomic) BOOL shouldShowProtiles; // @synthesize shouldShowProtiles=_shouldShowProtiles;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *analyticsEventSource; // @synthesize analyticsEventSource=_analyticsEventSource;
@property(copy, nonatomic) NSString *analyticsUUID; // @synthesize analyticsUUID=_analyticsUUID;
@property(copy, nonatomic) NSString *topItemType; // @synthesize topItemType=_topItemType;
@property(nonatomic) unsigned int initialDisplayOptions; // @synthesize initialDisplayOptions=_initialDisplayOptions;
@property(copy, nonatomic) NSString *friendRequestHowFound; // @synthesize friendRequestHowFound=_friendRequestHowFound;
@property(copy, nonatomic) NSString *subscribeLocation; // @synthesize subscribeLocation=_subscribeLocation;
@property(nonatomic) BOOL canShowRememberingLabel; // @synthesize canShowRememberingLabel=_canShowRememberingLabel;
@property(nonatomic) unsigned int maxNumOfLinesForNameLabel; // @synthesize maxNumOfLinesForNameLabel=_maxNumOfLinesForNameLabel;
@property(nonatomic) float nameLabelVerticalPadding; // @synthesize nameLabelVerticalPadding=_nameLabelVerticalPadding;
@property(nonatomic) float nameLabelLeftPadding; // @synthesize nameLabelLeftPadding=_nameLabelLeftPadding;
@property(nonatomic) BOOL profilePictureAndNameCentered; // @synthesize profilePictureAndNameCentered=_profilePictureAndNameCentered;
@property(nonatomic) BOOL enableProfilePicController; // @synthesize enableProfilePicController=_enableProfilePicController;
@property(nonatomic) float profilePictureBorderSize; // @synthesize profilePictureBorderSize=_profilePictureBorderSize;
@property(nonatomic) float profilePictureBottomPadding; // @synthesize profilePictureBottomPadding=_profilePictureBottomPadding;
@property(nonatomic) float profilePictureLeftPadding; // @synthesize profilePictureLeftPadding=_profilePictureLeftPadding;
@property(nonatomic) float profilePictureSize; // @synthesize profilePictureSize=_profilePictureSize;
@property(retain, nonatomic) UIColor *footerSeparatorColor; // @synthesize footerSeparatorColor=_footerSeparatorColor;
@property(nonatomic) float footerCellHeight; // @synthesize footerCellHeight=_footerCellHeight;
@property(retain, nonatomic) UIColor *footerTextColor; // @synthesize footerTextColor=_footerTextColor;
@property(retain, nonatomic) UIFont *footerTextFont; // @synthesize footerTextFont=_footerTextFont;
@property(retain, nonatomic) UIColor *footerBackgroundColor; // @synthesize footerBackgroundColor=_footerBackgroundColor;
@property(nonatomic) BOOL displayFooter; // @synthesize displayFooter=_displayFooter;
@property(nonatomic) BOOL showNavTiles; // @synthesize showNavTiles=_showNavTiles;
@property(retain, nonatomic) FBContextualTimelineReferrerInformation *referrer; // @synthesize referrer=_referrer;
@property(nonatomic) float contextItemRightPadding; // @synthesize contextItemRightPadding=_contextItemRightPadding;
@property(nonatomic) float contextItemLeftPadding; // @synthesize contextItemLeftPadding=_contextItemLeftPadding;
@property(nonatomic) float contextItemsTotalFixedHeight; // @synthesize contextItemsTotalFixedHeight=_contextItemsTotalFixedHeight;
@property(nonatomic) float contextItemVerticalPadding; // @synthesize contextItemVerticalPadding=_contextItemVerticalPadding;
@property(nonatomic) unsigned int initialContextItemLimit; // @synthesize initialContextItemLimit=_initialContextItemLimit;
@property(nonatomic) BOOL showContextItemExpander; // @synthesize showContextItemExpander=_showContextItemExpander;
@property(nonatomic) BOOL useHighQualityContextItems; // @synthesize useHighQualityContextItems=_useHighQualityContextItems;
@property(nonatomic) BOOL updatesActionBarAsynchronously; // @synthesize updatesActionBarAsynchronously=_updatesActionBarAsynchronously;
@property(nonatomic) unsigned int actionBarSize; // @synthesize actionBarSize=_actionBarSize;
@property(nonatomic) float coverPhotoHeight; // @synthesize coverPhotoHeight=_coverPhotoHeight;
@property(nonatomic) BOOL shouldShowPhotoSwipeNUX; // @synthesize shouldShowPhotoSwipeNUX=_shouldShowPhotoSwipeNUX;
@property(copy, nonatomic) NSString *carouselPrivacyFilter; // @synthesize carouselPrivacyFilter=_carouselPrivacyFilter;
@property(nonatomic) BOOL carouselEnabled; // @synthesize carouselEnabled=_carouselEnabled;
@property(nonatomic) float cardLayoutTransformFactor; // @synthesize cardLayoutTransformFactor=_cardLayoutTransformFactor;
@property(copy, nonatomic) NSString *cardLayoutFadeAnimationFunction; // @synthesize cardLayoutFadeAnimationFunction=_cardLayoutFadeAnimationFunction;
@property(nonatomic) double cardLayoutFadeAnimationDuration; // @synthesize cardLayoutFadeAnimationDuration=_cardLayoutFadeAnimationDuration;
@property(nonatomic) unsigned int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) BOOL showPYMK; // @synthesize showPYMK=_showPYMK;
@property(nonatomic) BOOL showTimelineComposer; // @synthesize showTimelineComposer=_showTimelineComposer;
@property(nonatomic) BOOL canShowInfoReview; // @synthesize canShowInfoReview=_canShowInfoReview;
@property(nonatomic) BOOL showTimelineMegaphone; // @synthesize showTimelineMegaphone=_showTimelineMegaphone;
@property(nonatomic) BOOL updatesHeaderAsynchronously; // @synthesize updatesHeaderAsynchronously=_updatesHeaderAsynchronously;
- (void).cxx_destruct;
@property(readonly, nonatomic) float contextItemBorderViewHeight;
- (BOOL)isEntityCard;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

