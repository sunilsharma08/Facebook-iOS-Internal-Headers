//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBStickerUpdateExperimentContext : FBExperimentContext
{
    BOOL _stickerUpdateEnabled;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
+ (id)parameterConfigurations;
@property(nonatomic, getter=isStickerUpdateEnabled) BOOL stickerUpdateEnabled; // @synthesize stickerUpdateEnabled=_stickerUpdateEnabled;

@end

