//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseActionAdapter.h"

@class UIControl;

@interface FBReactionSeeAllNearbyPlacesActionAdapter : FBReactionBaseActionAdapter
{
    UIControl *_actionView;
}

- (void).cxx_destruct;
- (void)performActionWithExtras:(id)arg1;
- (BOOL)performMagicTap;
- (void)openNearbyPlacesFromFooterView:(BOOL)arg1 withExtras:(id)arg2;
- (void)actionViewTapped:(id)arg1;
- (id)actionView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4;

@end

