//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPTopBar.h"

#import "FBMediaGridTopBarProtocol-Protocol.h"

@class FBMediaPickerSession, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol FBMediaGridTopBarDelgate;

@interface FBMediaGridTopBar : SPTopBar <FBMediaGridTopBarProtocol>
{
    UIView *_sourceChooserView;
    UILabel *_sourceTypeLabel;
    UIButton *_cancelButton;
    UIButton *_actionButton;
    UIImageView *_downArrow;
    FBMediaPickerSession *_session;
    BOOL _scrolledToTop;
    BOOL _composerButtonEnabled;
    id <FBMediaGridTopBarDelgate> _delegate;
    unsigned int _composerButtonOption;
    NSString *_actionButtonTitle;
}

@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(nonatomic) unsigned int composerButtonOption; // @synthesize composerButtonOption=_composerButtonOption;
@property(nonatomic) BOOL scrolledToTop; // @synthesize scrolledToTop=_scrolledToTop;
@property(nonatomic) __weak id <FBMediaGridTopBarDelgate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) BOOL composerButtonEnabled; // @synthesize composerButtonEnabled=_composerButtonEnabled;
- (void)_didTapUseButton:(id)arg1;
- (void)_didTapCancel:(id)arg1;
@property(readonly, nonatomic) NSArray *passthroughViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCenterView:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

