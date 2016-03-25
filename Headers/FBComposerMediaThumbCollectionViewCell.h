//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FBComposerMentionHosting-Protocol.h"
#import "FBMediaThumFaceboxesViewDelegate-Protocol.h"
#import "FBPhotoTagGuideTagletDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CALayer, FBComposerPhotoEditingView, FBComposerVideoEditingView, FBFramedImageView, FBKVOController, FBMediaThumbFaceboxesView, FBPhotoSwipingViewController, FBTagAggregator, FBTextView, FBUserSession, NSMutableArray, NSString, UIImage, UIImageView, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer, UITextView, UIView;
@protocol FBComposerMediaThumbCollectionViewCellDelegate, FBMediaAttachmentProtocol;

@interface FBComposerMediaThumbCollectionViewCell : UICollectionViewCell <FBMediaThumFaceboxesViewDelegate, UITextViewDelegate, FBPhotoTagGuideTagletDelegate, FBComposerMentionHosting>
{
    UIImageView *_removeButton;
    UIImageView *_videoIcon;
    UIImage *_originalImage;
    FBTextView *_captionView;
    UIView *_containerView;
    UIView *_tagBadgeView;
    int _currentTagsBadgeCount;
    FBKVOController *_observation;
    UILongPressGestureRecognizer *_longTapRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_removeButtonRecognizer;
    FBTagAggregator *_tagAggregator;
    NSMutableArray *_allTags;
    BOOL _showArrow;
    BOOL _keyboardIsVisible;
    struct CGRect _visibleBounds;
    BOOL _showRemoveButton;
    BOOL _showCaption;
    BOOL _floatingButtonsEnabled;
    BOOL _swipableFilterEnabled;
    BOOL _showingTags;
    BOOL _loadedInitialImage;
    id <FBComposerMediaThumbCollectionViewCellDelegate> _delegate;
    unsigned int _removeButtonStyle;
    FBFramedImageView *_framedImageView;
    FBComposerPhotoEditingView *_photoEditingView;
    FBComposerVideoEditingView *_videoEditingView;
    UIView *_hiddenImageViewForAnimation;
    id <FBMediaAttachmentProtocol> _attachment;
    FBUserSession *_session;
    UIScrollView *_containingScrollView;
    FBPhotoSwipingViewController *_photoSwipingViewController;
    unsigned int _renderStyle;
    CALayer *_shadowLayer;
    FBMediaThumbFaceboxesView *_faceboxesView;
}

+ (struct CGRect)photoFrameForCellFrame:(struct CGRect)arg1;
+ (id)captionFont;
+ (id)placeholderText;
+ (struct CGSize)_sizeForImageSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2 renderStyle:(unsigned int)arg3;
+ (float)_heightForCaption:(id)arg1 width:(float)arg2;
+ (struct CGSize)_imageSizeForAttachment:(id)arg1;
+ (struct CGSize)sizeForAttachment:(id)arg1 caption:(id)arg2 containerSize:(struct CGSize)arg3 renderStyle:(unsigned int)arg4;
+ (float)heightForRenderStyle:(unsigned int)arg1;
@property(nonatomic) BOOL loadedInitialImage; // @synthesize loadedInitialImage=_loadedInitialImage;
@property(nonatomic) BOOL showingTags; // @synthesize showingTags=_showingTags;
@property(retain, nonatomic) FBMediaThumbFaceboxesView *faceboxesView; // @synthesize faceboxesView=_faceboxesView;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) unsigned int renderStyle; // @synthesize renderStyle=_renderStyle;
@property(retain, nonatomic) FBPhotoSwipingViewController *photoSwipingViewController; // @synthesize photoSwipingViewController=_photoSwipingViewController;
@property(nonatomic) __weak UIScrollView *containingScrollView; // @synthesize containingScrollView=_containingScrollView;
@property(readonly, nonatomic) BOOL swipableFilterEnabled; // @synthesize swipableFilterEnabled=_swipableFilterEnabled;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <FBMediaAttachmentProtocol> attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) UIView *hiddenImageViewForAnimation; // @synthesize hiddenImageViewForAnimation=_hiddenImageViewForAnimation;
@property(retain, nonatomic) FBComposerVideoEditingView *videoEditingView; // @synthesize videoEditingView=_videoEditingView;
@property(retain, nonatomic) FBComposerPhotoEditingView *photoEditingView; // @synthesize photoEditingView=_photoEditingView;
@property(retain, nonatomic) FBFramedImageView *framedImageView; // @synthesize framedImageView=_framedImageView;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) unsigned int removeButtonStyle; // @synthesize removeButtonStyle=_removeButtonStyle;
@property(nonatomic) BOOL floatingButtonsEnabled; // @synthesize floatingButtonsEnabled=_floatingButtonsEnabled;
@property(nonatomic) BOOL showCaption; // @synthesize showCaption=_showCaption;
@property(nonatomic) BOOL showRemoveButton; // @synthesize showRemoveButton=_showRemoveButton;
@property(nonatomic) __weak id <FBComposerMediaThumbCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_edgeInsetFromOriginalImageSize:(struct CGSize)arg1 toCroppedSize:(struct CGSize)arg2;
- (void)_didLongTapThumb:(id)arg1;
- (void)_didTapThumb:(id)arg1;
- (void)_didTapDeleteThumb:(id)arg1;
- (void)_thumbnailImageDidChange:(id)arg1;
- (void)_updateTagsBadge:(id)arg1;
- (struct CGRect)photoFrameRelativeToView:(id)arg1;
- (void)_setRemoveButtonFrameForStyle:(unsigned int)arg1;
- (void)_ensureRemoveButton;
- (float)_borderWidth;
- (BOOL)_useLargeAspectRatio;
- (void)_updateTags:(id)arg1 animated:(BOOL)arg2;
- (void)_updateTagAggregatorViewPort;
- (void)_createTagAggregatorIfNecessary;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)tagGuideTagletDidRejectTag:(id)arg1;
- (void)tagGuideTagletDidAcceptTag:(id)arg1;
- (void)didRemoveTaglet:(id)arg1 withTaggableEdge:(id)arg2;
- (void)didTapTaglet:(id)arg1 withTaggableEdge:(id)arg2;
- (void)mediaThumbFaceboxesView:(id)arg1 didTapFaceBoxID:(id)arg2;
- (BOOL)resignFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_imageViewSize;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsetsForMentionsView;
- (void)layoutSubviews;
- (void)_layoutForVisibleBounds;
- (void)updateOverlayPositions;
- (void)_containingScrollViewDidScroll:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
@property(readonly, nonatomic) UIView *photoDisplayView;
@property(readonly, nonatomic) UIImage *resizedImage;
- (struct CGRect)imageFrame;
@property(nonatomic) BOOL showVideoIcon;
- (void)setImage:(id)arg1;
- (void)_resizeFramedImage;
- (void)_updateImageFromAttachmentForAssetID:(id)arg1;
@property(readonly, nonatomic) struct CGRect cursorRect;
@property(readonly, nonatomic) UITextView *captionView;
@property(copy, nonatomic) NSString *caption;
@property(nonatomic) BOOL allowPhotoDragging;
- (void)_removePhotoDisplayView;
- (void)setSwipableFilterEnabled:(BOOL)arg1 showSwipeNuxAnimation:(BOOL)arg2;
- (void)setImageInteractionEnabled:(BOOL)arg1;
- (id)_createPhotoTagletForPhotoTagsEdge:(id)arg1;
- (void)setTagLayerVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowingTags:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithFaceboxes:(id)arg1 andTags:(id)arg2 allowAutoTagging:(BOOL)arg3 animated:(BOOL)arg4;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 swipableFilterEnabled:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

