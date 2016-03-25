//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBKeyboardObserver;

@protocol FBKeyboardObserverDelegate <NSObject>

@optional
- (void)keyboardObserver:(FBKeyboardObserver *)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(FBKeyboardObserver *)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserverKeyboardDidHide:(FBKeyboardObserver *)arg1;
- (void)keyboardObserver:(FBKeyboardObserver *)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserverKeyboardDidShow:(FBKeyboardObserver *)arg1;
- (void)keyboardObserver:(FBKeyboardObserver *)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
@end

