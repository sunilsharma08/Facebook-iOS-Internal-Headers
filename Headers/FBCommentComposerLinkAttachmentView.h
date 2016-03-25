//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBCommentLinkAttachmentView, FBUserSession, UIButton;
@protocol FBCommentComposerLinkAttachmentViewDelegate;

@interface FBCommentComposerLinkAttachmentView : UIView
{
    FBUserSession *_session;
    id <FBCommentComposerLinkAttachmentViewDelegate> _delegate;
    UIButton *_deleteButton;
    FBCommentLinkAttachmentView *_linkAttachmentView;
}

@property(retain, nonatomic) FBCommentLinkAttachmentView *linkAttachmentView; // @synthesize linkAttachmentView=_linkAttachmentView;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (void)deleteTapped;
- (void)setLinkAttachment:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

@end

