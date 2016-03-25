//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPickUpAttachmentNode.h"

#import "FBPageableItem-Protocol.h"

@class NSString;

@interface FBPageablePickUpAttachmentNode : FBPickUpAttachmentNode <FBPageableItem>
{
    BOOL _snappedOpenForPaging;
    BOOL _activePageInPagingNode;
    BOOL _wasActivePageInPagingNodeBeforeClosing;
    int _initialPagingOrientation;
}

@property(nonatomic) BOOL wasActivePageInPagingNodeBeforeClosing; // @synthesize wasActivePageInPagingNodeBeforeClosing=_wasActivePageInPagingNodeBeforeClosing;
@property(nonatomic) BOOL activePageInPagingNode; // @synthesize activePageInPagingNode=_activePageInPagingNode;
@property(nonatomic) BOOL snappedOpenForPaging; // @synthesize snappedOpenForPaging=_snappedOpenForPaging;
@property(nonatomic) int initialPagingOrientation; // @synthesize initialPagingOrientation=_initialPagingOrientation;
- (void)didSettleAsInactivePage;
- (void)didSettleAsActivePage;
- (void)maySettleAsActivePage;
- (void)didBeginMoving;
- (void)didExitPagingRange;
- (void)didEnterPagingRange;
- (void)cleanUpAfterPaging;
- (void)prepareForPagingInContext:(unsigned int)arg1 inOrientation:(int)arg2 withPagingGestureRecognizer:(id)arg3;
- (BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(int)arg2;
- (int)initialOpenedOrientation;
- (void)mayClose;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(nonatomic) BOOL supportsOrientationRotation;

@end

