//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBKeyboardObserverDelegate-Protocol.h"

@class FBAuthHeaderContentFooterView, FBKeyboardObserver, NSString;
@protocol UIViewControllerTransitionCoordinatorContext;

@interface FBAuthHeaderContentFooterViewController : UIViewController <FBKeyboardObserverDelegate>
{
    BOOL _isRotating_IOS7_ONLY;
    BOOL _isAnimatingRotation_IOS7_ONLY;
    unsigned int _footerPositioning;
    FBKeyboardObserver *_keyboardObserver;
    id <UIViewControllerTransitionCoordinatorContext> _rotationContext;
    struct UIEdgeInsets _minimumEdgeInsets;
}

@property(nonatomic) BOOL isAnimatingRotation_IOS7_ONLY; // @synthesize isAnimatingRotation_IOS7_ONLY=_isAnimatingRotation_IOS7_ONLY;
@property(nonatomic) BOOL isRotating_IOS7_ONLY; // @synthesize isRotating_IOS7_ONLY=_isRotating_IOS7_ONLY;
@property(retain, nonatomic) id <UIViewControllerTransitionCoordinatorContext> rotationContext; // @synthesize rotationContext=_rotationContext;
@property(readonly, nonatomic) FBKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(nonatomic) unsigned int footerPositioning; // @synthesize footerPositioning=_footerPositioning;
@property(readonly, nonatomic) struct UIEdgeInsets minimumEdgeInsets; // @synthesize minimumEdgeInsets=_minimumEdgeInsets;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBAuthHeaderContentFooterView *headerContentFooterView;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)enableKeyboardObserver;
- (void)disableKeyboardObserver;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithMinimumInsets:(struct UIEdgeInsets)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

