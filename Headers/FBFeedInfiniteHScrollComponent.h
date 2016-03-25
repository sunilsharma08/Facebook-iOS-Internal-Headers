//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedHScrollComponent, FBUserSession, NSString;

@interface FBFeedInfiniteHScrollComponent : CKCompositeComponent
{
    unsigned int _endReason;
    NSString *_tailCursor;
    unsigned int _lastCompletedLoadIdentifier;
    CDUnknownBlockType _queryFactory;
    CDUnknownBlockType _responseProcessor;
    const struct FBGraphQLFieldSet *_edgeFieldSet;
    CDUnknownBlockType _shouldLoadMore;
    CDUnknownBlockType _edgeValidator;
    FBUserSession *_session;
    unsigned int _numberOfEdges;
    NSString *_perfLoggingEventUnitTypeName;
    NSString *_perfLoggingEventIdentifier;
    unsigned int _networkRequestThresholdInSeconds;
    FBFeedHScrollComponent *_hScrollComponent;
}

+ (id)newWithInitialConnection:(id)arg1 connectionConfig:(const struct FBFeedInfiniteHScrollComponentConnectionConfig *)arg2 options:(struct FBFeedInfiniteHScrollOptions)arg3 style:(struct FBHScrollComponentStyle)arg4 toolbox:(id)arg5;
- (void).cxx_destruct;
- (void)updateEdge:(id)arg1 withHandle:(id)arg2;
- (void)updateStateWithEndReason:(unsigned int)arg1 lastCompletedLoadIdentifier:(unsigned int)arg2;
- (void)updateStateWithNewEdges:(const vector_fd5cb2a1 *)arg1 tailCursor:(id)arg2 hasNextPage:(BOOL)arg3 lastCompletedLoadIdentifier:(unsigned int)arg4;
- (unsigned int)totalNumberOfEdges;
- (BOOL)scrollInDirection:(unsigned int)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3;
- (void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3;
- (void)scrollToComponentAtIndex:(unsigned int)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3;

@end

