//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBOfferRedirectDialogExperimentContext : FBExperimentContext
{
    double _dialogDuration;
    double _popinAnimationDuration;
    double _dismissAnimationDuration;
    double _backgroundAlpha;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) double dismissAnimationDuration; // @synthesize dismissAnimationDuration=_dismissAnimationDuration;
@property(nonatomic) double popinAnimationDuration; // @synthesize popinAnimationDuration=_popinAnimationDuration;
@property(nonatomic) double dialogDuration; // @synthesize dialogDuration=_dialogDuration;

@end

