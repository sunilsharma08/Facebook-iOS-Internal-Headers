//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerDestinationNavigatorPopoverControllerHelperDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class FBComposerDestinationNavigatorPopoverControllerHelper, FBComposerNavigationNode, FBUserSession, NSMapTable, NSString;
@protocol FBComposerPresentationHandler;

@interface FBComposerDestinationNavigator : NSObject <FBComposerDestinationNavigatorPopoverControllerHelperDelegate, UINavigationControllerDelegate>
{
    FBComposerDestinationNavigatorPopoverControllerHelper *_popoverControllerHelper;
    id <FBComposerPresentationHandler> _presentationHandler;
    FBComposerNavigationNode *_currentNode;
    FBComposerNavigationNode *_rootNode;
    NSMapTable *_destinationTypeToNodeMap;
    NSMapTable *_completionBlocksForPopNavigationControllers;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (id)_viewControllerToPresentModallyForViewController:(id)arg1 options:(unsigned int *)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)_popedNavigationNodeWhenViewControllerIsShownInNavigationController:(id)arg1;
- (void)popoverControllerNodeWillBeDismissed:(id)arg1;
- (id)currentPopoverControllerNode;
- (void)_addChildNodeToCurrentNode:(id)arg1;
- (void)_dismissNavigationNode:(id)arg1;
- (id)_viewControllerToShowInPushBehindVCContainer:(id)arg1 options:(unsigned int)arg2;
- (id)destinationInfo:(id)arg1;
- (id)currentDestination;
- (void)dismissDestination:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentDestination:(id)arg1 withNavigationInfo:(id)arg2 animated:(BOOL)arg3;
- (id)initWithPresentationHandler:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

