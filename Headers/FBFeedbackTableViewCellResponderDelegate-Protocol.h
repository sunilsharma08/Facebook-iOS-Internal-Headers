//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBCommentReplyHeaderView, FBCommentTableViewCell, FBFeedbackTableViewCellResponder, FBMemComment, FBMemFeedback, FBMemStoryAttachment, NSString, NSURL, UIResponder, UIView, UIViewController;
@protocol FBNavigationCoordinator;

@protocol FBFeedbackTableViewCellResponderDelegate <NSObject>
- (UIViewController *)hostViewControllerForFeedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1;
- (id <FBNavigationCoordinator>)navigationCoordinatorForFeedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1;
- (UIResponder *)nextResponderForFeedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1;

@optional
- (BOOL)feedbackTableViewCellResponderIsCommentPermalink:(FBFeedbackTableViewCellResponder *)arg1;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 didChangeLikeStatus:(BOOL)arg2 forComment:(FBMemComment *)arg3;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 shareStoryAttachment:(FBMemStoryAttachment *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidTapReplyLinkOnCommentPermalink:(FBCommentReplyHeaderView *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidRequestRepliesForComment:(FBMemComment *)arg2 activateKeyboardSource:(NSString *)arg3;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidTapOnPhotoForCommentCell:(FBCommentTableViewCell *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidTapOnStickerForCommentCell:(FBCommentTableViewCell *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidRequestUpdateForCommentCell:(FBCommentTableViewCell *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidRequestEditHistoryForCommentPermalink:(FBCommentReplyHeaderView *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidRequestEditHistoryForCommentCell:(FBCommentTableViewCell *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 userDidCancelEditingForCommentCell:(FBCommentTableViewCell *)arg2;
- (void)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 openFeedbackActionURL:(NSURL *)arg2;
- (BOOL)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 willPresentAvatarSequenceViewController:(UIViewController *)arg2 fromSourceView:(UIView *)arg3;
- (Class)avatarSequenceViewControllerClassForFeedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1;
- (BOOL)feedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1 wantsToPresentAvatarSequenceForFeedback:(FBMemFeedback *)arg2 relation:(unsigned int)arg3 inlineExpansionAllowed:(BOOL)arg4;
- (FBMemFeedback *)feedbackForFeedbackTableViewCellResponder:(FBFeedbackTableViewCellResponder *)arg1;
@end

