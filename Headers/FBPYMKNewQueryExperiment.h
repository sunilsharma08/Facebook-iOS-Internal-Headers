//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBPYMKNewQueryExperiment : FBExperimentContext
{
    BOOL _enabled;
    unsigned int _totalSize;
    unsigned int _batchSize;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) unsigned int batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) unsigned int totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;

@end

