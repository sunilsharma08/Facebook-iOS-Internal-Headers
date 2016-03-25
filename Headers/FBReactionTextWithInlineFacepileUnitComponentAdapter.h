//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

#import "FBReactionTextWithInlineFacepileViewDelegate-Protocol.h"

@class FBReactionAdapterContext, NSString, UIView;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBReactionActionAdapter;

@interface FBReactionTextWithInlineFacepileUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionTextWithInlineFacepileViewDelegate>
{
    UIView *_componentView;
    id <FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
    FBReactionAdapterContext *_reactionContext;
    id <FBReactionActionAdapter> _actionAdapter;
    BOOL _isLast;
}

+ (id)_newMoreProfilesIndicatorWithCount:(unsigned int)arg1;
+ (id)_profileViewsWithProfiles:(id)arg1 session:(id)arg2;
- (void).cxx_destruct;
- (void)textWithInlineFacepileView:(id)arg1 isHighlighted:(BOOL)arg2;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

