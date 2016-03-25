//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBSideFeedUnitController.h"

#import "FBSideFeedUnitCollectionViewControllerDelegate-Protocol.h"

@class FBPopoverActionSheet, FBSideFeedUnitCollectionViewController, NSMutableDictionary, NSOrderedSet, NSString;

@interface FBSavedItemsSideFeedUnitController : FBSideFeedUnitController <FBSideFeedUnitCollectionViewControllerDelegate>
{
    FBPopoverActionSheet *_archiveActionSheet;
    FBSideFeedUnitCollectionViewController *_unitCollectionViewController;
    NSMutableDictionary *_archiveHistory;
    NSMutableDictionary *_clickHistory;
    NSOrderedSet *_validModelEdges;
}

- (void).cxx_destruct;
- (void)_resetLoggingHistory;
- (void)_removeItemAtIndex:(unsigned int)arg1;
- (void)_archiveItemAtIndexPath:(id)arg1;
- (id)_archiveButtonItemPerformingBlock:(CDUnknownBlockType)arg1;
- (void)_handleLongPress:(id)arg1 inView:(id)arg2 performingBlock:(CDUnknownBlockType)arg3;
- (void)_handleCollectionViewLongPress:(id)arg1;
- (void)_seeMoreButtonTapped;
- (id)_itemAtIndex:(unsigned int)arg1;
- (id)_model;
- (void)visibleRectDidChangeInContentView:(struct CGRect)arg1;
- (void)didSelectCellWithIndex:(unsigned int)arg1;
- (void)didChangeHeightAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)sizeForItemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfItems;
- (void)configureCell:(id)arg1 forIndex:(unsigned int)arg2;
- (id)uniqueIDForItemAtIndex:(unsigned int)arg1;
- (void)logAnalyticsEvent:(id)arg1 itemPosition:(unsigned int)arg2 history:(id)arg3;
- (BOOL)validateModel;
- (id)graphQLIDForItemPosition:(unsigned int)arg1;
- (id)trackingStringForItemPosition:(unsigned int)arg1;
- (id)getUnitNameForAnalytics;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

