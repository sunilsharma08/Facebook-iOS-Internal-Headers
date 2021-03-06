//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIAlertView, UIButton, UILabel, UIPickerView, UITextView;

@interface FBInternalSettingsNSUserDefaultsViewController : UIViewController <UIPickerViewDelegate, UIAlertViewDelegate>
{
    UIPickerView *_userDefaultPickerView;
    UITextView *_userDefaultShowValueView;
    NSArray *_syncedUserDefaultKeys;
    UILabel *_userDefaultNameLabel;
    UIButton *_deleteButton;
    NSString *_selectedKey;
    UIAlertView *_alertView;
}

@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (void)viewWillLayoutSubviews;
- (unsigned int)supportedInterfaceOrientations;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_deleteButtonPressed:(id)arg1;
- (BOOL)fb_showAuxiliaryViewController;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

