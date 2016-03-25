//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReactionAttachmentActionAdapterDelegate-Protocol.h"
#import "FBReactionAttachmentsAdapter-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "_FBReactionAdapterProfileHelperDelegate-Protocol.h"

@class FBReactionAdapterContext, FBUserSession, NSMutableArray, NSString, UIView;
@protocol FBQueriedReactionUnitFieldsProtocol, FBReactionActionAdapter, FBReactionAttachmentsAdapterDelegate;

@interface FBReactionEntityHorizontalScrollAttachmentsAdapter : NSObject <_FBReactionAdapterProfileHelperDelegate, UIScrollViewDelegate, FBReactionAttachmentActionAdapterDelegate, FBReactionAttachmentsAdapter>
{
    UIView *_attachmentsView;
    NSMutableArray *_attachmentActionAdaptersForIndexing;
    FBReactionAdapterContext *_reactionContext;
    BOOL _userHasScrolled;
    id <FBReactionAttachmentsAdapterDelegate> _delegate;
    id <FBReactionActionAdapter> _actionAdapter;
    FBUserSession *_session;
    id <FBQueriedReactionUnitFieldsProtocol> _unit;
    NSMutableArray *_adapterHelpers;
    NSString *_attachmentStyle;
}

+ (id)_destinationEntityIdForAttachment:(id)arg1;
+ (id)_destinationUrlForAttachment:(id)arg1;
+ (id)_itemViewForAttachment:(id)arg1 attachmentAction:(id)arg2 session:(id)arg3 style:(id)arg4;
@property(nonatomic) BOOL userHasScrolled; // @synthesize userHasScrolled=_userHasScrolled;
@property(copy, nonatomic) NSString *attachmentStyle; // @synthesize attachmentStyle=_attachmentStyle;
@property(copy, nonatomic) NSMutableArray *adapterHelpers; // @synthesize adapterHelpers=_adapterHelpers;
@property(retain, nonatomic) id <FBQueriedReactionUnitFieldsProtocol> unit; // @synthesize unit=_unit;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <FBReactionActionAdapter> actionAdapter; // @synthesize actionAdapter=_actionAdapter;
@property(nonatomic) __weak id <FBReactionAttachmentsAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadUnitForReactionAttachmentActionAdapter:(id)arg1;
- (void)presentActionSheet:(id)arg1 forReactionAttachmentActionAdapter:(id)arg2;
- (void)userDidPerformInteraction:(id)arg1 withExtras:(id)arg2 forReactionAttachmentActionAdapter:(id)arg3;
- (void)presentComposerWithBootstrapContent:(id)arg1 delegate:(id)arg2 forReactionAttachmentActionAdapter:(id)arg3;
- (BOOL)_performMagicTapForAttachments;
- (id)_pullProfiles;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)openProfile:(id)arg1 forAdapterHelper:(id)arg2;
- (BOOL)supportsBottomBorder;
- (id)actionsView;
- (id)attachmentsView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3;
- (id)init;
- (void)updateAttachmentsVisibility:(struct CGRect)arg1 scrollView:(id)arg2;
- (id)impressionEventLoggingExtras;
- (void)didEndDisplayingAttachments;
- (void)willDisplayAttachments;
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

