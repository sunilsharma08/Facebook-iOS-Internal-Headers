//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "FBSearchTextFieldProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBCustomizableSearchTextField, NSString, UIButton, UILabel, UIView;
@protocol FBNavigationBarSearchTextFieldDelegate;

@interface FBNavigationBarSearchTextField : UIControl <UITextFieldDelegate, FBSearchTextFieldProtocol>
{
    UIButton *_clearButton;
    FBCustomizableSearchTextField *_textField;
    UILabel *_subtitleLabel;
    UIView *_rightAccessoryView;
    BOOL _inBackspaceMode;
    BOOL _showClearButton;
    id <FBNavigationBarSearchTextFieldDelegate> _textInputDelegate;
    struct _NSRange _highlightRange;
}

+ (id)_defaultSearchIconView;
@property(nonatomic) BOOL showClearButton; // @synthesize showClearButton=_showClearButton;
@property(nonatomic) __weak id <FBNavigationBarSearchTextFieldDelegate> textInputDelegate; // @synthesize textInputDelegate=_textInputDelegate;
@property(readonly, nonatomic) BOOL inBackspaceMode; // @synthesize inBackspaceMode=_inBackspaceMode;
@property(readonly, nonatomic) struct _NSRange highlightRange; // @synthesize highlightRange=_highlightRange;
- (void).cxx_destruct;
- (id)_displayTextForString:(id)arg1 highlightRange:(struct _NSRange)arg2;
- (BOOL)_isSubtitleVisible;
- (BOOL)_isClearButtonVisible;
- (void)_clearButtonTapped:(id)arg1;
- (void)_updateRightAccessoryViewsVisibility;
- (void)_textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
@property(nonatomic) BOOL centerSearchText;
@property(copy, nonatomic) NSString *customPlaceholderText;
@property(nonatomic) BOOL textFieldInteractionEnabled;
- (void)setCustomRightAccessoryView:(id)arg1;
- (void)setCustomMagnifyingGlassView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
@property(copy, nonatomic) NSString *subtitleText;
- (void)setAttributedTitleText:(id)arg1;
- (void)setTitleText:(id)arg1 highlightRange:(struct _NSRange)arg2;
- (void)setTitleText:(id)arg1;
@property(readonly, copy, nonatomic) NSString *titleText;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic, getter=isSelected) BOOL selected; // @dynamic selected;
@property(readonly) Class superclass;

@end

