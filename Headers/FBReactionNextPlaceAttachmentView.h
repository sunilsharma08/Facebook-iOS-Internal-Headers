//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "FBReactionMapSnapshotProviderListener-Protocol.h"

@class FBItemView_DEPRECATED, FBReactionAttachmentShadowLayer, FBReactionControlAlphaChangeOnHighlight, FBReactionMapSnapshotProvider, NSString, UIView;

@interface FBReactionNextPlaceAttachmentView : UIControl <FBReactionMapSnapshotProviderListener>
{
    FBReactionAttachmentShadowLayer *_shadowLayer;
    FBReactionControlAlphaChangeOnHighlight *_summaryViewControl;
    UIView *_highlightableView;
    FBItemView_DEPRECATED *_headerView;
    UIView *_primaryImageTopBorder;
    UIView *_primaryImageView;
    UIView *_primaryImageBottomBorder;
    UIView *_footerView;
    FBReactionMapSnapshotProvider *_provider;
}

- (void).cxx_destruct;
- (float)_coverPhotoHeightFromWidth:(float)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)didRetrieveMapSnapshot:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 smallText:(id)arg4 profileImageView:(id)arg5 primaryImageView:(id)arg6 snapshotProvider:(id)arg7 footerView:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

