//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsRelatedArticleModuleHscrollChildComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBSearchComponentModel *_resultEdgeModel;
    FBSearchResultsContext *_context;
}

+ (id)newWithResultEdgeModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) FBSearchComponentModel *resultEdgeModel; // @synthesize resultEdgeModel=_resultEdgeModel;
- (void).cxx_destruct;
- (void)didTapShareComponent;
- (void)didTapComponent;

@end

