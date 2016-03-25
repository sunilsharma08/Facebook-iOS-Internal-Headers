//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBEventsComposerCancelEventFieldControllerDelegate-Protocol.h"
#import "FBEventsComposerCoverPhotoFieldControllerDelegate-Protocol.h"
#import "FBEventsComposerFieldControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class FBEventAnalyticTracker, FBMemEvent, FBUserSession, NSArray, NSMapTable, NSString, UICollectionView, UIViewController;
@protocol FBEventsComposerCollectionViewDataSourceDelegate, FBPhotoAttachmentProtocol;

@interface FBEventsComposerCollectionViewDataSource : NSObject <FBEventsComposerFieldControllerDelegate, FBEventsComposerCoverPhotoFieldControllerDelegate, FBEventsComposerCancelEventFieldControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    FBMemEvent *_event;
    FBUserSession *_session;
    FBEventAnalyticTracker *_tracker;
    unsigned int _privacyType;
    UIViewController *_parentViewController;
    id <FBPhotoAttachmentProtocol> _updatedCoverPhotoAttachment;
    NSArray *_fieldSets;
    NSMapTable *_fieldControllerMap;
    UICollectionView *_collectionView;
    BOOL _isInitialized;
    BOOL _guestsCanInvite;
    BOOL _didUpdateCoverPhoto;
    id <FBEventsComposerCollectionViewDataSourceDelegate> _delegate;
}

@property(nonatomic) BOOL didUpdateCoverPhoto; // @synthesize didUpdateCoverPhoto=_didUpdateCoverPhoto;
@property(nonatomic) __weak id <FBEventsComposerCollectionViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_indexPathForFieldType:(unsigned int)arg1;
- (id)_configurationForPrivacyType:(unsigned int)arg1;
- (void)_configureDataSourceForFieldConfiguration:(id)arg1;
- (void)didCancelEventWithFieldController:(id)arg1 withError:(id)arg2;
- (void)willCancelEventWithFieldController:(id)arg1;
- (void)composerFieldController:(id)arg1 didUpdateCoverPhotoWithAttachment:(id)arg2;
- (void)composerFieldController:(id)arg1 didUpdateTitleWithText:(id)arg2;
- (id)parentViewController;
- (void)reloadCollectionViewCellForFieldController:(id)arg1;
- (void)composerFieldController:(id)arg1 requestsResizeAnimated:(BOOL)arg2;
- (void)composerFieldController:(id)arg1 didUpdateValue:(id)arg2;
- (id)_fieldControllerAtIndexPath:(id)arg1;
- (id)_fieldSetsFromConfigurationArray:(id)arg1;
- (id)_publicEventEditFieldTypeConfiguration;
- (id)_privateEventEditFieldTypeConfiguration;
- (id)_publicEventCreateFieldTypeConfiguration;
- (id)_privateEventCreateFieldTypeConfiguration;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureForPrivacyType:(unsigned int)arg1;
- (id)cellControllers;
- (id)updatedCoverPhotoAttachment;
- (id)fieldControlleForField:(unsigned int)arg1;
- (id)initWithSession:(id)arg1 parentViewController:(id)arg2 event:(id)arg3 collectionView:(id)arg4 tracker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

