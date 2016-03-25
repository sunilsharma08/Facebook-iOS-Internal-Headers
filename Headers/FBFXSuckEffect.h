//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFXGridMeshEffect.h"

@interface FBFXSuckEffect : FBFXGridMeshEffect
{
    float _time;
    float _swirl;
    struct CGPoint _sink;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) float swirl; // @synthesize swirl=_swirl;
@property(nonatomic) struct CGPoint sink; // @synthesize sink=_sink;
- (id).cxx_construct;
- (void)configureVertex:(struct FBFXGeometryEffectVertex *)arg1 forNormalizedPoint:(struct CGPoint)arg2 withRect:(struct CGRect)arg3 texCoordExtent:(struct TexCoordExtent)arg4;
- (void)animate:(float)arg1 finished:(char *)arg2;
- (id)init;

@end

