//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

#import "FBReactionFixedHeightVerticallyCenteredViewDelegate-Protocol.h"

@class FBReactionAdapterContext, NSString, UIView;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBReactionActionAdapter;

@interface FBReactionFixedHeightParagraphUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionFixedHeightVerticallyCenteredViewDelegate>
{
    id <FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
    id <FBReactionActionAdapter> _actionAdapter;
    UIView *_componentView;
    NSString *_style;
    FBReactionAdapterContext *_reactionContext;
}

+ (id)_contentViewForStyle:(id)arg1 message:(id)arg2 subMessage:(id)arg3;
- (void).cxx_destruct;
- (void)fixedHeightVerticallyCenteredView:(id)arg1 isHighlighted:(BOOL)arg2;
- (BOOL)performMagicTap;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

