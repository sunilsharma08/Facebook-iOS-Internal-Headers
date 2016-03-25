//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FBDupeDetectorIndex : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_identifierToDupeCoefficient;
    unsigned int _numberOfUncachedAssetPairsDuringLastIndexing;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) unsigned int numberOfUncachedAssetPairsDuringLastIndexing; // @synthesize numberOfUncachedAssetPairsDuringLastIndexing=_numberOfUncachedAssetPairsDuringLastIndexing;
- (void).cxx_destruct;
- (void)_setDupeCoefficient:(float)arg1 forIdentifier:(id)arg2 persistResult:(BOOL)arg3;
- (CDStruct_909d47cc)_getCoefficientForIdentifier:(id)arg1;
- (void)_indexSortedAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)indexAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDStruct_909d47cc)dupeCoefficientForAssetIdentifierA:(id)arg1 assetIdentifierB:(id)arg2;
- (id)init;

@end

