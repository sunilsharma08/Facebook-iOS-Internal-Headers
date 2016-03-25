//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBPresenceOverlayViewController-Protocol.h"
#import "FBPresentableViewController-Protocol.h"

@class CAShapeLayer, FBMemPerson, FBUserSession, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface FBPresencePingOverlayViewController : UIViewController <FBPresentableViewController, FBPresenceOverlayViewController>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    FBUserSession *_session;
    FBMemPerson *_person;
    UIImageView *_emojiView;
    UIView *_containerView;
    CAShapeLayer *_roundedRectPing;
    UIImageView *_messageGlyphView;
    UIView *_messageContainerView;
    UILabel *_messageLabel;
    CAShapeLayer *_roundedRectMessage;
    UILabel *_titleView;
    UIButton *_closeButton;
    UIView *_freeformMessageContainerView;
    UILabel *_freeformMessageLabel;
    CAShapeLayer *_roundedRectFreeformMessage;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (int)preferredStatusBarStyle;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (unsigned int)occlusionInfo;
- (void)viewTapped:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)initWithSession:(id)arg1 person:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly) Class superclass;

@end

