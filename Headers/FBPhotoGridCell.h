//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FBPhotoGridCellProtocol-Protocol.h"

@class FBMemPhoto, FBPhotoGridCellUploadingStatusOverlay, FBWebPhotoView, NSString, UIImageView;

@interface FBPhotoGridCell : UICollectionViewCell <FBPhotoGridCellProtocol>
{
    FBWebPhotoView *_photoView;
    UIImageView *_borderImageView;
    FBMemPhoto *_photo;
    FBPhotoGridCellUploadingStatusOverlay *_uploadingStatusOverlay;
}

@property(readonly, nonatomic) FBPhotoGridCellUploadingStatusOverlay *uploadingStatusOverlay; // @synthesize uploadingStatusOverlay=_uploadingStatusOverlay;
@property(readonly, nonatomic) FBWebPhotoView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) FBMemPhoto *photo;
- (void)performSetupIfNeededWithSession:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

