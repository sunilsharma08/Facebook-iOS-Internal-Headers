//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBContactImporterRevampFacePileView, FBRichTextView, NSArray, NSAttributedString, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface FBContactImporterRevampInstructionView : UIView
{
    UILabel *_headerLabel;
    UIImageView *_iconView;
    FBContactImporterRevampFacePileView *_facepileView;
    UIActivityIndicatorView *_spinnerView;
    UIView *_contentView;
    BOOL _showButton;
    BOOL _showFooter;
    BOOL _contentVerticallyCentered;
    UIButton *_actionButton;
    FBRichTextView *_descriptionTextView;
    FBRichTextView *_footerTextView;
    NSString *_title;
    NSAttributedString *_descriptionText;
    NSAttributedString *_footerText;
    NSString *_buttonText;
    NSArray *_facepileURLs;
    NSString *_socialContext;
    int _alignment;
    unsigned int _showImage;
}

@property(nonatomic) BOOL contentVerticallyCentered; // @synthesize contentVerticallyCentered=_contentVerticallyCentered;
@property(nonatomic) BOOL showFooter; // @synthesize showFooter=_showFooter;
@property(nonatomic) BOOL showButton; // @synthesize showButton=_showButton;
@property(nonatomic) unsigned int showImage; // @synthesize showImage=_showImage;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *socialContext; // @synthesize socialContext=_socialContext;
@property(copy, nonatomic) NSArray *facepileURLs; // @synthesize facepileURLs=_facepileURLs;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSAttributedString *footerText; // @synthesize footerText=_footerText;
@property(copy, nonatomic) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FBRichTextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property(retain, nonatomic) FBRichTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

