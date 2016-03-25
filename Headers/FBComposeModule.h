//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNativeAppModule.h"

#import "FBNuxProvider-Protocol.h"

@class FBExceptionHandler, FBPublisherManager, FBVideoUploadProcessingNotifier, NSString;
@protocol FBComposerAudioRendererFactory, FBPublisherProvider;

@interface FBComposeModule : FBNativeAppModule <FBNuxProvider>
{
    BOOL _allowUserComposingOutsideComposer;
    id <FBPublisherProvider> _publisherProvider;
    FBVideoUploadProcessingNotifier *_videoUploadProcessingNotifier;
    FBPublisherManager *_publisherManager;
    FBExceptionHandler *_exceptionHandler;
    id <FBComposerAudioRendererFactory> _composerAudioRendererFactory;
}

+ (id)moduleForSession:(id)arg1;
@property(readonly, nonatomic) id <FBComposerAudioRendererFactory> composerAudioRendererFactory; // @synthesize composerAudioRendererFactory=_composerAudioRendererFactory;
@property(readonly, nonatomic) FBExceptionHandler *exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
- (void).cxx_destruct;
- (id)nuxPresenters;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)URLSegues;
- (BOOL)allowUserComposingOutsideComposer;
- (void)setAllowUserComposingOutsideComposer:(BOOL)arg1;
- (id)ID;
@property(readonly, nonatomic) FBPublisherManager *publisherManager; // @synthesize publisherManager=_publisherManager;
- (id)services;
- (void)cleanupSession;
- (id)initWithPublisherProvider:(id)arg1 composerAudioRendererFactory:(id)arg2 session:(id)arg3 providerMap:(id)arg4;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

