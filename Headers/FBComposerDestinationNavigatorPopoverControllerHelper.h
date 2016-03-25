//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPopoverControllerDelegate-Protocol.h"

@class NSString;
@protocol FBComposerDestinationNavigatorPopoverControllerHelperDelegate;

@interface FBComposerDestinationNavigatorPopoverControllerHelper : NSObject <FBPopoverControllerDelegate>
{
    id <FBComposerDestinationNavigatorPopoverControllerHelperDelegate> _delegate;
    BOOL _hasRegisterNotification;
}

- (void).cxx_destruct;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (BOOL)fb_popoverControllerShouldDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)_positionPopoverNavigationNode:(id)arg1 orientation:(int)arg2;
- (void)_updatePopoverPosition;
- (void)_orientationChanged:(id)arg1;
- (void)presentPopoverControllerForNode:(id)arg1 navigationInfo:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

