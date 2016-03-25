//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBMediaGalleryViewLayoutGuide : NSObject
{
    float _filterBarYOffset;
    float _tapToTagYOffset;
    float _visibleViewTopOffset;
    float _visibleViewBottomOffset;
    float _bottomLayoutGuideLength;
    float _adjacentPagePadding;
    float _pageGapSize;
}

+ (struct CGRect)fullScreenMediaFrameForImageSize:(struct CGSize)arg1 inBounds:(struct CGRect)arg2 withLayoutGuide:(id)arg3;
+ (struct CGRect)fullScreenMediaFrameForImageSize:(struct CGSize)arg1 inBounds:(struct CGRect)arg2 photoLayoutGuide:(BOOL)arg3 pickerStyle:(unsigned int)arg4 unifiedMediaGallery:(BOOL)arg5;
+ (id)layoutGuideForVideoInSimplePickerWithPickerStyle:(unsigned int)arg1;
+ (id)layoutGuideForPhotoInSimplePickerWithPickerStyle:(unsigned int)arg1 unifiedMediaGallery:(BOOL)arg2;
@property(nonatomic) float pageGapSize; // @synthesize pageGapSize=_pageGapSize;
@property(nonatomic) float adjacentPagePadding; // @synthesize adjacentPagePadding=_adjacentPagePadding;
@property(nonatomic) float bottomLayoutGuideLength; // @synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength;
@property(nonatomic) float visibleViewBottomOffset; // @synthesize visibleViewBottomOffset=_visibleViewBottomOffset;
@property(nonatomic) float visibleViewTopOffset; // @synthesize visibleViewTopOffset=_visibleViewTopOffset;
@property(nonatomic) float tapToTagYOffset; // @synthesize tapToTagYOffset=_tapToTagYOffset;
@property(nonatomic) float filterBarYOffset; // @synthesize filterBarYOffset=_filterBarYOffset;

@end

