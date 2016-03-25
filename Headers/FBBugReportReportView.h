//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBBugReportContainerViewContentViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBBugReportAttachmentListView, FBBugReportCoordinator, FBBugReportDataUsePolicyView, NSString, UIScrollView, UITapGestureRecognizer, UITextView;

@interface FBBugReportReportView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, FBBugReportContainerViewContentViewDelegate>
{
    UITextView *_placeholderAndSuffixTextView;
    float _horizontalMargin;
    float _verticalMargin;
    UITapGestureRecognizer *_textFieldTapGestureRecognizer;
    int _keyboardHeight;
    FBBugReportCoordinator *_coordinator;
    UITextView *_textView;
    UIScrollView *_scrollView;
    NSString *_category;
    NSString *_placeholder;
    FBBugReportAttachmentListView *_attachmentListView;
    FBBugReportDataUsePolicyView *_dataUsePolicyView;
}

@property(retain, nonatomic) FBBugReportDataUsePolicyView *dataUsePolicyView; // @synthesize dataUsePolicyView=_dataUsePolicyView;
@property(retain, nonatomic) FBBugReportAttachmentListView *attachmentListView; // @synthesize attachmentListView=_attachmentListView;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)_textFieldTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (float)additionalBottomPadding;
- (void)handleKeyboardVisibilityChange:(float)arg1;
- (void)willHideKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initializeLayoutParameters;
- (id)initWithDescription:(id)arg1 category:(id)arg2 coordinator:(id)arg3 showDataUsePolicy:(BOOL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

