//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol FBNuxBannerViewController;

@protocol FBNuxBannerControllerDelegate <NSObject>
- (void)nuxBannerControllerDidDismissBanner:(UIViewController<FBNuxBannerViewController> *)arg1;

@optional
- (void)nuxBannerControllerWillNavigateAway:(UIViewController<FBNuxBannerViewController> *)arg1;
@end

