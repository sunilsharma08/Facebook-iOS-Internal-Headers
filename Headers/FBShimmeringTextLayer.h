//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class ASTextNode, CAGradientLayer, NSArray, NSAttributedString;

@interface FBShimmeringTextLayer : CALayer
{
    ASTextNode *_textNode;
    CALayer *_textLayer;
    CALayer *_shimmerRootLayer;
    CAGradientLayer *_shimmerGradientLayer;
    ASTextNode *_shimmerMaskNode;
    CALayer *_shimmerMaskLayer;
    double _beginTimeToSynchronizeShimmer;
    BOOL _shouldShadowText;
    BOOL _shimmering;
    BOOL _shouldAnimateRightToLeft;
    NSArray *_shimmeringGradientColors;
    float _shimmeringOpacity;
    float _shimmeringSpeed;
    double _shimmeringPauseDuration;
    double _shimmerBeginTime;
}

@property(readonly, nonatomic) double shimmerBeginTime; // @synthesize shimmerBeginTime=_shimmerBeginTime;
@property(nonatomic) double shimmeringPauseDuration; // @synthesize shimmeringPauseDuration=_shimmeringPauseDuration;
@property(nonatomic) BOOL shouldAnimateRightToLeft; // @synthesize shouldAnimateRightToLeft=_shouldAnimateRightToLeft;
@property(nonatomic) float shimmeringSpeed; // @synthesize shimmeringSpeed=_shimmeringSpeed;
@property(nonatomic) float shimmeringOpacity; // @synthesize shimmeringOpacity=_shimmeringOpacity;
@property(copy, nonatomic) NSArray *shimmeringGradientColors; // @synthesize shimmeringGradientColors=_shimmeringGradientColors;
@property(nonatomic, getter=isShimmering) BOOL shimmering; // @synthesize shimmering=_shimmering;
@property(nonatomic) BOOL shouldShadowText; // @synthesize shouldShadowText=_shouldShadowText;
- (void).cxx_destruct;
- (void)resumeShimmeringWithBeginTime:(double)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets shadowPadding;
- (struct CGRect)setFrameForUnshadowedTextOrigin:(struct CGPoint)arg1;
- (struct CGSize)measure:(struct CGSize)arg1;
- (void)layoutSublayers;
- (void)_layoutShimmerRootSublayers;
- (void)setBounds:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)_updateShimmering;
- (void)_updatedShouldShadowText;
- (id)_shimmerGradientLayer;
- (id)_shimmerRootLayer;
@property(copy, nonatomic) NSAttributedString *truncationAttributedString;
@property(nonatomic) int truncationMode;
@property(readonly, nonatomic) unsigned int lineCount;
@property(readonly) BOOL isTextTruncated;
@property(copy, nonatomic) NSAttributedString *attributedString;
- (void)dealloc;
- (id)init;

@end

