//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveViewState.h"

@class NSString;

@interface FBVerveSlideListViewState : FBVerveViewState
{
    NSString *_slideLayoutMode;
    float _slideMargin;
    float _slideSpacing;
    BOOL _showsCurrentSlide;
    id _currentSlideColor;
    NSString *_headerMode;
    _Bool _definesSlideLayoutMode;
    _Bool _definesSlideMargin;
    _Bool _definesSlideSpacing;
    _Bool _definesShowsCurrentSlide;
    _Bool _definesCurrentSlideColor;
    _Bool _definesHeaderMode;
}

+ (Class)FBVerve_getProperties:(CDStruct_183601bc **)arg1 count:(unsigned int *)arg2;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) struct CGColor *currentSlideColor; // @dynamic currentSlideColor;
@property(copy, nonatomic) NSString *headerMode; // @dynamic headerMode;
@property(nonatomic) BOOL showsCurrentSlide; // @dynamic showsCurrentSlide;
@property(copy, nonatomic) NSString *slideLayoutMode; // @dynamic slideLayoutMode;
@property(nonatomic) float slideMargin; // @dynamic slideMargin;
@property(nonatomic) float slideSpacing; // @dynamic slideSpacing;

@end

