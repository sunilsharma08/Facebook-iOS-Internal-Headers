//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBPhotoAggregationKey, FBScenePath, NSString;

@interface FBPhotoComponentViewAttributes : NSObject
{
    BOOL _renderShadow;
    FBScenePath *_scenePath;
    NSString *_module;
    FBPhotoAggregationKey *_aggregationKey;
    unsigned int _imageFlags;
    NSString *_accessibilityLabel;
}

+ (id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4;
+ (id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4 imageFlags:(unsigned int)arg5;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) unsigned int imageFlags; // @synthesize imageFlags=_imageFlags;
@property(readonly, nonatomic) FBPhotoAggregationKey *aggregationKey; // @synthesize aggregationKey=_aggregationKey;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) BOOL renderShadow; // @synthesize renderShadow=_renderShadow;
@property(readonly, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
- (void).cxx_destruct;

@end

