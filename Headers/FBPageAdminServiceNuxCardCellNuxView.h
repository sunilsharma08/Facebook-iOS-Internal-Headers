//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBButton, FBRichTextView, UIImageView;

@interface FBPageAdminServiceNuxCardCellNuxView : UIView
{
    UIImageView *_nuxImageView;
    FBRichTextView *_titleLabel;
    FBRichTextView *_descriptionLabel;
    FBButton *_crossOutButton;
    FBRichTextView *_continueLabel;
}

@property(readonly, nonatomic) FBRichTextView *continueLabel; // @synthesize continueLabel=_continueLabel;
@property(readonly, nonatomic) FBButton *crossOutButton; // @synthesize crossOutButton=_crossOutButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2;

@end

