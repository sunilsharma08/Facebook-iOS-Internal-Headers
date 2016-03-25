//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol FBAuthenticatingContentView, FBAuthenticatingFooterView, FBAuthenticatingHeaderView;

@protocol FBAuthenticatingView <NSObject>
@property(nonatomic) BOOL showActivityIndicator;
@property(retain, nonatomic) UIView<FBAuthenticatingContentView> *contentView;
@property(retain, nonatomic) UIView<FBAuthenticatingFooterView> *footerView;
@property(retain, nonatomic) UIView<FBAuthenticatingHeaderView> *headerView;
@property(retain, nonatomic) UIView *backgroundView;
@property(nonatomic) struct CGRect keyboardTargetFrameInScreen;
@property(nonatomic) BOOL isKeyboardVisible;
@property(nonatomic) unsigned int interfaceType;
- (void)addHeaderAndBackgroundViews;
- (void)addLoginViews;
- (void)setInterfaceType:(unsigned int)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)setInterfaceType:(unsigned int)arg1 animated:(BOOL)arg2;
@end

