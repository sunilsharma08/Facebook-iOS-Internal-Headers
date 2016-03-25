//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol FBPlacesTurnOnLocationServicesProtocol;

@interface FBPlacesTurnOnLocationServicesView : UIView
{
    UIButton *_button;
    id <FBPlacesTurnOnLocationServicesProtocol> _delegate;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <FBPlacesTurnOnLocationServicesProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)turnOnLocationServicesButtonTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

