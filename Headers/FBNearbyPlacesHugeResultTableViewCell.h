//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FBNearbyPlacesResultActionBarViewDelegate-Protocol.h"
#import "FBNearbyPlacesResultFriendsReviewViewDelegate-Protocol.h"
#import "FBNearbyPlacesResultFriendsWhoVistedViewDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FBNearbyPlacesPhotosCollectionView, FBNearbyPlacesResultActionBarView, FBNearbyPlacesResultFriendsReviewView, FBNearbyPlacesResultFriendsWhoVisitedView, FBNetworkImageView, FBRichTextView, NSString, UIImageView, UIView;
@protocol FBNearbyPlacesHugeResultTableViewCellDelegate;

@interface FBNearbyPlacesHugeResultTableViewCell : UITableViewCell <FBNearbyPlacesResultActionBarViewDelegate, FBNearbyPlacesResultFriendsWhoVistedViewDelegate, FBNearbyPlacesResultFriendsReviewViewDelegate, UICollectionViewDelegate>
{
    unsigned int _componentOptions;
    FBRichTextView *_titleLabel;
    FBRichTextView *_primarySubtitleTextView;
    FBRichTextView *_secondarySubtitleTextView;
    FBNetworkImageView *_thumbnailView;
    unsigned int _thumbnailSize;
    FBNearbyPlacesResultActionBarView *_actionBarView;
    FBNearbyPlacesPhotosCollectionView *_photosHScrollView;
    FBNearbyPlacesResultFriendsWhoVisitedView *_friendsWhoVisitedView;
    FBNearbyPlacesResultFriendsReviewView *_friendsReviewView;
    UIImageView *_disclosureView;
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_socialContextBorder;
    UIView *_cellSpacer;
    UIView *_cellBackground;
    id <FBNearbyPlacesHugeResultTableViewCellDelegate> _delegate;
}

+ (float)heightForCellInformation:(id)arg1 userLocation:(id)arg2 isCurrentLocationSearch:(BOOL)arg3 userSession:(id)arg4;
+ (unsigned int)componentsForCellInformation:(id)arg1 userLocation:(id)arg2 isCurrentLocationSearch:(BOOL)arg3 userSession:(id)arg4;
+ (BOOL)hasSocialContextForResultCellOptions:(unsigned int)arg1;
+ (BOOL)isSmallHugeResultCellOptions:(unsigned int)arg1;
+ (BOOL)isMediumHugeResultCellOptions:(unsigned int)arg1;
+ (BOOL)isLargeHugeResultCellOptions:(unsigned int)arg1;
+ (float)_borderSize;
@property(nonatomic) __weak id <FBNearbyPlacesHugeResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nearbyPlacesFriendsReviewViewTapped;
- (void)nearbyPlacesFriendsWhoVisitedViewTapped;
- (id)_backgroundColorForSelectedState:(BOOL)arg1;
- (void)nearbyPlacesResultActionBar:(id)arg1 actionTapped:(unsigned int)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)_spotlightStringForPage:(id)arg1;
- (id)_categoriesStringForPage:(id)arg1;
- (void)_didTapThumbnailPhoto;
- (void)_layoutBordersAndBackgroundWithComponentStartY:(float)arg1;
- (void)_layoutDisclosureViewWithParentWidth:(float)arg1 centerOffsetY:(float)arg2;
- (float)_layoutActionBarViewWithComponentStartY:(float)arg1 parentWidth:(float)arg2;
- (float)_layoutSocialContextViewWithComponentStartY:(float)arg1 parentWidth:(float)arg2;
- (float)_layoutPhotoHScrollViewWithComponentStartY:(float)arg1 parentWidth:(float)arg2;
- (float)_layoutHeaderWithWidth:(float)arg1 height:(float)arg2;
- (void)_layoutLargeResultCellWithWidth:(float)arg1 height:(float)arg2 parentWidth:(float)arg3;
- (void)_layoutMediumResultCellWithWidth:(float)arg1 height:(float)arg2 parentWidth:(float)arg3;
- (void)_layoutSmallResultCellWithWidth:(float)arg1 height:(float)arg2 parentWidth:(float)arg3;
- (void)_updateThumbnailViewWithPage:(id)arg1 session:(id)arg2 thumbnailSize:(unsigned int)arg3;
- (void)_configureSocialContextViewWithPage:(id)arg1 userSession:(id)arg2;
- (void)_configurePhotoHScrollViewWithPage:(id)arg1 photosDataSource:(id)arg2;
- (void)_configureActionBarViewWithPage:(id)arg1 userLocation:(id)arg2 isCurrentLocationSearch:(BOOL)arg3;
- (void)_configureBaseResultCellWithPage:(id)arg1 session:(id)arg2 thumbnailSize:(unsigned int)arg3;
- (void)_configureLargeResultCellWithPage:(id)arg1 session:(id)arg2;
- (void)_configureMediumResultCellWithPage:(id)arg1 session:(id)arg2;
- (void)_configureSmallResultCellWithPage:(id)arg1 session:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)configWithCellInformation:(id)arg1 session:(id)arg2 userLocation:(id)arg3 photosDataSource:(id)arg4 isCurrentLocationSearch:(BOOL)arg5;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

