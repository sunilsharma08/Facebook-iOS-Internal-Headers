//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

@class ASDisplayNode, FBNodeContainerComponent, _FBNodeContainerComponentView;

@interface FBNodeContainerComponentController : CKComponentController
{
    ASDisplayNode *_node;
}

- (void).cxx_destruct;
- (void)_bindComponentViewToNode:(id)arg1;
- (void)componentWillRelinquishView;
- (void)componentDidAcquireView;
- (void)didRemount;
- (void)didUnmount;
- (void)didMount;

// Remaining properties
@property(readonly, nonatomic) __weak FBNodeContainerComponent *component; // @dynamic component;
@property(readonly, nonatomic) _FBNodeContainerComponentView *view; // @dynamic view;

@end

