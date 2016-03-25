//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

#import "FBFeedEventBusListener-Protocol.h"
#import "FBFeedViewControllerLifecycleListener-Protocol.h"

@class FBStoryShareHandler, NSString;

@interface FBFeedStoryUFIComponentController : CKComponentController <FBFeedEventBusListener, FBFeedViewControllerLifecycleListener>
{
    FBStoryShareHandler *_shareHandler;
}

- (void).cxx_destruct;
- (void)updateStateToShowFakeComposer;
- (void)stopObservingFeedViewControllerLifeCycle;
- (void)startObservingFeedViewControllerLifeCycle;
- (void)feedEventBus:(id)arg1 didDetectEvent:(unsigned int)arg2;
- (void)feedViewDidAppear:(BOOL)arg1 isFirstTime:(BOOL)arg2;
- (void)shareAction:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)didUnmount;
- (void)didMount;
- (id)ufiComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

