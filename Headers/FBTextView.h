//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UILabel;

@interface FBTextView : UITextView
{
    NSString *_textInputContextIdentifier;
    BOOL _placeholderShouldWrap;
    BOOL _placeholderShouldHideWhenEditing;
    UILabel *_placeholderLabel;
}

@property(nonatomic) BOOL placeholderShouldHideWhenEditing; // @synthesize placeholderShouldHideWhenEditing=_placeholderShouldHideWhenEditing;
@property(nonatomic) BOOL placeholderShouldWrap; // @synthesize placeholderShouldWrap=_placeholderShouldWrap;
@property(readonly, copy, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)_updateHiddenStateForPlaceholderText;
- (void)_textChanged:(id)arg1;
@property(retain, nonatomic) UIColor *placeholderTextColor;
@property(copy, nonatomic) NSString *placeholder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)textInputContextIdentifier;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textInputContextIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

