//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol FBEventsComposerFieldControllerProtocol;

@protocol FBEventsComposerFieldControllerDelegate <NSObject>
- (void)composerFieldController:(id <FBEventsComposerFieldControllerProtocol>)arg1 didUpdateValue:(id)arg2;
- (UIViewController *)parentViewController;
- (void)reloadCollectionViewCellForFieldController:(id <FBEventsComposerFieldControllerProtocol>)arg1;
- (void)composerFieldController:(id <FBEventsComposerFieldControllerProtocol>)arg1 requestsResizeAnimated:(BOOL)arg2;
@end

