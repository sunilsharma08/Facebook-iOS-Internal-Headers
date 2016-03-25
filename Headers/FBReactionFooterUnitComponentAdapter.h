//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

#import "FBReactionActionAdapterDelegate-Protocol.h"

@class FBReactionAdapterContext, NSString, UIView;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBReactionActionAdapter, FBReactionUnitComponentAdapterDelegate;

@interface FBReactionFooterUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionActionAdapterDelegate>
{
    UIView *_componentView;
    id <FBQueriedReactionUnitComponentFieldsProtocol> _component;
    FBReactionAdapterContext *_context;
    NSString *_style;
    id <FBReactionActionAdapter> _actionAdapter;
    BOOL _isFirst;
    BOOL _isLast;
    int _renderIdiom;
    id <FBReactionUnitComponentAdapterDelegate> delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)performMagicTap;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

