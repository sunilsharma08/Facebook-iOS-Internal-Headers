//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol FBFeedNetworkErrorViewDelegate;

@interface FBFeedNetworkErrorView : UIView
{
    UIButton *_closeButton;
    UILabel *_messageLabel;
    UILabel *_secondaryLabel;
    UIView *_separatorView;
    BOOL _showSecondaryNotification;
    id <FBFeedNetworkErrorViewDelegate> _delegate;
}

+ (id)createErrorLabel;
@property(nonatomic) BOOL showSecondaryNotification; // @synthesize showSecondaryNotification=_showSecondaryNotification;
@property(nonatomic) __weak id <FBFeedNetworkErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animateFromCenter:(struct CGPoint)arg1 toCenter:(struct CGPoint)arg2 fromScale:(struct CGPoint)arg3 toScale:(struct CGPoint)arg4 completion:(CDUnknownBlockType)arg5;
- (void)animateDismissalFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateEntranceFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2;
- (void)_networkErrorDismissed:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_performSecondaryAnimation:(BOOL)arg1 withInitialDelay:(BOOL)arg2 loops:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

