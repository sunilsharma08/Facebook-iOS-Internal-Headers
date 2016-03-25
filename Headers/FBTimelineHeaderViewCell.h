//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBMemFocusedPhoto, FBRichTextView, FBScenePath, FBTimelineCoverPhotoView, FBTimelineProfilePictureView, FBTimelineTemporaryCoverPhoto, FBTimelineTemporaryCoverView, FBUserSession, NSString, UIButton, UIImageView, UIView;
@protocol FBTimelineConfiguration;

@interface FBTimelineHeaderViewCell : UITableViewCell
{
    FBUserSession *_session;
    id <FBTimelineConfiguration> _configuration;
    NSString *_analyticsUUID;
    NSString *_ownerGraphQLID;
    FBTimelineProfilePictureView *_profilePictureView;
    FBTimelineTemporaryCoverView *_temporaryCoverPhotoView;
    UIView *_defaultCoverPhotoView;
    UIView *_coverPhotoViewContainer;
    UIView *_coverPhotoTopBorderView;
    UIView *_coverPhotoBottomBorderView;
    UIImageView *_coverPhotoGradientView;
    UIImageView *_card;
    struct UIEdgeInsets _cardInsets;
    struct CGRect _subTitleAreaRect;
    UIView *_headerUnderlayView;
    UIView *_headerOverlayView;
    BOOL _temporaryCoverContentsRectInitialized;
    FBMemFocusedPhoto *_coverPhoto;
    FBScenePath *_scenePath;
    BOOL _isPadFeedRedesignEnabled;
    BOOL _isCoverEditMode;
    FBTimelineCoverPhotoView *_coverPhotoView;
    FBTimelineTemporaryCoverPhoto *_temporaryCoverPhoto;
    UIButton *_coverPhotoButton;
    UIButton *_profilePictureButton;
    UIView *_background;
    UIImageView *_profilePictureBorderView;
    NSString *_name;
    NSString *_alternativeName;
    FBRichTextView *_nameLabel;
    int _instructionLabelVerticalPosition;
    struct CGPoint _temporaryCoverFocus;
    struct CGSize _nameLabelSize;
}

+ (id)_nameTextOfSize:(float)arg1 color:(struct CGColor *)arg2 forName:(id)arg3 alternativeName:(id)arg4;
+ (float)_coverHeightForWidth:(float)arg1;
+ (float)defaultHeightWithPadFeedRedesignEnabled:(BOOL)arg1;
+ (struct CGColor *)nameLabelColor;
+ (unsigned int)coverPhotoImageSizeFlag;
+ (struct FBTimelineHeaderViewCellLayout)layoutConsts;
@property(nonatomic) int instructionLabelVerticalPosition; // @synthesize instructionLabelVerticalPosition=_instructionLabelVerticalPosition;
@property(nonatomic) BOOL isCoverEditMode; // @synthesize isCoverEditMode=_isCoverEditMode;
@property(readonly, nonatomic) struct CGSize nameLabelSize; // @synthesize nameLabelSize=_nameLabelSize;
@property(readonly, nonatomic) FBRichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, copy, nonatomic) NSString *alternativeName; // @synthesize alternativeName=_alternativeName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGRect subTitleAreaRect; // @synthesize subTitleAreaRect=_subTitleAreaRect;
@property(readonly, nonatomic) UIImageView *profilePictureBorderView; // @synthesize profilePictureBorderView=_profilePictureBorderView;
@property(readonly, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) UIButton *profilePictureButton; // @synthesize profilePictureButton=_profilePictureButton;
@property(retain, nonatomic) UIButton *coverPhotoButton; // @synthesize coverPhotoButton=_coverPhotoButton;
@property(retain, nonatomic) FBTimelineTemporaryCoverPhoto *temporaryCoverPhoto; // @synthesize temporaryCoverPhoto=_temporaryCoverPhoto;
@property(retain, nonatomic) FBTimelineCoverPhotoView *coverPhotoView; // @synthesize coverPhotoView=_coverPhotoView;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint temporaryCoverFocus; // @synthesize temporaryCoverFocus=_temporaryCoverFocus;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)configureWithCoverPhoto:(id)arg1 ownerGraphQLID:(id)arg2;
- (void)updateProfilePictureViewWithProfile:(id)arg1 defaultImage:(id)arg2;
- (void)updateNameWithName:(id)arg1 alternativeName:(id)arg2;
- (void)updateNameWithName:(id)arg1;
- (void)calculateNameLabelSizeWithWidthLimit:(float)arg1;
- (float)nameMaxWidth;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 scenePath:(id)arg3 analyticsUUID:(id)arg4 configuration:(id)arg5 coverPhotoDisplayLogBlock:(CDUnknownBlockType)arg6 profilePictureLoadLogBlock:(CDUnknownBlockType)arg7;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 scenePath:(id)arg3 analyticsUUID:(id)arg4 configuration:(id)arg5;

@end

