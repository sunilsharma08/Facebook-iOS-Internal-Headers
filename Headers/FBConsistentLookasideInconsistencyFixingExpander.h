//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConsistentLookasideCacheExpander-Protocol.h"

@class FBConsistentLookasideInconsistencyFixingExpanderGraphStore, FBConsistentLookasideInconsistencyFixingExpanderNative;

@interface FBConsistentLookasideInconsistencyFixingExpander : NSObject <FBGraphQLConsistentLookasideCacheExpander>
{
    FBConsistentLookasideInconsistencyFixingExpanderNative *_native;
    FBConsistentLookasideInconsistencyFixingExpanderGraphStore *_graphstore;
}

- (void).cxx_destruct;
- (void)expand:(struct MergingNodeSourceBuilder *)arg1 fromStore:(const shared_ptr_e5341621 *)arg2;
- (void)expandModel:(id)arg1 inObjectContext:(id)arg2 intoBlock:(CDUnknownBlockType)arg3;
- (id)initWithFeatures:(unsigned int)arg1;

@end

