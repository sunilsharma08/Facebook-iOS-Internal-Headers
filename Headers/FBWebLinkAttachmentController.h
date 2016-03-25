//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBOpenableAttachmentController.h"

#import "FBPopoverControllerDelegate-Protocol.h"
#import "FBWebLinkAttachmentNodeDelegate-Protocol.h"

@class FBPaperModalViewController, FBPopoverActionSheet, FBWebLinkAttachmentNode, NSString;

@interface FBWebLinkAttachmentController : FBOpenableAttachmentController <FBWebLinkAttachmentNodeDelegate, FBPopoverControllerDelegate>
{
    FBWebLinkAttachmentNode *_attachmentNode;
    FBPopoverActionSheet *_popoverActionSheet;
    BOOL _isPlayingFullscreenMovie;
    id _didEnterFullscreenMovieNotificationHandle;
    id _willExitFullscreenMovieNotificationHandle;
    FBPaperModalViewController *_mailModalViewController;
    FBPaperModalViewController *_messageModalViewController;
}

@property(readonly, nonatomic) FBWebLinkAttachmentNode *attachmentNode; // @synthesize attachmentNode=_attachmentNode;
- (void).cxx_destruct;
- (void)fb_popoverControllerDidReattachToArrow:(id)arg1;
- (void)fb_popoverControllerDidTearFromArrow:(id)arg1;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)_setShareButtonSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)webLinkAttachmentNodeDidShare:(id)arg1;
- (void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2;
- (void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2;
- (BOOL)handleIndirectNavigation:(id)arg1;
- (void)_unobserveFullscreenMovieState;
- (void)_observeFullscreenMovieState;
- (void)cardDidSettleWithoutFullscreenFocus:(int)arg1;
- (void)cardMaySettleWithFullscreenFocus;
- (void)cardDidSettleWithFullscreenFocus;
- (void)dealloc;
- (id)initWithSession:(id)arg1 URL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

