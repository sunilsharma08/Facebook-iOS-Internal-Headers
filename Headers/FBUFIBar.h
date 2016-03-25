//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBBouncyButton, FBPhotoTagButton, FBUFITextButton;

@interface FBUFIBar : UIView
{
    UIView *_horizontalButtonBar;
    unsigned int _style;
    BOOL _viewerDoesLike;
    BOOL _canViewerLike;
    BOOL _canViewerComment;
    BOOL _canViewerAddTags;
    BOOL _canViewerAddLocation;
    BOOL _canViewerShare;
    BOOL _hasLocationAttached;
    FBBouncyButton *_likeButton;
    FBBouncyButton *_commentButton;
    FBPhotoTagButton *_tagButton;
    FBBouncyButton *_moreButton;
    FBBouncyButton *_shareButton;
    FBBouncyButton *_addLocationButton;
    FBUFITextButton *_feedbackSentenceButton;
    unsigned int _likeCount;
    unsigned int _commentCount;
}

+ (unsigned int)feedbackSentenceButtonStyleForStyle:(unsigned int)arg1;
+ (id)feedbackSentenceWithLikeCount:(unsigned int)arg1;
+ (id)feedbackSentenceWithCommentCount:(unsigned int)arg1;
+ (id)ufiBarWithStyle:(unsigned int)arg1;
@property(nonatomic) BOOL hasLocationAttached; // @synthesize hasLocationAttached=_hasLocationAttached;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) BOOL canViewerShare; // @synthesize canViewerShare=_canViewerShare;
@property(nonatomic) BOOL canViewerAddLocation; // @synthesize canViewerAddLocation=_canViewerAddLocation;
@property(nonatomic) BOOL canViewerAddTags; // @synthesize canViewerAddTags=_canViewerAddTags;
@property(nonatomic) BOOL canViewerComment; // @synthesize canViewerComment=_canViewerComment;
@property(nonatomic) BOOL canViewerLike; // @synthesize canViewerLike=_canViewerLike;
@property(nonatomic) BOOL viewerDoesLike; // @synthesize viewerDoesLike=_viewerDoesLike;
@property(readonly, nonatomic) FBUFITextButton *feedbackSentenceButton; // @synthesize feedbackSentenceButton=_feedbackSentenceButton;
@property(readonly, nonatomic) FBBouncyButton *addLocationButton; // @synthesize addLocationButton=_addLocationButton;
@property(readonly, nonatomic) FBBouncyButton *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly, nonatomic) FBBouncyButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) FBPhotoTagButton *tagButton; // @synthesize tagButton=_tagButton;
@property(readonly, nonatomic) FBBouncyButton *commentButton; // @synthesize commentButton=_commentButton;
@property(readonly, nonatomic) FBBouncyButton *likeButton; // @synthesize likeButton=_likeButton;
- (void).cxx_destruct;
- (BOOL)_isStyleTextLabels;
- (id)_addLocationButtonImageForStyle:(unsigned int)arg1 buttonState:(unsigned int)arg2;
- (id)_shareButtonImageForStyle:(unsigned int)arg1;
- (unsigned int)_tagButtonStyleForStyle:(unsigned int)arg1;
- (id)_commentButtonImageForStyle:(unsigned int)arg1;
- (id)_likedButtonImageForStyle:(unsigned int)arg1;
- (id)_likeButtonImageForStyle:(unsigned int)arg1;
- (void)setLikeCount:(unsigned int)arg1 commentCount:(unsigned int)arg2;
@property(nonatomic) BOOL moreButtonHidden;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_initWithStyle:(unsigned int)arg1;

@end

