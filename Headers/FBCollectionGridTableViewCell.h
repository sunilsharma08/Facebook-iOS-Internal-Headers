//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FBMemTimelineAppCollection, FBUserSession, NSOrderedSet, NSString, UICollectionView;
@protocol FBIntentHandler, FBNavigation;

@interface FBCollectionGridTableViewCell : FBCollectionAbstractCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    FBUserSession *_session;
    BOOL _useLabels;
    UICollectionView *_grid;
    unsigned int _maxNumberOfItemsToShow;
    FBMemTimelineAppCollection *_collection;
    NSOrderedSet *_items;
    id <FBNavigation> _handleController;
    id <FBIntentHandler> _intentHandler;
}

+ (float)desiredHeightUsingLabels:(BOOL)arg1 numberOfItems:(unsigned int)arg2;
+ (float)_gridLineHeight:(BOOL)arg1;
@property(retain, nonatomic) id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(retain, nonatomic) id <FBNavigation> handleController; // @synthesize handleController=_handleController;
@property(readonly, nonatomic) NSOrderedSet *items; // @synthesize items=_items;
@property(readonly, nonatomic) FBMemTimelineAppCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) unsigned int maxNumberOfItemsToShow; // @synthesize maxNumberOfItemsToShow=_maxNumberOfItemsToShow;
- (void).cxx_destruct;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1 usingLabels:(BOOL)arg2 session:(id)arg3;
- (void)setCollection:(id)arg1 withItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

