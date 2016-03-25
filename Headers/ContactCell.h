//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ContactCellButton, FBMImageViewDownloader, FBMLocationIconView, FBMParticipantNameFormatter, FBSyncPerson, FBSyncPersonName, NSDictionary, NSString, UIImageView, UILabel, UIView;
@protocol FBMessengerRequestManager;

@interface ContactCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_lastActiveLabel;
    UIImageView *_iconView;
    FBMLocationIconView *_locationIconView;
    UIView *_statusView;
    ContactCellButton *_timelineButton;
    ContactCellButton *_messageButton;
    BOOL _nameNeedsFormat;
    BOOL _allowMultiSelect;
    BOOL _showAddIcon;
    BOOL _showCheckmarkIconOnLeft;
    BOOL _isChecked;
    unsigned int _sortOrder;
    unsigned int _nameFormat;
    float _shiftOffsetForAnimation;
    int _statusType;
    FBSyncPerson *_person;
    FBSyncPersonName *_name;
    NSString *_alternateNameText;
    int _colorScheme;
    NSDictionary *_colorSchemeDictionary;
    UIImageView *_checkmarkImageView;
    UILabel *_statusLabel;
    UIImageView *_addImageView;
    UIImageView *_photoView;
    FBMImageViewDownloader *_imageViewDownloader;
    float _leftAndRightPadding;
    float _topAndBottomPadding;
    float _cellHeight;
    FBMParticipantNameFormatter *_formatter;
    id <FBMessengerRequestManager> _requestManager;
}

+ (id)getDictionaryForColorScheme:(int)arg1;
+ (void)_addCommonPropertiesToScheme:(id)arg1;
@property(retain, nonatomic) id <FBMessengerRequestManager> requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) FBMParticipantNameFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) BOOL isChecked; // @synthesize isChecked=_isChecked;
@property(nonatomic) float cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) float topAndBottomPadding; // @synthesize topAndBottomPadding=_topAndBottomPadding;
@property(nonatomic) float leftAndRightPadding; // @synthesize leftAndRightPadding=_leftAndRightPadding;
@property(retain, nonatomic) FBMImageViewDownloader *imageViewDownloader; // @synthesize imageViewDownloader=_imageViewDownloader;
@property(retain, nonatomic) UIImageView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UIImageView *addImageView; // @synthesize addImageView=_addImageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(retain, nonatomic) NSDictionary *colorSchemeDictionary; // @synthesize colorSchemeDictionary=_colorSchemeDictionary;
@property(nonatomic) int colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) NSString *alternateNameText; // @synthesize alternateNameText=_alternateNameText;
@property(copy, nonatomic) FBSyncPersonName *name; // @synthesize name=_name;
@property(copy, nonatomic) FBSyncPerson *person; // @synthesize person=_person;
@property(nonatomic) int statusType; // @synthesize statusType=_statusType;
@property(nonatomic) float shiftOffsetForAnimation; // @synthesize shiftOffsetForAnimation=_shiftOffsetForAnimation;
@property(nonatomic) unsigned int nameFormat; // @synthesize nameFormat=_nameFormat;
@property(nonatomic) unsigned int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) BOOL showCheckmarkIconOnLeft; // @synthesize showCheckmarkIconOnLeft=_showCheckmarkIconOnLeft;
@property(nonatomic) BOOL showAddIcon; // @synthesize showAddIcon=_showAddIcon;
@property(nonatomic) BOOL allowMultiSelect; // @synthesize allowMultiSelect=_allowMultiSelect;
- (id)description;
- (id)accessibilityLabel;
- (void)swapStatusView:(id)arg1;
- (void)updateLastActiveLabelText:(id)arg1 accessibilityLabel:(id)arg2;
- (void)updateStatusLabelText:(id)arg1;
- (void)_formatName;
- (void)setUserId:(id)arg1 name:(id)arg2 profilePicUrl:(id)arg3 showMobile:(BOOL)arg4 showOnline:(BOOL)arg5 showLocation:(BOOL)arg6 statusText:(id)arg7 lastActiveText:(id)arg8 lastActiveAccessibilityLabel:(id)arg9;
- (void)setChecked:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 colorScheme:(int)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

