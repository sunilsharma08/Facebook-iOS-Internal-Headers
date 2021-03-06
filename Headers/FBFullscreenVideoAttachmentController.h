//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVideoAttachmentController.h"

#import "FBFullscreenAttachmentNodeDelegate-Protocol.h"

@class FBFullscreenVideoAttachmentNode, NSString;
@protocol FBFullscreenVideoAttachmentControllerDelegate;

@interface FBFullscreenVideoAttachmentController : FBVideoAttachmentController <FBFullscreenAttachmentNodeDelegate>
{
    FBFullscreenVideoAttachmentNode *_attachmentNode;
}

+ (BOOL)controllerCanRenderFeedAttachment:(id)arg1 withAttachmentDisplayContext:(id)arg2 session:(id)arg3;
- (void).cxx_destruct;
- (void)cardWillEndModalFullscreenInteraction;
- (void)fullscreenAttachmentNode:(id)arg1 willEnterModalInteraction:(BOOL)arg2;
- (void)exitModalInteraction;
- (void)enterModalInteraction;
- (id)attachmentNode;
- (void)cardDidBeginMoving:(int)arg1;
- (void)cardMaySettleWithFullscreenFocus;
- (BOOL)shouldAllowDismissGestureAtPoint:(struct CGPoint)arg1 inDirection:(int)arg2;
- (void)dealloc;
- (id)initWithFeedAttachment:(id)arg1 withAttachmentContext:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <FBFullscreenVideoAttachmentControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

