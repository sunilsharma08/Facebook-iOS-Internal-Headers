//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UITextField;

@interface FBCrowdsourcingHomeInputFieldView : UIView
{
    UIImageView *_icon;
    UIView *_seperator;
    unsigned int _type;
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupView;
- (void)layoutSubviews;
- (id)initWithType:(unsigned int)arg1;

@end

