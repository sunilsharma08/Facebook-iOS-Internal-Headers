//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceEventListener-Protocol.h"
#import "FBNotificationsSyncManagerListener-Protocol.h"

@class FBComponentTableViewDataSource, FBNotificationsSyncManager, NSArray, NSError, NSMutableDictionary, NSString;
@protocol FBNotificationsComponentsDataSourceDelegate;

@interface FBNotificationsComponentsDataSource : NSObject <FBComponentTableViewDataSourceEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBNotificationsSyncManagerListener>
{
    NSArray *_notifications;
    FBNotificationsSyncManager *_notificationsSyncManager;
    NSMutableDictionary *_enqueuedNotifications;
    BOOL _didSetupInitialChangeset;
    BOOL _renderingTailBatch;
    int _renderBatchSize;
    vector_a4d14ec1 _pendingChangesets;
    id <FBNotificationsComponentsDataSourceDelegate> _delegate;
    FBComponentTableViewDataSource *_tableViewDataSource;
    unsigned int _notificationsSection;
}

@property(readonly, nonatomic) unsigned int notificationsSection; // @synthesize notificationsSection=_notificationsSection;
@property(readonly, copy, nonatomic) NSArray *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) FBComponentTableViewDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(nonatomic) __weak id <FBNotificationsComponentsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_enqueuePendingChangesets;
- (struct Items)_initialChangeset;
- (void)_reloadCurrentTableView;
- (void)_cleanupCurrentTableView;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (void)dataSourceDidEndUpdates:(id)arg1 changeset:(struct Changeset)arg2;
- (void)notificationsSyncManager:(id)arg1 didUpdateWithChanges:(id)arg2;
- (void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned int)arg2 withLoadDataReason:(int)arg3 changeset:(id)arg4;
- (void)notificationsSyncManagerFinishedInitializing:(id)arg1;
@property(readonly, copy, nonatomic) NSString *actorFBID;
@property(readonly, nonatomic) BOOL needsReload;
@property(readonly, nonatomic) NSError *lastSyncError;
@property(readonly, nonatomic) BOOL loadingTail;
@property(readonly, nonatomic) BOOL loadingHead;
@property(readonly, nonatomic) BOOL loading;
- (void)markNotificationAsRead:(id)arg1;
- (void)markNotificationsAsSeen:(id)arg1;
- (void)markAllNotificationsAsSeen;
- (void)reloadDataWithReason:(int)arg1;
- (void)loadTailWithReason:(int)arg1;
- (void)loadHeadWithReason:(int)arg1;
- (void)reloadData;
- (void)setupInitialChangeset;
- (void)_updateNotificationsFromSyncManager:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 notificationsSyncManager:(id)arg2 componentProviderClass:(Class)arg3 notificationsSection:(unsigned int)arg4 renderBatchSize:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

