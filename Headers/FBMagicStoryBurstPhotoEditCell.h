//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FBMagicStoryCellProtocol-Protocol.h"

@class FBWebImageView, NSString, UIButton, UIImageView;

@interface FBMagicStoryBurstPhotoEditCell : UICollectionViewCell <FBMagicStoryCellProtocol>
{
    UIImageView *_hideButtonIcon;
    FBWebImageView *_imageView;
    UIButton *_hideButton;
    float _imageRatio;
}

@property(nonatomic) float imageRatio; // @synthesize imageRatio=_imageRatio;
@property(readonly, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(readonly, nonatomic) FBWebImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)configureWithAssets:(id)arg1 session:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

