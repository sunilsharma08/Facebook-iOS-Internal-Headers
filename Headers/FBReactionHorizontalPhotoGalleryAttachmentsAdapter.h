//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBClonePhotoViewProviderDelegate-Protocol.h"
#import "FBPhotoViewControllerDelegate-Protocol.h"
#import "FBReactionAttachmentsAdapter-Protocol.h"
#import "FBReactionPhotoAttachmentsDataSourceInteractionDelegate-Protocol.h"

@class FBReactionPhotoAttachmentsCollectionViewDataSource, FBReactionPhotoCollageLayoutDelegate, FBReactionPhotoStore, FBUserSession, NSString, UICollectionView, UIView;
@protocol FBQueriedReactionUnitFieldsProtocol, FBReactionActionAdapter, FBReactionAttachmentsAdapterDelegate;

@interface FBReactionHorizontalPhotoGalleryAttachmentsAdapter : NSObject <FBReactionPhotoAttachmentsDataSourceInteractionDelegate, FBPhotoViewControllerDelegate, FBClonePhotoViewProviderDelegate, FBReactionAttachmentsAdapter>
{
    UIView *_attachmentsView;
    id <FBQueriedReactionUnitFieldsProtocol> _unit;
    UICollectionView *_collectionView;
    FBReactionPhotoAttachmentsCollectionViewDataSource *_collectionViewDataSource;
    unsigned int _farthestScrolledPhotoIndex;
    BOOL _userDidScroll;
    id <FBReactionAttachmentsAdapterDelegate> _delegate;
    id <FBReactionActionAdapter> _actionAdapter;
    FBUserSession *_session;
    FBReactionPhotoStore *_photoStore;
    FBReactionPhotoCollageLayoutDelegate *_layoutDelegate;
    NSString *_style;
}

@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) FBReactionPhotoCollageLayoutDelegate *layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) FBReactionPhotoStore *photoStore; // @synthesize photoStore=_photoStore;
@property(nonatomic) BOOL userDidScroll; // @synthesize userDidScroll=_userDidScroll;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <FBReactionActionAdapter> actionAdapter; // @synthesize actionAdapter=_actionAdapter;
@property(nonatomic) __weak id <FBReactionAttachmentsAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_performMagicTapForAttachments;
- (id)clonePhotoViewProvider:(id)arg1 cloneViewForPhoto:(id)arg2;
- (void)photoViewController:(id)arg1 willDismissAfterDeletingPhoto:(id)arg2;
- (void)logPhotoViewedAtIndex:(unsigned int)arg1 inCollectionView:(id)arg2 forCollectionViewDataSource:(id)arg3;
- (void)userDidScrollCollectionView:(id)arg1 forCollectionViewDataSource:(id)arg2;
- (void)photoTappedAtIndex:(unsigned int)arg1 inCollectionView:(id)arg2 forCollectionViewDataSource:(id)arg3;
- (id)impressionEventLoggingExtras;
- (void)updateAttachmentsVisibility:(struct CGRect)arg1 scrollView:(id)arg2;
- (void)didEndDisplayingAttachments;
- (void)willDisplayAttachments;
- (BOOL)supportsBottomBorder;
- (id)actionsView;
- (id)attachmentsView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3;
- (id)init;
- (BOOL)performMagicTap;
- (void)actionMessageDidChange:(id)arg1 forReactionActionAdapter:(id)arg2;
- (void)replaceUnit:(id)arg1 withUnit:(id)arg2 forReactionActionAdapter:(id)arg3;
- (void)hideUnit:(id)arg1 forReactionActionAdapter:(id)arg2;
- (void)downloadUnitForReactionActionAdapter:(id)arg1;
- (void)presentActionSheet:(id)arg1 forReactionActionAdapter:(id)arg2;
- (void)userDidPerformInteraction:(id)arg1 withExtras:(id)arg2 forReactionActionAdapter:(id)arg3;
- (void)presentComposerWithBootstrapContent:(id)arg1 delegate:(id)arg2 forReactionActionAdapter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

