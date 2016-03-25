//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class FBNotificationsLoggingContext, FBUserSession, NSArray, NSString;
@protocol FBFeedbackTableViewCellResponderDelegate;

@interface FBFeedbackTableViewCellResponder : UIResponder
{
    FBUserSession *_session;
    NSArray *_trackingCodes;
    FBNotificationsLoggingContext *_notificationLoggingContext;
    BOOL _enableOnlyReplyAndLikeActions;
    NSString *_analyticsModule;
    id <FBFeedbackTableViewCellResponderDelegate> _delegate;
}

@property(nonatomic) BOOL enableOnlyReplyAndLikeActions; // @synthesize enableOnlyReplyAndLikeActions=_enableOnlyReplyAndLikeActions;
@property(nonatomic) id <FBFeedbackTableViewCellResponderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (void).cxx_destruct;
- (void)_richTextViewAction:(id)arg1 withEvent:(id)arg2;
- (void)_showAvatarSequenceInPopoverWithRelation:(unsigned int)arg1 sourceView:(id)arg2 viewController:(id)arg3;
- (BOOL)_handleLinkTapAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_commentCellReplyAction:(id)arg1 event:(id)arg2 activateKeyboardSource:(id)arg3;
- (void)commentPermalinkReplyDetailAction:(id)arg1 withEvent:(id)arg2;
- (void)commentCellReplyComposerAction:(id)arg1 withEvent:(id)arg2;
- (void)commentCellReplyWithKeyboardAction:(id)arg1 withEvent:(id)arg2;
- (void)commentCellReplyDetailAction:(id)arg1 withEvent:(id)arg2;
- (void)seenBySentenceAction:(id)arg1 withEvent:(id)arg2;
- (void)socialSentenceAction:(id)arg1 withEvent:(id)arg2;
- (void)commentCellShareLinkAction:(id)arg1;
- (void)commentPermalinkViewEditHistoryAction:(id)arg1;
- (void)commentCellViewEditHistoryAction:(id)arg1;
- (void)commentCellEditUpdateAction:(id)arg1;
- (void)commentCellEditCancelAction:(id)arg1;
- (void)commentCellPhotoAttachmentAction:(id)arg1;
- (void)commentCellLinkAttachmentAction:(id)arg1;
- (void)commentCellStickerAttachmentAction:(id)arg1;
- (void)commentCellLikeCountViewAction:(id)arg1;
- (void)commentPermalinkLikeCountViewAction:(id)arg1;
- (void)commentCellAttributedLabelAction:(id)arg1 withEvent:(id)arg2;
- (void)commentCellActorButtonAction:(id)arg1;
- (void)_commentLikeAction:(id)arg1 comment:(id)arg2 isCommentReply:(BOOL)arg3;
- (void)commentCellLikeAction:(id)arg1;
- (void)commentPermalinkLikeAction:(id)arg1;
- (void)showAvatarSequenceForFeedback:(id)arg1 relation:(unsigned int)arg2 sourceView:(id)arg3 inlineExpansionAllowed:(BOOL)arg4;
- (void)openEntityURL:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (id)init;
- (id)initWithAnalyticsModule:(id)arg1 session:(id)arg2 trackingCodes:(id)arg3 notificationLoggingContext:(id)arg4;

@end

