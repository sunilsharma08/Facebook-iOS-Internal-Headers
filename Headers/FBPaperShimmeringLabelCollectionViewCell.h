//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBShimmeringTextLayer;

@interface FBPaperShimmeringLabelCollectionViewCell : UICollectionViewCell
{
    FBShimmeringTextLayer *_textLabelLayer;
    struct UIEdgeInsets _contentInset;
    struct FBTextMetrics _textMetrics;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) FBShimmeringTextLayer *textLabelLayer; // @synthesize textLabelLayer=_textLabelLayer;
@property(nonatomic) struct FBTextMetrics textMetrics; // @synthesize textMetrics=_textMetrics;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

