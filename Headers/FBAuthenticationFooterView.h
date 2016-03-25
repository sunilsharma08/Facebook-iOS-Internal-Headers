//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAuthenticatingFooterView-Protocol.h"

@class NSString, UIButton;
@protocol FBAuthenticationViewStyle;

@interface FBAuthenticationFooterView : UIView <FBAuthenticatingFooterView>
{
    id <FBAuthenticationViewStyle> _style;
    unsigned int _interfaceType;
    UIButton *_signupButton;
    UIButton *_helpButton;
    UIButton *_hpaLoginButton;
    UIButton *_loginSettingsButton;
    UIButton *_logIntoAnotherAccountButton;
    UIView *_helpButtonUnderline;
}

@property(retain, nonatomic) UIView *helpButtonUnderline; // @synthesize helpButtonUnderline=_helpButtonUnderline;
@property(retain, nonatomic) UIButton *logIntoAnotherAccountButton; // @synthesize logIntoAnotherAccountButton=_logIntoAnotherAccountButton;
@property(retain, nonatomic) UIButton *loginSettingsButton; // @synthesize loginSettingsButton=_loginSettingsButton;
@property(retain, nonatomic) UIButton *hpaLoginButton; // @synthesize hpaLoginButton=_hpaLoginButton;
@property(retain, nonatomic) UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) UIButton *signupButton; // @synthesize signupButton=_signupButton;
@property(nonatomic) unsigned int interfaceType; // @synthesize interfaceType=_interfaceType;
- (void).cxx_destruct;
- (BOOL)_requiresTwoRowsForButtons;
- (void)_layoutViews:(id)arg1 inRowRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) BOOL helpButtonHidden;
- (void)registerHPALoginTarget:(id)arg1 action:(SEL)arg2;
- (void)registerLogIntoAnotherAccountTarget:(id)arg1 action:(SEL)arg2;
- (void)registerLoginSettingsTarget:(id)arg1 action:(SEL)arg2;
- (void)registerSignupTarget:(id)arg1 action:(SEL)arg2;
- (void)registerHelpTarget:(id)arg1 action:(SEL)arg2;
- (void)enableAccountListButtons:(BOOL)arg1;
- (id)initWithStyle:(id)arg1;
- (id)init;
- (id)_createButtonWithTitle:(id)arg1;
- (id)_hpaLoginButton;
- (id)_logIntoAnotherAccountButton;
- (id)_loginSettingsButton;
- (id)_helpButton;
- (id)_signupButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

