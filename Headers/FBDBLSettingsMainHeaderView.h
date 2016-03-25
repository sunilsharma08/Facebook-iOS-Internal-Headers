//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBFourRoundedCornerView, FBNetworkImageView, FBRichTextView;

@interface FBDBLSettingsMainHeaderView : UIView
{
    struct FBDBLSettingsMainHeaderMetrics _metrics;
    FBNetworkImageView *_imageView;
    FBFourRoundedCornerView *_roundedCornerView;
    FBRichTextView *_userNameTextView;
}

@property(readonly, nonatomic) FBRichTextView *userNameTextView; // @synthesize userNameTextView=_userNameTextView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (void)setImageURL:(id)arg1;
- (id)_makeUserNameTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 imageDownloader:(id)arg3 gatekeeper:(id)arg4;

@end

