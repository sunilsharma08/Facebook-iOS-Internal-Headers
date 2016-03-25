//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class UIColor;

@interface FBScrollIndicatorNode : ASDisplayNode
{
    float _percentageVisible;
    float _percentagePanned;
    float _indicatorWhiteValue;
    float _minIndicatorWidth;
    float _maxIndicatorAlpha;
    BOOL _indicatorVisible;
    ASDisplayNode *_indicator;
    float _indicatorAlpha;
    UIColor *_indicatorColor;
}

@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) float indicatorAlpha; // @synthesize indicatorAlpha=_indicatorAlpha;
@property(nonatomic) float percentagePanned; // @synthesize percentagePanned=_percentagePanned;
@property(nonatomic) float percentageVisible; // @synthesize percentageVisible=_percentageVisible;
- (void).cxx_destruct;
- (void)layout;
- (struct CGRect)_indicatorFrameForFrame:(struct CGRect)arg1;
- (id)init;

@end

