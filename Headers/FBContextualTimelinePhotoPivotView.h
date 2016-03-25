//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface FBContextualTimelinePhotoPivotView : UIView
{
    UITapGestureRecognizer *_tapGesture;
    NSString *_name;
    UILabel *_photosLabel;
    UILabel *_albumsLabel;
    UIImageView *_photosLabelChevron;
    UIImageView *_albumsLabelChevron;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIImageView *albumsLabelChevron; // @synthesize albumsLabelChevron=_albumsLabelChevron;
@property(retain, nonatomic) UIImageView *photosLabelChevron; // @synthesize photosLabelChevron=_photosLabelChevron;
@property(retain, nonatomic) UILabel *albumsLabel; // @synthesize albumsLabel=_albumsLabel;
@property(retain, nonatomic) UILabel *photosLabel; // @synthesize photosLabel=_photosLabel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_pivotViewWasTapped:(id)arg1;
- (void)_getFramesForPhotosLabel:(struct CGRect *)arg1 chevron:(struct CGRect *)arg2 separator:(struct CGRect *)arg3 albumsLabel:(struct CGRect *)arg4 chevron:(struct CGRect *)arg5;
- (float)separatorHeight;
- (void)layoutSubviews;
- (void)updateLabel;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

