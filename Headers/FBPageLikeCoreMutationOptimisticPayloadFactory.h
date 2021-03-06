//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPageLikeMutationOptimisticPayloadFactoryProtocol-Protocol.h"

@class FBMemPage, NSString;

@interface FBPageLikeCoreMutationOptimisticPayloadFactory : NSObject <FBPageLikeMutationOptimisticPayloadFactoryProtocol>
{
    FBMemPage *_page;
    BOOL _optimisticallySetSubscribeStatus;
}

- (void).cxx_destruct;
- (id)rollbackOptimisticPayload:(id)arg1;
- (id)optimisticPayload:(id)arg1;
- (id)buildPageFromInput:(id)arg1 withDoesLikePage:(id)arg2 likerCount:(id)arg3 subscribeStatus:(id)arg4 secondarySubscribeStatus:(id)arg5;
- (id)initWithPage:(id)arg1 optimisticallySetSubscribeStatus:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

