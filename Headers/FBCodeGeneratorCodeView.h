//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBCodeGeneratorProgressView, UIButton, UILabel, UITapGestureRecognizer, UITextView;
@protocol FBCodeGeneratorCodeViewDelegate;

@interface FBCodeGeneratorCodeView : UIView
{
    UITextView *_codeView;
    FBCodeGeneratorProgressView *_progressIndicator;
    UIButton *_codesNotWorkingButton;
    UITapGestureRecognizer *_codeTapRecognizer;
    UILabel *_codeInstructionsLabel;
    UIView *_spacerView1;
    UIView *_spacerView2;
    BOOL _haveConstraints;
    id <FBCodeGeneratorCodeViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCodeGeneratorCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tappedCodeNotWorking;
- (void)_tappedCode;
- (void)setCode:(id)arg1 countDownTime:(int)arg2 countDownProgress:(float)arg3;
- (void)_updatePadConstraints;
- (void)_updatePhoneConstraints;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

