//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITabBarControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, RCTEventDispatcher, UIColor, UITabBarController;

@interface RCTTabBar : UIView <UITabBarControllerDelegate>
{
    BOOL _tabsChanged;
    RCTEventDispatcher *_eventDispatcher;
    UITabBarController *_tabController;
    NSMutableArray *_tabViews;
}

- (void).cxx_destruct;
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
@property(nonatomic) BOOL translucent;
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) UIColor *barTintColor;
- (void)reactBridgeDidFinishTransaction;
- (void)layoutSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (id)reactSubviews;
- (void)dealloc;
- (id)backingViewController;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

