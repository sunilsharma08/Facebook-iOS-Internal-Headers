//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBFNFacepileView, FBFNInlineUpsellEmptyView, UIButton;
@protocol FBFNFacepileViewDataSource, FBFNInlineUpsellViewDelegate;

@interface FBFNInlineUpsellView : UIView
{
    id <FBFNFacepileViewDataSource> _facepileViewDataSource;
    UIButton *_actionButton;
    FBFNFacepileView *_facepileView;
    FBFNInlineUpsellEmptyView *_emptyView;
    id <FBFNInlineUpsellViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFNInlineUpsellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadData;
- (void)_tapActionButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFacepileViewDataSource:(id)arg1;

@end

