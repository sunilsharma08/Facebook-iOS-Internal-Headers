//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBSavedDashboardLoggingHelper : NSObject
{
}

+ (void)logDashboardNuxImpression;
+ (void)logDashboardMoreMenuItemTapped:(id)arg1 mechanism:(id)arg2;
+ (void)logDashboardFilterCancelledByTap:(id)arg1;
+ (void)logDashboardFilterButtonTapped:(id)arg1;
+ (void)logDashboardItemTapped:(id)arg1 section:(id)arg2;
+ (void)logDashboardSectionSwitchFromSection:(id)arg1 toSection:(id)arg2;
+ (void)logDashboardMoreMenuImpression:(id)arg1 mechanism:(id)arg2 options:(id)arg3;
+ (void)logDashboardImpressionForFilterList:(id)arg1;
+ (void)logDashboardItemImpression:(id)arg1 section:(id)arg2 timespan:(int)arg3;
+ (void)logDashboardImpressionForSection:(id)arg1 referrer:(id)arg2;

@end

