//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBQAndALabel, UIButton;
@protocol FBQAndALabelViewDelegate;

@interface FBQAndALabelView : UIView
{
    FBQAndALabel *_qAndALabel;
    UIButton *_cancelButton;
    id <FBQAndALabelViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBQAndALabelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_closeView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

