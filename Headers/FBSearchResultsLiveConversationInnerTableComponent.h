//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent, FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsLiveConversationInnerTableComponent : CKCompositeComponent
{
    FBSearchResultsContext *_context;
    CKComponent *_tableViewComponent;
    FBSearchComponentModel *_moduleEdgeModel;
}

+ (id)newWithModuleEdgeModel:(id)arg1 context:(id)arg2 height:(float)arg3;
@property(readonly, nonatomic) FBSearchComponentModel *moduleEdgeModel; // @synthesize moduleEdgeModel=_moduleEdgeModel;
@property(readonly, nonatomic) CKComponent *tableViewComponent; // @synthesize tableViewComponent=_tableViewComponent;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
- (void).cxx_destruct;

@end

