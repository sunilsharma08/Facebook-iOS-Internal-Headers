//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol-Protocol.h"

@class FBMemPageLikeResponsePayload, FBPageLikeInputData;

@protocol FBPageLikeMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemPageLikeResponsePayload *)rollbackOptimisticPayload:(FBPageLikeInputData *)arg1;
- (FBMemPageLikeResponsePayload *)optimisticPayload:(FBPageLikeInputData *)arg1;
@end

