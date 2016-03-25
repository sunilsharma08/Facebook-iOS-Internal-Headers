//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBMediaSetAnalyzer : NSObject
{
    float *_aspectRatios;
    unsigned int _count;
    unsigned int *_frequencies;
    float _dominantAspectRatio;
}

@property(readonly, nonatomic) float dominantAspectRatio; // @synthesize dominantAspectRatio=_dominantAspectRatio;
- (BOOL)mediaAtIndexShouldAspectFill:(unsigned int)arg1;
- (BOOL)_aspectRatio:(float)arg1 isCloseToAspectRatio:(float)arg2;
- (unsigned int)_numAspectRatiosWithinEpsilonOf:(float)arg1;
- (void)_calculateFrequencies;
- (void)dealloc;
- (id)initWithAspectRatios:(id)arg1;

@end

