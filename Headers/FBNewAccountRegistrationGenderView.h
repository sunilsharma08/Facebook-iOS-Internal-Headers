//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNewAccountRegistrationStepView.h"

@class UIButton;

@interface FBNewAccountRegistrationGenderView : FBNewAccountRegistrationStepView
{
    UIButton *_buttonMale;
    UIButton *_buttonFemale;
}

@property(readonly, nonatomic) UIButton *buttonFemale; // @synthesize buttonFemale=_buttonFemale;
@property(readonly, nonatomic) UIButton *buttonMale; // @synthesize buttonMale=_buttonMale;
- (void).cxx_destruct;
- (BOOL)adjustsLayoutForKeyboard;
- (void)_layoutGenderButton:(id)arg1;
- (void)_configureGenderButton:(id)arg1;
- (struct CGSize)layoutBodyContentConstrainedToSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

