//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPopoverMenu.h"

@class FBDelegateForwarder, FBModalViewCoordinator;

@interface _FBPopoverControllerCoordinatorNotifyingPopoverMenu : FBPopoverMenu
{
    FBModalViewCoordinator *_coordinator;
    FBDelegateForwarder *_forwarder;
    id _mainDelegate;
}

- (void).cxx_destruct;
- (void)presentPopoverAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetForwarder;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_configureCoordinator:(id)arg1;

@end

