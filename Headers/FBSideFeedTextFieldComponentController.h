//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKStatefulViewComponentController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIGestureRecognizer;

@interface FBSideFeedTextFieldComponentController : CKStatefulViewComponentController <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    UIGestureRecognizer *_dismissGestureRecognizer;
}

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)newStatefulView:(id)arg1;
- (void).cxx_destruct;
- (void)resignTextField:(id)arg1;
- (void)didEditTextField:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)canRelinquishStatefulView;
- (void)willUnmount;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)didAcquireStatefulView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

