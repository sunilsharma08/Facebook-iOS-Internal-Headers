//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

@class FBReactionAdapterContext, FBReactionTabSwitcherWithLabelsOnBottomComponentView;
@protocol FBReactionUnitComponentAdapterDelegate;

@interface FBReactionTabSwitcherWithLabelsOnBottomComponentAdapter : FBReactionBaseUnitComponentAdapter
{
    FBReactionAdapterContext *_context;
    FBReactionTabSwitcherWithLabelsOnBottomComponentView *_componentView;
    struct vector<std::__1::pair<NSAttributedString *, id<FBReactionUnitComponentAdapter>>, std::__1::allocator<std::__1::pair<NSAttributedString *, id<FBReactionUnitComponentAdapter>>>> _componentLabelsAndViews;
    id <FBReactionUnitComponentAdapterDelegate> delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;
- (id)init;

@end

