//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CKComponentScopeRoot;

@interface CKTransactionalComponentDataSourceItem : NSObject
{
    struct CKComponentLayout _layout;
    id _model;
    CKComponentScopeRoot *_scopeRoot;
}

@property(readonly, nonatomic) CKComponentScopeRoot *scopeRoot; // @synthesize scopeRoot=_scopeRoot;
@property(readonly, nonatomic) id model; // @synthesize model=_model;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct CKComponentLayout *)layout;
- (id)initWithLayout:(const struct CKComponentLayout *)arg1 model:(id)arg2 scopeRoot:(id)arg3;

@end

