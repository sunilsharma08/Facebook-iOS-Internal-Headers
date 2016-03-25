//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReactionAttachmentsAdapter-Protocol.h"
#import "_FBReactionAdapterHelperDelegate-Protocol.h"

@class FBReactionAdapterContext, FBUserSession, NSMutableArray, NSString, UIView;
@protocol FBQueriedReactionUnitFieldsProtocol, FBReactionActionAdapter, FBReactionAttachmentsAdapterDelegate;

@interface FBReactionStoryListAttachmentsAdapter : NSObject <_FBReactionAdapterHelperDelegate, FBReactionAttachmentsAdapter>
{
    UIView *_attachmentsView;
    FBReactionAdapterContext *_reactionContext;
    id <FBReactionAttachmentsAdapterDelegate> _delegate;
    id <FBReactionActionAdapter> _actionAdapter;
    FBUserSession *_session;
    id <FBQueriedReactionUnitFieldsProtocol> _unit;
    NSMutableArray *_adapterHelpers;
}

@property(copy, nonatomic) NSMutableArray *adapterHelpers; // @synthesize adapterHelpers=_adapterHelpers;
@property(retain, nonatomic) id <FBQueriedReactionUnitFieldsProtocol> unit; // @synthesize unit=_unit;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <FBReactionActionAdapter> actionAdapter; // @synthesize actionAdapter=_actionAdapter;
@property(nonatomic) __weak id <FBReactionAttachmentsAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_performMagicTapForAttachments;
- (void)openURL:(id)arg1 forAdapterHelper:(id)arg2;
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

