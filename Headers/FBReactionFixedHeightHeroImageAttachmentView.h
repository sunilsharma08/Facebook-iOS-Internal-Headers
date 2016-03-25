//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBReactionAttachmentShadowLayer;

@interface FBReactionFixedHeightHeroImageAttachmentView : UIView
{
    FBReactionAttachmentShadowLayer *_shadowLayer;
    UIView *_highlightableView;
    UIView *_footerContentView;
    UIView *_bleedView;
    UIView *_headerView;
    UIView *_heroImageView;
    UIView *_footerView;
}

@property(readonly, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UIView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (float)_coverPhotoHeightFromWidth:(float)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithSession:(id)arg1 config:(id)arg2;

@end

