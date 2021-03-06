//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UITapGestureRecognizer;
@protocol FBComposerAudienceEducationLearnMoreViewDelegate;

@interface FBComposerAudienceEducationLearnMoreView : UIView
{
    UITapGestureRecognizer *_gestureRecognizer;
    UIView *_helpInformationView;
    UIButton *_helpDismissalButton;
    UILabel *_helpCenterLink;
    id <FBComposerAudienceEducationLearnMoreViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerAudienceEducationLearnMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_userDidTapHelpCenterLink:(id)arg1;
- (void)_userDidTapDismissHelpButton:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forEducationType:(unsigned int)arg2;

@end

