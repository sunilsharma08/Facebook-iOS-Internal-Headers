//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPageTabBarController, UIViewController;

@protocol FBPageTabBarControllerDelegate <NSObject>
@property(retain, nonatomic) UIViewController *pageInsightsViewController;
@property(retain, nonatomic) UIViewController *pageActivityViewController;
@property(retain, nonatomic) UIViewController *pagePublicViewController;
- (void)tabBarController:(FBPageTabBarController *)arg1 switchToViewController:(UIViewController *)arg2;
@end

