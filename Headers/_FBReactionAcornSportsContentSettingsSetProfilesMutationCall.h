//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLMutationBase.h"

@class FBGraphQLQuery;

@interface _FBReactionAcornSportsContentSettingsSetProfilesMutationCall : FBGraphQLMutationBase
{
    FBGraphQLQuery *_mutation;
}

- (void).cxx_destruct;
- (id)payloadFromResponse:(id)arg1;
- (id)mutationRequest:(id)arg1;
- (id)mutationName;
- (id)initWithInput:(id)arg1 optimisticPayloadFactory:(id)arg2 mutation:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;

@end

