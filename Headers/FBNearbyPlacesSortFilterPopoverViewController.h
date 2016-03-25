//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBNearbyPlacesSortFilterViewControllerDelegate-Protocol.h"

@class FBNearbyPlacesLoggerHelper, FBNearbyPlacesSortFilterViewController, FBPopoverController, NSArray, UIView;
@protocol FBNearbyPlacesSortFilterPopoverViewControllerDelegate;

@interface FBNearbyPlacesSortFilterPopoverViewController : UIViewController <FBNearbyPlacesSortFilterViewControllerDelegate>
{
    UIView *_parentView;
    FBNearbyPlacesLoggerHelper *_nearbyPlacesLoggerHelper;
    id <FBNearbyPlacesSortFilterPopoverViewControllerDelegate> _delegate;
    FBPopoverController *_popoverSortFilterController;
    NSArray *_passThroughViews;
    FBNearbyPlacesSortFilterViewController *_sortFilterViewController;
}

@property(retain, nonatomic) FBNearbyPlacesSortFilterViewController *sortFilterViewController; // @synthesize sortFilterViewController=_sortFilterViewController;
@property(copy, nonatomic) NSArray *passThroughViews; // @synthesize passThroughViews=_passThroughViews;
@property(retain, nonatomic) FBPopoverController *popoverSortFilterController; // @synthesize popoverSortFilterController=_popoverSortFilterController;
@property(nonatomic) __weak id <FBNearbyPlacesSortFilterPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createNewPopoverController:(id)arg1 withPassThroughViews:(id)arg2 withWidth:(float)arg3 withHeight:(float)arg4;
- (void)sortFilterViewController:(id)arg1 didFinishWithSortType:(unsigned int)arg2 filterMask:(unsigned int)arg3;
- (void)showPopupAtPosition:(struct CGPoint)arg1 insideOfView:(id)arg2 andAnimate:(BOOL)arg3;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (BOOL)popoverVisible;
- (void)viewDidLoad;
- (void)updateWithSortType:(unsigned int)arg1 filterMask:(unsigned int)arg2 resultSearchType:(unsigned int)arg3;
- (id)initWithParentView:(id)arg1 andPassThroughViews:(id)arg2 sortType:(unsigned int)arg3 filterMask:(unsigned int)arg4 resultSearchType:(unsigned int)arg5 loggerHelper:(id)arg6;

@end

