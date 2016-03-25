//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBKeyboardObserverDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FBKeyboardObserver, FBTextView, NSString, UIBarButtonItem, UINavigationBar;

@interface FBStarRatingsCommentsView : UIView <FBKeyboardObserverDelegate, UITextViewDelegate>
{
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    FBKeyboardObserver *_keyboardObserver;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_submitBarButtonItem;
    FBTextView *_lowRatingTextView;
    unsigned int _keyboardHeight;
}

@property(nonatomic) unsigned int keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(readonly, nonatomic) FBTextView *lowRatingTextView; // @synthesize lowRatingTextView=_lowRatingTextView;
@property(readonly, nonatomic) UIBarButtonItem *submitBarButtonItem; // @synthesize submitBarButtonItem=_submitBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)updateSubmitButtonIsEnabled;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)handleKeyboardVisibilityChange:(float)arg1 duration:(double)arg2 curve:(int)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

