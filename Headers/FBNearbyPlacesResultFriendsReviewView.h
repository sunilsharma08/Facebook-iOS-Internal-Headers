//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FBGradientView, FBNearbyPlacesResultRatingsActionButton, FBNetworkImageView, FBRichTextView, UIImageView, UILabel;
@protocol FBNearbyPlacesResultFriendsReviewViewDelegate;

@interface FBNearbyPlacesResultFriendsReviewView : UIControl
{
    FBNetworkImageView *_friendAvatarImageView;
    UILabel *_titleLabel;
    UILabel *_titleRatingSeparator;
    FBRichTextView *_reviewLabel;
    FBNearbyPlacesResultRatingsActionButton *_ratingView;
    UIImageView *_seeMoreImageView;
    FBGradientView *_seeMoreGradientView;
    BOOL _isHighlighted;
    id <FBNearbyPlacesResultFriendsReviewViewDelegate> _delegate;
}

+ (float)heightForRecommendation:(id)arg1 withWidth:(float)arg2;
+ (struct CGSize)_sizeThatFits:(struct CGSize)arg1 titleText:(id)arg2 reviewLabelText:(id)arg3;
+ (float)_minHeightForTitleLabelSize:(struct CGSize)arg1 reviewFullLabelSize:(struct CGSize)arg2 reviewTruncatedLabelSize:(struct CGSize)arg3;
+ (struct CGSize)_truncatedReviewSizeWithWidth:(float)arg1 height:(float)arg2 titleSize:(struct CGSize)arg3;
+ (id)_backgroundColorForSelectedState:(BOOL)arg1;
@property(nonatomic) __weak id <FBNearbyPlacesResultFriendsReviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapOnView;
- (void)_updateAvatarPhotoWithPerson:(id)arg1 userSession:(id)arg2;
- (void)_updateReviewTextWithRecommendation:(id)arg1;
- (void)_updateHighlightedState:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateViewWithRecommendation:(id)arg1 userSession:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

