//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBNetworkImageView, FBRichTextView, NSString, NSURL, UIImageView;

@interface FBSideFeedUnitListItemView : UIView
{
    FBNetworkImageView *_coverImageView;
    UIImageView *_coverImageShadowView;
    UIView *_playIcon;
    FBRichTextView *_titleView;
    FBRichTextView *_subtitleView;
    BOOL _hasPlayIcon;
}

+ (id)_addLineSpacingToTitle:(id)arg1;
+ (float)height;
+ (float)imageHeight;
+ (float)imageWidth;
@property(nonatomic) BOOL hasPlayIcon; // @synthesize hasPlayIcon=_hasPlayIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) NSURL *coverImageURL;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@end

