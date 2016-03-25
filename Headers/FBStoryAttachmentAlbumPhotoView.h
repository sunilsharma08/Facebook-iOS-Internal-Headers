//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "FBPhotoOverlayCaptionViewDelegate-Protocol.h"

@class FBMemPhoto, FBPhotoOverlayCaptionView, FBWebPhotoView, NSString;
@protocol FBPhotoLayerContainer;

@interface FBStoryAttachmentAlbumPhotoView : UIImageView <FBPhotoOverlayCaptionViewDelegate>
{
    UIImageView *_backgroundGradientView;
    float _backgroundGradientHeight;
    BOOL _enableInlineAuthorPrivacyAttribution;
    NSString *_reusableIdentifier;
    FBWebPhotoView *_photoView;
    id <FBPhotoLayerContainer> _photoLayerContainer;
    FBPhotoOverlayCaptionView *_captionView;
}

+ (unsigned int)_baseFlags;
@property(retain, nonatomic) FBPhotoOverlayCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) BOOL enableInlineAuthorPrivacyAttribution; // @synthesize enableInlineAuthorPrivacyAttribution=_enableInlineAuthorPrivacyAttribution;
@property(nonatomic) __weak id <FBPhotoLayerContainer> photoLayerContainer; // @synthesize photoLayerContainer=_photoLayerContainer;
@property(readonly, nonatomic) FBWebPhotoView *photoView; // @synthesize photoView=_photoView;
@property(readonly, copy, nonatomic) NSString *reusableIdentifier; // @synthesize reusableIdentifier=_reusableIdentifier;
- (void).cxx_destruct;
- (void)_updatePhotoAttributionForPhoto:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
@property(retain, nonatomic) FBMemPhoto *photo;
- (void)photoViewCancel;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2 reusableIdentifier:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

