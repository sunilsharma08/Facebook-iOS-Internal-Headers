//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAuthenticationViewSecondaryActionsProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class UIButton;

@protocol FBAuthenticatingFooterView <NSObject, FBAuthenticationViewSecondaryActionsProtocol>
@property(readonly, nonatomic) UIButton *helpButton;
@property(nonatomic) BOOL helpButtonHidden;
- (void)enableAccountListButtons:(BOOL)arg1;

@optional
@property(nonatomic) unsigned int interfaceType;
@end

