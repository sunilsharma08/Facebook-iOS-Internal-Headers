//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBPresencePollExperimentContext : FBExperimentContext
{
    int _fastInterval;
    int _slowInterval;
    int _slowIntervalThreshold;
    double _backoffMultiplier;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) int slowIntervalThreshold; // @synthesize slowIntervalThreshold=_slowIntervalThreshold;
@property(readonly, nonatomic) double backoffMultiplier; // @synthesize backoffMultiplier=_backoffMultiplier;
@property(readonly, nonatomic) int slowInterval; // @synthesize slowInterval=_slowInterval;
@property(readonly, nonatomic) int fastInterval; // @synthesize fastInterval=_fastInterval;

@end

