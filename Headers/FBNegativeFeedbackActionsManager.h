//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class FBUserSession, NSString, UIAlertView;

@interface FBNegativeFeedbackActionsManager : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_confirmationAlert;
    CDUnknownBlockType _pendingExecuteBlock;
    FBUserSession *_session;
    unsigned int _layoutIdiom;
}

+ (void)sendNegativeFeedbackRequestForActionType:(id)arg1 hideableToken:(id)arg2 isUndo:(BOOL)arg3 trackingCodes:(id)arg4 graphQLID:(id)arg5 session:(id)arg6 location:(id)arg7 actionPath:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
+ (void)undoNegativeFeedbackAction:(id)arg1 hideableToken:(id)arg2 unit:(id)arg3 trackingCodes:(id)arg4 session:(id)arg5 layoutIdiom:(unsigned int)arg6 actionPath:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
+ (void)sendNegativeFeedbackAction:(id)arg1 hideableToken:(id)arg2 unit:(id)arg3 trackingCodes:(id)arg4 actionPath:(id)arg5 session:(id)arg6 layoutIdiom:(unsigned int)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_promptOrExecuteForAction:(id)arg1 unit:(id)arg2 withExecuteBlock:(CDUnknownBlockType)arg3;
- (void)userDidSelectAction:(id)arg1 hideableToken:(id)arg2 unit:(id)arg3 trackingCodes:(id)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithSession:(id)arg1 layoutIdiom:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

