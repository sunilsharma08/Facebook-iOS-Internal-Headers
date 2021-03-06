//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemProductItem, FBNetworkImageView, FBRichTextView, UIButton;
@protocol FBReactionServiceItemAttachmentViewDelegate;

@interface FBReactionServiceItemAttachmentView : UIView
{
    FBRichTextView *_nameLabel;
    FBRichTextView *_descriptionLabel;
    FBNetworkImageView *_serviceItemImageView;
    UIView *_topSeparatorView;
    UIButton *_button;
    FBMemProductItem *_productItem;
    BOOL _hasDescription;
    BOOL _hasImage;
    id <FBReactionServiceItemAttachmentViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBReactionServiceItemAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attachmentTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)itemUpdated:(id)arg1;
- (id)initWithProductItem:(id)arg1 imageDownloader:(id)arg2;

@end

