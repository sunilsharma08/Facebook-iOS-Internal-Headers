//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CLLocation, FBPlacePickerLocationCoordinator, NSError;

@protocol FBPlacePickerLocationCoordinatorDelegate
- (void)locationCoordinator:(FBPlacePickerLocationCoordinator *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationCoordinator:(FBPlacePickerLocationCoordinator *)arg1 didUpdateLocation:(CLLocation *)arg2;
@end

