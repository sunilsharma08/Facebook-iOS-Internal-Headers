//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol FBPageAdminActivitiesPageLikeViewDelegate;

@interface FBPageAdminActivitiesPageLikeView : UIView
{
    UIImageView *_roundLikeImageView;
    UILabel *_pageLikesTitleLabel;
    UILabel *_pageLikesSubtitleLabel;
    UIButton *_promoteButton;
    id <FBPageAdminActivitiesPageLikeViewDelegate> _delegate;
    NSString *_pagelikePromoteButtonText;
    struct UIEdgeInsets _outterEdgeInsets;
    struct UIEdgeInsets _innerEdgeInsets;
}

@property(copy, nonatomic) NSString *pagelikePromoteButtonText; // @synthesize pagelikePromoteButtonText=_pagelikePromoteButtonText;
@property(nonatomic) struct UIEdgeInsets innerEdgeInsets; // @synthesize innerEdgeInsets=_innerEdgeInsets;
@property(nonatomic) struct UIEdgeInsets outterEdgeInsets; // @synthesize outterEdgeInsets=_outterEdgeInsets;
@property(nonatomic) __weak id <FBPageAdminActivitiesPageLikeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)promoteButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithSession:(id)arg1;

@end

