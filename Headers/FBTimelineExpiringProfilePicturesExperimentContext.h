//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBTimelineExpiringProfilePicturesExperimentContext : FBExperimentContext
{
    BOOL _enableExpiringProfilePictures;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL enableExpiringProfilePictures; // @synthesize enableExpiringProfilePictures=_enableExpiringProfilePictures;
@property(readonly, nonatomic) BOOL shouldUseExpiringProfilePictures;

@end

