//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemPageCardCell.h"

#import "CKComponentProvider-Protocol.h"
#import "FBPageCardProtocol-Protocol.h"

@class CKComponentHostingView, FBFeedComponentToolbox, FBLegacyVideoPlaybackControllerWithLegacyAdapter, FBMemVideo, FBPageActionableLinkView, FBPageStackingView, FBPageVideosViewModel, FBUserSession, FBWrappingCell_DEPRECATED, NSString, UITapGestureRecognizer;
@protocol FBPageVideosCellDelegate;

@interface FBPageVideosCell : FBMemPageCardCell <CKComponentProvider, FBPageCardProtocol>
{
    FBUserSession *_session;
    FBPageActionableLinkView *_viewAllVideosView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _isInFullScreen;
    FBPageVideosViewModel *_viewModel;
    CKComponentHostingView *_videoPlayerView;
    FBLegacyVideoPlaybackControllerWithLegacyAdapter *_videoController;
    FBPageStackingView *_stackingView;
    BOOL _isLoggedVideo;
    FBWrappingCell_DEPRECATED *_wrappingCell;
    FBMemVideo *_featureVideo;
    FBMemVideo *_firstVideo;
    FBFeedComponentToolbox *_toolbox;
    id <FBPageVideosCellDelegate> _delegate;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak id <FBPageVideosCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (int)accessibilityElementCount;
- (BOOL)_shouldShowVideoUnit;
- (id)_previewVideoModel;
- (void)_setupVideoPreviewUnit;
- (void)_videoHeaderCellTapped:(id)arg1;
- (void)_setupVideosHeader;
- (void)_setupStackingView;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithDelegate:(id)arg1 session:(id)arg2 feedComponentToolbox:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

