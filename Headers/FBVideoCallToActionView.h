//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIButton;

@interface FBVideoCallToActionView : UIControl
{
    NSString *_title;
    UIButton *_titleView;
}

@property(readonly, nonatomic) UIButton *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)setCallToActionTitle:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

