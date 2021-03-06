//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCollectionViewSectionDataSource-Protocol.h"
#import "FBObjectVisibilityTrackerDelegate-Protocol.h"
#import "FBTableViewSectionDataSource-Protocol.h"

@class FBMegaphoneService, FBObjectVisibilityTracker, FBUserSession, NSMutableDictionary, NSString, NSTimer;
@protocol FBCollectionViewMutating, FBMegaphoneDataSourceDelegate, FBTableViewMutating;

@interface FBMegaphoneDataSource : NSObject <FBObjectVisibilityTrackerDelegate, FBTableViewSectionDataSource, FBCollectionViewSectionDataSource>
{
    FBUserSession *_session;
    FBMegaphoneService *_megaphoneService;
    NSString *_location;
    NSMutableDictionary *_heightByMegaphone;
    unsigned int _megaphoneCount;
    BOOL _serverContextFetched;
    BOOL _active;
    BOOL _showOnlyQPMegaphones;
    id <FBTableViewMutating> _tableViewMutator;
    id <FBCollectionViewMutating> _collectionViewMutator;
    id <FBMegaphoneDataSourceDelegate> _delegate;
    NSTimer *_megaphoneRefreshTimer;
    NSTimer *_megaphoneRemovalTimer;
    FBObjectVisibilityTracker *_objectVisibilityTracker;
}

+ (BOOL)_shouldDisplayMegaphoneForFeedType:(int)arg1;
@property(retain, nonatomic) FBObjectVisibilityTracker *objectVisibilityTracker; // @synthesize objectVisibilityTracker=_objectVisibilityTracker;
@property(retain, nonatomic) NSTimer *megaphoneRemovalTimer; // @synthesize megaphoneRemovalTimer=_megaphoneRemovalTimer;
@property(retain, nonatomic) NSTimer *megaphoneRefreshTimer; // @synthesize megaphoneRefreshTimer=_megaphoneRefreshTimer;
@property(nonatomic) BOOL showOnlyQPMegaphones; // @synthesize showOnlyQPMegaphones=_showOnlyQPMegaphones;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) __weak id <FBMegaphoneDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBCollectionViewMutating> collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
- (void).cxx_destruct;
- (void)objectVisibilityTracker:(id)arg1 objectDidMeetVisibilityThreshold:(id)arg2 withVisibilityState:(id)arg3 forVisibilityKey:(id)arg4;
- (BOOL)objectVisibilityTracker:(id)arg1 shouldTrackObjectAgainAfterPreviouslyMeetingVisibilityThreshold:(id)arg2 forVisibilityKey:(id)arg3;
- (BOOL)objectVisibilityTracker:(id)arg1 isObjectVisible:(id)arg2 withVisibilityState:(id)arg3 forVisibilityKey:(id)arg4;
- (id)objectVisibilityTracker:(id)arg1 visibilityStateForObject:(id)arg2 withPreviousVisibilityState:(id)arg3 forVisibilityKey:(id)arg4;
- (id)objectVisibilityTracker:(id)arg1 visibilityKeysForObject:(id)arg2;
- (id)_megaphoneForLocation:(id)arg1;
- (void)_removeMegaphoneWithURL:(id)arg1;
- (BOOL)_scheduleMegaphoneRemovalWithTimeInterval:(double)arg1;
- (void)_cancelMegaphoneRemovalTimer;
- (void)_megaphoneRemovalTimerDidFire:(id)arg1;
- (void)_scheduleMegaphoneRefreshWithTimeInterval:(double)arg1;
- (void)_cancelMegaphoneRefreshTimer;
- (void)_megaphoneRefreshTimerDidFire:(id)arg1;
- (id)_heightKeyForMegaphoneWithWidth:(float)arg1;
- (id)_nuxButtonTapEventForMegaphoneButtonID:(id)arg1;
- (void)didTapButton:(id)arg1;
- (void)_updateCells:(BOOL)arg1;
- (void)_updateCollectionViewInsertingRow:(BOOL)arg1 deleteRow:(BOOL)arg2;
- (void)_updateTableViewInsertingRow:(BOOL)arg1 deleteRow:(BOOL)arg2;
@property(readonly, nonatomic) BOOL hasMegaphone;
- (void)refreshMegaphoneIfNeeded;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)_heightOfMegaphoneInView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setupCell:(id)arg1 parentView:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)registerClassWithReuseIdentifier;
- (void)_quickPromotionMegaphoneFetched;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 location:(id)arg2 feedType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

