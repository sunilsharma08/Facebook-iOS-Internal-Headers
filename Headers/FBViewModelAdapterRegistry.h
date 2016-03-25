//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FBViewModelAdapterRegistry : NSObject
{
    CDUnknownBlockType _adapterClassCondition;
    NSMutableArray *_adapterClasses;
    struct Mutex _adapterLock;
}

+ (id)nativeArticleAdapterRegistry;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)adapterForDataModel:(id)arg1;
- (void)addAdapterClass:(Class)arg1;
- (id)initWithAdapterClassCondition:(CDUnknownBlockType)arg1;
- (id)init;

@end

