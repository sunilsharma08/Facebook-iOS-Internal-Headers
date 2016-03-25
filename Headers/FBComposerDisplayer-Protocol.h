//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBComposerFacecastPresentationHandler-Protocol.h"
#import "FBComposerPlatformShareDataLoadListener-Protocol.h"
#import "FBComposerRemoteMediaAttachmentsListener-Protocol.h"
#import "FBPublicationSubscriptionHandler-Protocol.h"
#import "NSObject-Protocol.h"

@class FBComposerBootstrapContent, FBExceptionHandler, FBPublisherManager, UIView;
@protocol FBComposerAudioRendererFactory, FBComposerFlowDelegate, FBComposerPresentationHandler;

@protocol FBComposerDisplayer <NSObject, FBComposerPlatformShareDataLoadListener, FBComposerRemoteMediaAttachmentsListener, FBComposerFacecastPresentationHandler, FBPublicationSubscriptionHandler>
- (BOOL)isComposerActive;
- (void)setupWithPublisherManager:(FBPublisherManager *)arg1 composerAudioRendererFactory:(id <FBComposerAudioRendererFactory>)arg2 exceptionHandler:(FBExceptionHandler *)arg3;
- (void)dismissComposerAnimated:(BOOL)arg1;
- (void)openComposerWithBootstrapContent:(FBComposerBootstrapContent *)arg1 presentationHandler:(id <FBComposerPresentationHandler>)arg2 startingStyle:(unsigned int)arg3 sourceView:(UIView *)arg4 delegate:(id <FBComposerFlowDelegate>)arg5 animated:(BOOL)arg6;
@end

