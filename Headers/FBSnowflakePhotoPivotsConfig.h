//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBSnowflakePhotoPivotsConfig : FBExperimentContext
{
    BOOL _delayLoading;
    unsigned int _pivotsCount;
    unsigned int _requiredPhotosCount;
    unsigned int _closeToEndDistance;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL delayLoading; // @synthesize delayLoading=_delayLoading;
@property(readonly, nonatomic) unsigned int closeToEndDistance; // @synthesize closeToEndDistance=_closeToEndDistance;
@property(readonly, nonatomic) unsigned int requiredPhotosCount; // @synthesize requiredPhotosCount=_requiredPhotosCount;
@property(readonly, nonatomic) unsigned int pivotsCount; // @synthesize pivotsCount=_pivotsCount;

@end

