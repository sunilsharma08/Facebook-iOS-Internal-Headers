//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBShimmering <NSObject>
@property(nonatomic) double shimmeringBeginTime;
@property(readonly, nonatomic) double shimmeringFadeTime;
@property(nonatomic) double shimmeringEndFadeDuration;
@property(nonatomic) double shimmeringBeginFadeDuration;
@property(nonatomic) int shimmeringDirection;
@property(nonatomic, getter=shimmeringHighlightLength, setter=setShimmeringHighlightLength:) float shimmeringHighlightWidth;
@property(nonatomic) float shimmeringSpeed;
@property(nonatomic) float shimmeringOpacity;
@property(nonatomic) float shimmeringAnimationOpacity;
@property(nonatomic) double shimmeringPauseDuration;
@property(nonatomic, getter=isShimmering) BOOL shimmering;

// Remaining properties
@property(nonatomic) float shimmeringHighlightLength;
@end

