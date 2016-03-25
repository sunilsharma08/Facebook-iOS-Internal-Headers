//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView;

@interface FBCollectionViewImageCell : UICollectionViewCell
{
    UIImageView *_imageView;
    NSString *_thumbnailURL;
    NSString *_photoURL;
    NSString *_resultID;
}

@property(copy, nonatomic) NSString *resultID; // @synthesize resultID=_resultID;
@property(copy, nonatomic) NSString *photoURL; // @synthesize photoURL=_photoURL;
@property(copy, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
- (void).cxx_destruct;
- (struct CGSize)imageViewFrameWithImageSize:(struct CGSize)arg1 boundingSize:(struct CGSize)arg2;
- (BOOL)isAccessibilityElement;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

