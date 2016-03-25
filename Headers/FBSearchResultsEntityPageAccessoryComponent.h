//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBSearchResultsContext;
@protocol FBSearchGeneralResultsEdgeProtocol;

@interface FBSearchResultsEntityPageAccessoryComponent : CKCompositeComponent
{
    id <FBSearchGeneralResultsEdgeProtocol> _edge;
    FBSearchResultsContext *_context;
}

+ (id)newWithResultEdge:(id)arg1 context:(id)arg2 resultType:(unsigned int)arg3;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <FBSearchGeneralResultsEdgeProtocol> edge; // @synthesize edge=_edge;
- (void).cxx_destruct;
- (void)didTapActionButton:(id)arg1;

@end

