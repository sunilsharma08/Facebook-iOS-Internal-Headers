//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBLeadGenExperimentContext : FBExperimentContext
{
    BOOL _brandingRedesignEnabled;
    BOOL _showNUX;
    BOOL _selectorAutoforwardEnable;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL selectorAutoforwardEnable; // @synthesize selectorAutoforwardEnable=_selectorAutoforwardEnable;
@property(readonly, nonatomic) BOOL showNUX; // @synthesize showNUX=_showNUX;
@property(readonly, nonatomic) BOOL brandingRedesignEnabled; // @synthesize brandingRedesignEnabled=_brandingRedesignEnabled;

@end

