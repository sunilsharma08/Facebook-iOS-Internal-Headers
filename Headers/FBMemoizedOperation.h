//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBMemoizedOperation : NSObject
{
    CDUnknownBlockType _pureOperation;
    CDUnknownBlockType _memoizationFetchBlock;
    CDUnknownBlockType _memoizationStoreBlock;
    Class _inputType;
    Class _outputType;
}

@property(readonly, nonatomic) Class outputType; // @synthesize outputType=_outputType;
@property(readonly, nonatomic) Class inputType; // @synthesize inputType=_inputType;
@property(readonly, nonatomic) CDUnknownBlockType memoizationStoreBlock; // @synthesize memoizationStoreBlock=_memoizationStoreBlock;
@property(readonly, nonatomic) CDUnknownBlockType memoizationFetchBlock; // @synthesize memoizationFetchBlock=_memoizationFetchBlock;
@property(readonly, nonatomic) CDUnknownBlockType pureOperation; // @synthesize pureOperation=_pureOperation;
- (void).cxx_destruct;
- (void)memoizedValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_calculateAndStoreValueForKey:(id)arg1 andInput:(id)arg2;
- (void)valueForKey:(id)arg1 input:(id)arg2 completion:(CDUnknownBlockType)arg3 writeCompletion:(CDUnknownBlockType)arg4 forceUpdate:(BOOL)arg5;
- (id)initWithPureOperationBlock:(CDUnknownBlockType)arg1 memoizationFetchBlock:(CDUnknownBlockType)arg2 memoizationStoreBlock:(CDUnknownBlockType)arg3 inputType:(Class)arg4 outputType:(Class)arg5;
- (id)initWithPureOperationBlock:(CDUnknownBlockType)arg1 memoizationFetchBlock:(CDUnknownBlockType)arg2 memoizationStoreBlock:(CDUnknownBlockType)arg3;

@end

