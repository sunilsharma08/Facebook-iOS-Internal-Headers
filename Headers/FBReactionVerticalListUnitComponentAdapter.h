//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

#import "FBReactionActionAdapterDelegate-Protocol.h"

@class FBReactionAdapterContext, NSArray, NSString, UIView;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBQueriedReactionUnitFieldsProtocol, FBReactionUnitComponentAdapterDelegate;

@interface FBReactionVerticalListUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionActionAdapterDelegate>
{
    UIView *_componentView;
    id <FBQueriedReactionUnitFieldsProtocol> _unit;
    id <FBQueriedReactionUnitComponentFieldsProtocol> _component;
    FBReactionAdapterContext *_context;
    BOOL _isFirst;
    BOOL _isLast;
    NSArray *_childComponentAdapters;
    id <FBReactionUnitComponentAdapterDelegate> _delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)parentComponentShouldHighlight:(BOOL)arg1 forUnitComponentAdapter:(id)arg2;
- (void)updateUnitComponentReloadingStateToIsReloading:(BOOL)arg1;
- (void)didEndDisplayingUnitComponent;
- (void)willDisplayUnitComponent;
- (BOOL)performMagicTap;
- (id)_makeNewDivider;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

