//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;
@protocol FBComposerPickerCurrentLabelDelegate;

@interface FBComposerPickerCurrentLabel : UIView
{
    UIImageView *_backgroundImage;
    UILabel *_label;
    UILabel *_subtextLabel;
    UIImageView *_contentImage;
    UIImageView *_xImage;
    id <FBComposerPickerCurrentLabelDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerPickerCurrentLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateSubviews;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *subtext;
@property(copy, nonatomic) NSString *removeButtonAccessibilityLabel;
@property(copy, nonatomic) NSString *removeButtonAccessibilityIdentifier;
@property(copy, nonatomic) NSString *text;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)useTallHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

