//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBPlacesSortFilterController;

@protocol FBPlacesSortFilterControllerDelegate
- (void)sortFilterControllerWillChangeState:(FBPlacesSortFilterController *)arg1;
- (void)didFailToSortByDistance:(FBPlacesSortFilterController *)arg1;
- (void)sortFilterController:(FBPlacesSortFilterController *)arg1 sortFilterModelDidChangeFilterType:(unsigned int)arg2;
- (void)sortFilterController:(FBPlacesSortFilterController *)arg1 sortFilterModelDidChangeSortType:(unsigned int)arg2;

@optional
- (void)sortFilterControllerDidDismissContainingController:(FBPlacesSortFilterController *)arg1;
@end

