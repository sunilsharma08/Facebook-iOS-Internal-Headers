//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIAlertViewDelegate-Protocol.h"

@class FBIndeterminateProgressView, NSString, UIActivityIndicatorView, UIAlertView, UIButton, UIImageView, UILabel, UIProgressView, UITapGestureRecognizer;
@protocol FBAggregatedPostsUploadBarViewDelegate;

@interface FBAggregatedPostsUploadBarView : UIView <UIAlertViewDelegate>
{
    UIImageView *_errorCancelButton;
    UIImageView *_thumbnailView;
    UIImageView *_thumbnailImageView;
    UIImageView *_videoIconView;
    UIActivityIndicatorView *_rightActivityIndicatorView;
    FBIndeterminateProgressView *_indeterminateView;
    UITapGestureRecognizer *_errorCancelRecognizer;
    BOOL _stacked;
    BOOL _showingError;
    BOOL _showingSpinner;
    BOOL _showingIndeterminateProgress;
    BOOL _errorIsTransient;
    BOOL _cancelUploadSurveyEnabled;
    id <FBAggregatedPostsUploadBarViewDelegate> _delegate;
    UILabel *_errorLabel;
    UIProgressView *_progressView;
    UIAlertView *_cancelAlert;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIAlertView *cancelAlert; // @synthesize cancelAlert=_cancelAlert;
@property(nonatomic) BOOL cancelUploadSurveyEnabled; // @synthesize cancelUploadSurveyEnabled=_cancelUploadSurveyEnabled;
@property(nonatomic) BOOL errorIsTransient; // @synthesize errorIsTransient=_errorIsTransient;
@property(nonatomic, getter=isShowingIndeterminateProgres) BOOL showingIndeterminateProgress; // @synthesize showingIndeterminateProgress=_showingIndeterminateProgress;
@property(nonatomic, getter=isShowingSpinner) BOOL showingSpinner; // @synthesize showingSpinner=_showingSpinner;
@property(nonatomic, getter=isShowingError) BOOL showingError; // @synthesize showingError=_showingError;
@property(nonatomic, getter=isStacked) BOOL stacked; // @synthesize stacked=_stacked;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(nonatomic) __weak id <FBAggregatedPostsUploadBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_updateButtons;
- (void)_didTapErrorCancelButton:(id)arg1;
- (void)_didTapRightButton:(id)arg1;
- (id)_defaultCancelAlert;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setThumbnailImage:(id)arg1 forMediaType:(int)arg2;
- (void)showTransientError;
- (void)showTerminalError;
- (void)resetErrorState;
@property(nonatomic) float progress;
- (void)layoutSubviews;
- (struct CGRect)progressViewFrame;
- (struct CGRect)rightButtonFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

