//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseActionAdapter.h"

@class FBUserSession, UIControl;

@interface FBReactionCheckinWithFriendsActionAdapter : FBReactionBaseActionAdapter
{
    UIControl *_actionView;
    FBUserSession *_session;
    int _renderIdiom;
}

@property(nonatomic) int renderIdiom; // @synthesize renderIdiom=_renderIdiom;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (BOOL)performMagicTap;
- (void)_performAction;
- (void)performActionWithExtras:(id)arg1;
- (void)checkinTapped;
- (id)actionView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4;

@end

