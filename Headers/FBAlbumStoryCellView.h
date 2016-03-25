//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemPhoto, FBRichTextTouchShimLayer, FBWebPhotoView;
@protocol FBAlbumStoryCellViewDelegate;

@interface FBAlbumStoryCellView : UIView
{
    FBRichTextTouchShimLayer *_textLayer;
    UIView *_textContainer;
    id <FBAlbumStoryCellViewDelegate> _delegate;
    FBMemPhoto *_photo;
    FBWebPhotoView *_photoView;
}

+ (struct UIEdgeInsets)_textEdgeInsetsForPhoto:(id)arg1;
+ (struct CGSize)_sizeForPhoto:(id)arg1 withWidth:(float)arg2;
+ (id)_newTextLayer;
+ (struct CGSize)sizeForCellWithPhoto:(id)arg1 forWidth:(float)arg2;
@property(readonly, nonatomic) FBWebPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) FBMemPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)_didReceiveTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

@end

