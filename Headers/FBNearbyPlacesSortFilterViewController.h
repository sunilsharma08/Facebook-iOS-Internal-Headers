//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBNearbyPlacesLoggerHelper, FBPlacesSortFilterView, NSArray, NSString, UIImage;
@protocol FBNearbyPlacesSortFilterViewControllerDelegate;

@interface FBNearbyPlacesSortFilterViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIImage *_selectorEmptyImage;
    UIImage *_selectorSelectedImage;
    UIImage *_checkmarkImage;
    unsigned int _currentSortIndex;
    unsigned int _currentFilterMask;
    FBNearbyPlacesLoggerHelper *_nearbyPlacesLoggerHelper;
    id <FBNearbyPlacesSortFilterViewControllerDelegate> _delegate;
    FBPlacesSortFilterView *_sortFilterView;
    NSArray *_sortOptions;
    NSArray *_filterOptions;
}

@property(copy, nonatomic) NSArray *filterOptions; // @synthesize filterOptions=_filterOptions;
@property(copy, nonatomic) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(retain, nonatomic) FBPlacesSortFilterView *sortFilterView; // @synthesize sortFilterView=_sortFilterView;
@property(nonatomic) __weak id <FBNearbyPlacesSortFilterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logButtonTap:(id)arg1 withToggleState:(BOOL)arg2;
- (id)filterStringFromMaskType:(unsigned int)arg1;
- (id)sortTypeString:(unsigned int)arg1;
- (id)_sortOptionFromResultSearchType:(unsigned int)arg1;
- (unsigned int)_currentSortType;
- (void)setupCurrentSortIndexWithSortType:(unsigned int)arg1;
- (void)_updateViewFrameWithTableViewSize:(struct CGSize)arg1;
- (id)_acccessbilityLabelForFilter:(id)arg1 isEnabled:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateWithSortType:(unsigned int)arg1 filterMask:(unsigned int)arg2 resultSearchType:(unsigned int)arg3;
- (id)initWithSortType:(unsigned int)arg1 filterMask:(unsigned int)arg2 resultSearchType:(unsigned int)arg3 loggerHelper:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

