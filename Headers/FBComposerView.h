//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CKComponentHostingViewDelegate-Protocol.h"
#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBComposerContentSuggestionPopoverControllerDelegate-Protocol.h"
#import "FBComposerMentionHosting-Protocol.h"
#import "FBComposerOpenAnimationLayoutProvider-Protocol.h"
#import "FBComposerTextViewDelegate-Protocol.h"
#import "FBComposerTextViewDraggableKeyboardDelegate-Protocol.h"
#import "FBKeyboardObserverDelegate-Protocol.h"
#import "FBQAndALabelViewDelegate-Protocol.h"
#import "FBTargetingLabelViewDelegate-Protocol.h"

@class CAGradientLayer, CKComponentHostingView, FBComposerActivityAttachment, FBComposerAddAlbumView, FBComposerAdditionalInfoButton, FBComposerAttachment, FBComposerAuthor, FBComposerChoosersBar, FBComposerContentSuggestionPopoverController, FBComposerEventDate, FBComposerGroupCommerceSellItemView, FBComposerHighlightedText, FBComposerMediaView, FBComposerPostCompositionNUXView, FBComposerTextView, FBComposerThumbListView, FBComposerThumbnailPile, FBCompositionLinkShare, FBKeyboardObserver, FBQAndALabelView, FBTargetingLabelView, FBUserSession, NSString, UIGestureRecognizer;
@protocol FBComposerContentViewLayoutProtocol, FBComposerViewSubviewDelegate, FBStickerAttachmentListener;

@interface FBComposerView : UIView <FBComposerTextViewDelegate, FBKeyboardObserverDelegate, CKComponentHostingViewDelegate, FBComposerTextViewDraggableKeyboardDelegate, FBComposerContentSuggestionPopoverControllerDelegate, FBAccessibilityInvalidationEventsListener, FBQAndALabelViewDelegate, FBTargetingLabelViewDelegate, FBComposerMentionHosting, FBComposerOpenAnimationLayoutProvider>
{
    UIView<FBComposerContentViewLayoutProtocol> *_contentView;
    UIView *_audienceViewsHostView;
    FBCompositionLinkShare *_currentLinkShare;
    FBKeyboardObserver *_keyboardObserver;
    struct CGRect _keyboardViewFrame;
    struct CGRect _originalKeyboardViewRect;
    BOOL _compressedHeight;
    int _style;
    FBUserSession *_session;
    BOOL _spansEntireWidth;
    BOOL _thumbsViewIsNotEmptyAnimationFlag;
    BOOL _supportsAudienceBar;
    BOOL _showImplicitLocation;
    BOOL _bottomAudienceSelectorEnabled;
    FBComposerPostCompositionNUXView *_postCompositionNUXView;
    id <FBStickerAttachmentListener> _stickerAttachmentListener;
    FBComposerAttachment *_currentlyRenderedAttachment;
    CKComponentHostingView *_attachmentComponentHost;
    FBComposerAdditionalInfoButton *_lowerCornerInfoView;
    UIView *_lowerCornerInfoViewBackground;
    FBComposerThumbListView *_thumbListViewToScheduleForTransitionOnNextLayout;
    UIView *_lowerViewClipView;
    UIView *_lowerView;
    CAGradientLayer *_lowerClipViewShadowLayer;
    FBComposerMediaView *_mediaView;
    FBComposerThumbnailPile *_thumbnailPile;
    UIGestureRecognizer *_attachmentTapGestureRecognizer;
    UIGestureRecognizer *_thumbnailPileTapRecognizer;
    struct UIEdgeInsets _contentInset;
    float _verticalOffset;
    struct FBComposerViewDelegateFlags _;
    FBComposerEventDate *_lastEventDate;
    NSString *_eventDateString;
    float _choosersBarOffset;
    FBComposerContentSuggestionPopoverController *_composerContentSuggestionPopoverController;
    FBQAndALabelView *_qAndALabelView;
    FBTargetingLabelView *_targetingLabelView;
    BOOL _isEditingText;
    BOOL _enableFirstResponder;
    BOOL _shouldScheduleKeyboardAnimations;
    BOOL _taggedPlaceExplicit;
    BOOL _ignoresKeyboardFrameForLayout;
    id <FBComposerViewSubviewDelegate> _subviewDelegate;
    FBComposerChoosersBar *_choosersBar;
    FBComposerAddAlbumView *_addAlbumView;
    FBComposerTextView *_composerStatusView;
    FBComposerAdditionalInfoButton *_additionalInfoView;
    FBComposerGroupCommerceSellItemView *_sellView;
    FBComposerActivityAttachment *_activityAttachment;
    unsigned int _composerPresentationMode;
    struct CGSize _desiredSize;
}

@property(nonatomic) unsigned int composerPresentationMode; // @synthesize composerPresentationMode=_composerPresentationMode;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=_desiredSize;
@property(nonatomic) BOOL ignoresKeyboardFrameForLayout; // @synthesize ignoresKeyboardFrameForLayout=_ignoresKeyboardFrameForLayout;
@property(nonatomic) BOOL taggedPlaceExplicit; // @synthesize taggedPlaceExplicit=_taggedPlaceExplicit;
@property(nonatomic) BOOL shouldScheduleKeyboardAnimations; // @synthesize shouldScheduleKeyboardAnimations=_shouldScheduleKeyboardAnimations;
@property(nonatomic) BOOL enableFirstResponder; // @synthesize enableFirstResponder=_enableFirstResponder;
@property(nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
@property(retain, nonatomic) FBComposerActivityAttachment *activityAttachment; // @synthesize activityAttachment=_activityAttachment;
@property(retain, nonatomic) UIView *lowerView; // @synthesize lowerView=_lowerView;
@property(readonly, nonatomic) FBComposerGroupCommerceSellItemView *sellView; // @synthesize sellView=_sellView;
@property(readonly, nonatomic) FBComposerAdditionalInfoButton *additionalInfoView; // @synthesize additionalInfoView=_additionalInfoView;
@property(readonly, nonatomic) FBComposerTextView *composerStatusView; // @synthesize composerStatusView=_composerStatusView;
@property(readonly, nonatomic) FBComposerAddAlbumView *addAlbumView; // @synthesize addAlbumView=_addAlbumView;
@property(readonly, nonatomic) FBComposerChoosersBar *choosersBar; // @synthesize choosersBar=_choosersBar;
@property(nonatomic) __weak id <FBComposerViewSubviewDelegate> subviewDelegate; // @synthesize subviewDelegate=_subviewDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)targetingLabelViewDidClose:(id)arg1;
- (void)qAndALabelViewDidClose:(id)arg1;
- (void)popoverViewDidDisappear:(id)arg1;
- (void)popoverViewDidAppear:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)didTapBody:(id)arg1;
- (void)keyboardDragEnded;
- (void)keyboardDraggedDownByAmount:(float)arg1;
- (void)keyboardDragStarted;
- (struct CGRect)_composerTextWindowCoordinates;
- (id)composerTextRendering;
- (id)equivalentComposerLayoutInView:(id)arg1;
- (void)ensureRectVisible:(struct CGRect)arg1 forceToBottomOfVisibleRegion:(BOOL)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)handleKeyboardVisibilityChange:(struct CGRect)arg1 duration:(double)arg2 curve:(int)arg3;
- (void)layoutSubviews_LowerViewClipView;
- (void)_layoutSubviews_LowerCornerInfoView;
- (void)layoutLowerCornerInfoView;
- (void)layoutSubviews;
- (void)didReceiveAccessibilityInvalidation;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)setupAllowMLETitleEditing:(BOOL)arg1;
- (void)_setLowerViewToChooserBarIfEditingText;
- (void)setLowerViewNeedsLayout;
- (void)setLowerView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isSellComposerStyle;
- (void)focusStatusTextField;
- (void)blurStatusTextField;
- (void)_transitionThumbsView:(id)arg1 animated:(BOOL)arg2;
- (void)_updateLayoutOfUpperLayerViewsIfNeeded;
- (void)_updateVisibilityOfUpperLayerViews;
- (BOOL)_shouldHideLowerClipView;
- (BOOL)_shouldHideLowerLeftAdditionalInfo;
- (BOOL)_shouldHideChoosersBar;
- (float)_layoutHeightOfChoosersBar;
- (float)_layoutHeightForLowerClipView;
- (void)_didTapMagicStory:(id)arg1;
- (void)_didTapLinkView:(id)arg1;
- (void)_didTapThumbnailPile:(id)arg1;
- (void)updateContentViewForAudienceHostView:(id)arg1;
@property(readonly, nonatomic) UIView *audienceViewsHostView;
- (id)statusTextAfterAllowingAutocorrect;
- (void)setTextViewLocked:(BOOL)arg1 avoidingOverlapWithView:(id)arg2;
@property(retain, nonatomic, setter=setOGRobotext:) FBComposerHighlightedText *ogRobotext;
@property(copy, nonatomic) NSString *placeholder;
- (void)updateEventDate:(id)arg1;
- (void)updatePlace:(id)arg1;
- (void)updateAppendableStories:(id)arg1;
@property(retain, nonatomic) FBComposerAuthor *author;
- (void)updatePostCompositionNUXText;
- (void)showPostCompositionNUX;
- (void)hidePostCompositionNUX;
- (void)hideStructuredLabel;
- (void)updateContentSuggestion:(id)arg1;
- (struct CGPoint)_pointForContentSuggestion:(id)arg1;
- (void)updateTaggedUsers:(id)arg1;
- (void)updateTaggedActivity:(id)arg1;
@property(readonly, nonatomic) FBComposerThumbnailPile *thumbnailPile;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)updateAttachmentsBar:(id)arg1;
- (void)addAttachmentGestureRecognizer:(BOOL)arg1 withAction:(SEL)arg2;
- (void)updateFromPreviousAttachments:(id)arg1 toCurrentAttachments:(id)arg2;
@property(readonly, nonatomic) FBComposerMediaView *mediaView;
- (void)_setupAdditionalInfoView;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsetsForMentionsView;
- (void)dealloc;
- (void)setupTargetingLabelView;
- (void)hideTargetingLabelView;
- (void)showTargetingLabelView;
- (void)setupQAndALabelView;
- (void)hideQAndALabelView;
- (void)showQAndALabelView;
- (void)addMainContentViewBecauseLayoutIsHardAndWeCantDoThisBeforeViewWillAppear;
- (id)createToolbox;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 session:(id)arg3 attachmentsBarToolbox:(id)arg4 spansEntireWidth:(BOOL)arg5 profilePhotoLeftPadding:(float)arg6 showAuthorPicture:(BOOL)arg7 groupCommerceListener:(id)arg8 stickerAttachmentListener:(id)arg9 forSaleConfiguration:(id)arg10 supportsAudienceBar:(BOOL)arg11 showImplicitLocation:(BOOL)arg12 bottomAudienceSelectorEnabled:(BOOL)arg13 dismissKeyboardOnlyWhenKeyboardIsDraggedInto:(BOOL)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

