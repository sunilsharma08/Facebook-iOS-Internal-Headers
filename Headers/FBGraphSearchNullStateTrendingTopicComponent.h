//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent, FBSearchComponentModel;
@protocol FBSearchInputContextProtocol;

@interface FBGraphSearchNullStateTrendingTopicComponent : CKCompositeComponent
{
    id <FBSearchInputContextProtocol> _context;
    CKComponent *_cellComponent;
    FBSearchComponentModel *_model;
}

+ (id)_subtext:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)_title:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)newWithModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) FBSearchComponentModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) CKComponent *cellComponent; // @synthesize cellComponent=_cellComponent;
@property(readonly, nonatomic) id <FBSearchInputContextProtocol> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didTapCell:(id)arg1;

@end

