//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, UIView;
@protocol FBNavigationBarSearchTextFieldDelegate;

@protocol FBSearchTextFieldProtocol <NSObject>
@property(copy, nonatomic) NSString *customPlaceholderText;
@property(nonatomic) BOOL showClearButton;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(nonatomic) BOOL centerSearchText;
@property(nonatomic) BOOL textFieldInteractionEnabled;
@property(nonatomic) __weak id <FBNavigationBarSearchTextFieldDelegate> textInputDelegate;
@property(readonly, nonatomic) BOOL inBackspaceMode;
@property(readonly, nonatomic) struct _NSRange highlightRange;
@property(copy, nonatomic) NSString *subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText;
- (void)setAttributedTitleText:(NSAttributedString *)arg1;
- (void)setTitleText:(NSString *)arg1 highlightRange:(struct _NSRange)arg2;
- (void)setTitleText:(NSString *)arg1;
- (void)setCustomRightAccessoryView:(UIView *)arg1;
- (void)setCustomMagnifyingGlassView:(UIView *)arg1 animated:(BOOL)arg2;
@end

