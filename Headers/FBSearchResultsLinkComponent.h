//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsLinkComponent : CKCompositeComponent
{
    FBSearchComponentModel *_linkEdgeModel;
    FBSearchResultsContext *_context;
    SEL _tapAction;
}

+ (id)newWithLinkEdgeModel:(id)arg1 context:(id)arg2 tapAction:(SEL)arg3;
- (void).cxx_destruct;
- (void)didTap;

@end

