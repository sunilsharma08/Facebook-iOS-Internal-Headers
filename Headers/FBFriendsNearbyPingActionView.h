//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextView, FBTextView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITableView;

@interface FBFriendsNearbyPingActionView : UIView
{
    UIView *_bottomSeparatorBar;
    UIView *_pingView;
    FBRichTextView *_titleLabel;
    UIButton *_titleButton;
    UILabel *_characterCount;
    UIButton *_cancelButton;
    UIButton *_pingButton;
    UIButton *_stopButton;
    UIButton *_okButton;
    UILabel *_timeRemainingLabel;
    FBTextView *_messageTextView;
    UIImageView *_mapSnapshotImageView;
    UIView *_mapLoadingBackground;
    UIImageView *_profilePictureImageView;
    UIActivityIndicatorView *_activityView;
    UIView *_pingDurationView;
    UILabel *_durationTitleView;
    UITableView *_durationTableView;
    UIButton *_durationBackButton;
}

+ (id)getPingDurationTableCellTopSeparatorLineView;
@property(readonly, nonatomic) UIButton *durationBackButton; // @synthesize durationBackButton=_durationBackButton;
@property(readonly, nonatomic) UITableView *durationTableView; // @synthesize durationTableView=_durationTableView;
@property(readonly, nonatomic) UILabel *durationTitleView; // @synthesize durationTitleView=_durationTitleView;
@property(readonly, nonatomic) UIView *pingDurationView; // @synthesize pingDurationView=_pingDurationView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(readonly, nonatomic) UIImageView *profilePictureImageView; // @synthesize profilePictureImageView=_profilePictureImageView;
@property(readonly, nonatomic) UIView *mapLoadingBackground; // @synthesize mapLoadingBackground=_mapLoadingBackground;
@property(readonly, nonatomic) UIImageView *mapSnapshotImageView; // @synthesize mapSnapshotImageView=_mapSnapshotImageView;
@property(readonly, nonatomic) FBTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(readonly, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(readonly, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(readonly, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(readonly, nonatomic) UIButton *pingButton; // @synthesize pingButton=_pingButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UILabel *characterCount; // @synthesize characterCount=_characterCount;
@property(readonly, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(readonly, nonatomic) FBRichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *pingView; // @synthesize pingView=_pingView;
- (void).cxx_destruct;
- (void)setCharacterCountTextAlmostFull:(BOOL)arg1;
- (void)showPingDurationView;
- (void)showPingView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

