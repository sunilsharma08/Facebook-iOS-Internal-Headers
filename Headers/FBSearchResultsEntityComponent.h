//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsEntityComponent : CKCompositeComponent
{
    FBSearchComponentModel *_resultEdgeModel;
    FBSearchResultsContext *_context;
    unsigned int _resultType;
}

+ (id)newWithResultEdgeModel:(id)arg1 context:(id)arg2 resultType:(unsigned int)arg3 renderStyle:(int)arg4 transparentBackground:(BOOL)arg5;
- (void).cxx_destruct;
- (void)didTapComponent;

@end

