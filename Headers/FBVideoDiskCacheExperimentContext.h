//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBVideoDiskCacheExperimentContext : FBExperimentContext
{
    BOOL _override;
    unsigned int _lruLimit;
    double _staleInterval;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL override; // @synthesize override=_override;
@property(readonly, nonatomic) unsigned int lruLimit; // @synthesize lruLimit=_lruLimit;
@property(readonly, nonatomic) double staleInterval; // @synthesize staleInterval=_staleInterval;

@end

