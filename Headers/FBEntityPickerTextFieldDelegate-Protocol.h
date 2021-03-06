//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UITextFieldDelegate-Protocol.h"

@class FBEntityPickerTextField, NSString;
@protocol FBEntityTokenable;

@protocol FBEntityPickerTextFieldDelegate <UITextFieldDelegate>

@optional
- (void)textField:(FBEntityPickerTextField *)arg1 willRemoveObject_DEPRECATED:(id <FBEntityTokenable>)arg2;
- (void)textField:(FBEntityPickerTextField *)arg1 didAddObject_DEPRECATED:(id <FBEntityTokenable>)arg2;
- (void)textField:(FBEntityPickerTextField *)arg1 didLayoutTokenCellsWithEndOfTextPosition:(struct CGPoint)arg2;
- (void)textFieldDidReceiveTap:(FBEntityPickerTextField *)arg1;
- (BOOL)textFieldSupportsEditing:(FBEntityPickerTextField *)arg1;
- (void)textField:(FBEntityPickerTextField *)arg1 userWillDeleteObjectByTyping:(id <FBEntityTokenable>)arg2;
- (void)textFieldHeightDidChange:(FBEntityPickerTextField *)arg1;
- (void)textFieldHeightWillChange:(FBEntityPickerTextField *)arg1;
- (void)textField:(FBEntityPickerTextField *)arg1 searchTextChanged:(NSString *)arg2;
@end

