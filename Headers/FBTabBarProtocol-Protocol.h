//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBTabBarItem, NSArray, UIColor;
@protocol FBTabBarDelegate;

@protocol FBTabBarProtocol
@property(nonatomic) __weak id <FBTabBarDelegate> delegate;
@property(retain, nonatomic) FBTabBarItem *selectedItem;
@property(copy, nonatomic) NSArray *items;
@property(readonly, nonatomic) UIColor *iconColor;
- (struct CGRect)rectOfTabBarItem:(FBTabBarItem *)arg1;
- (FBTabBarItem *)tabBarItemAtPoint:(struct CGPoint)arg1;

@optional
@property(copy, nonatomic) NSArray *auxiliaryItems;
@end

