//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextView, UIButton, UIImageView, UILabel;
@protocol SBNuxDescriptionPrivacyUnderlinedViewDelegate;

@interface SBNuxDescriptionPrivacyUnderlinedWithoutFooterView : UIView
{
    UIImageView *_illustration;
    UIImageView *_lockView;
    UILabel *_caption;
    UIButton *_backButton;
    UIButton *_moreInfoButton;
    id <SBNuxDescriptionPrivacyUnderlinedViewDelegate> _delegate;
    FBRichTextView *_descriptionLabel;
    UIButton *_okButton;
}

@property(readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(readonly, nonatomic) FBRichTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak id <SBNuxDescriptionPrivacyUnderlinedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapMoreInfoButton:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)okPressed:(id)arg1;
- (void)layoutSubviews;
- (id)_descriptionString;
- (id)_normalAttributesDictionary;
- (id)_boldUnderlineAttributesDictionary;
- (id)initWithFrame:(struct CGRect)arg1;

@end

