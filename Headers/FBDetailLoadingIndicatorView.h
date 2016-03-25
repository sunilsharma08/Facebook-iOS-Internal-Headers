//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface FBDetailLoadingIndicatorView : UIView
{
    UILabel *_textLabel;
    UIImageView *_backgroundImageView;
    UIActivityIndicatorView *_spinnerView;
}

- (void).cxx_destruct;
- (void)hideLoadingIndicator:(BOOL)arg1;
- (void)showLoadingIndicator;
- (void)setHidden:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

