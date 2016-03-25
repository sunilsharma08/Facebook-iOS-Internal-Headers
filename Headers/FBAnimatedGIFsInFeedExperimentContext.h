//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBAnimatedGIFsInFeedExperimentContext : FBExperimentContext
{
    BOOL _enableImageShareAttachments;
    BOOL _showStaticImages;
    BOOL _showAnimatedImages;
    BOOL _shouldAutoplay;
    BOOL _useTranscodedVideos;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL useTranscodedVideos; // @synthesize useTranscodedVideos=_useTranscodedVideos;
@property(readonly, nonatomic) BOOL shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(readonly, nonatomic) BOOL showAnimatedImages; // @synthesize showAnimatedImages=_showAnimatedImages;
@property(readonly, nonatomic) BOOL showStaticImages; // @synthesize showStaticImages=_showStaticImages;
@property(readonly, nonatomic) BOOL enableImageShareAttachments; // @synthesize enableImageShareAttachments=_enableImageShareAttachments;

@end

