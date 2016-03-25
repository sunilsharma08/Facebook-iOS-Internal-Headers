//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBGradientView, NSArray, NSMutableArray, UIButton, UIImageView, UILabel;

@interface FBPlacePickerNUXView : UIView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    FBGradientView *_gradientView;
    NSMutableArray *_placeTitleLables;
    NSMutableArray *_placeSubtitleFirstLineLabels;
    NSMutableArray *_placeSubtitleSecondLineLabels;
    UILabel *_searchBarLabel;
    UIImageView *_searchIcon;
    UIButton *_button;
    UIImageView *_phoneView;
    NSArray *_samplePlaces;
}

+ (id)samplePlaces;
@property(copy, nonatomic) NSArray *samplePlaces; // @synthesize samplePlaces=_samplePlaces;
@property(retain, nonatomic) UIImageView *phoneView; // @synthesize phoneView=_phoneView;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_setupLabelsWithPlaceData:(id)arg1;
- (void)_configurePhoneViewWithLocalizedLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

