//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PAScalableMetrics.h"

@class NSString, UIColor;

@interface PAHangoverBarScalableMetrics : PAScalableMetrics
{
    NSString *_titleFontName;
    float _titleFontSize;
    UIColor *_titleFontColor;
    float _barHeight;
    UIColor *_defaultBackgroundColor;
}

@property(readonly, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(readonly, nonatomic) float barHeight; // @synthesize barHeight=_barHeight;
@property(readonly, nonatomic) UIColor *titleFontColor; // @synthesize titleFontColor=_titleFontColor;
@property(readonly, nonatomic) float titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(readonly, copy, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
- (void).cxx_destruct;
- (void)defineIntrinsicMetricsForDeviceType:(unsigned int)arg1;
- (void)addScalableMetrics;

@end

