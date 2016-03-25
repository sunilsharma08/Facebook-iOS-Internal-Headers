//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIView;
@protocol FBReactionFixedHeightVerticallyCenteredViewDelegate;

@interface FBReactionFixedHeightVerticallyCenteredView : UIControl
{
    UIView *_contentView;
    float _height;
    float _sidePadding;
    id <FBReactionFixedHeightVerticallyCenteredViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBReactionFixedHeightVerticallyCenteredViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 height:(float)arg2 sidePadding:(float)arg3 contentView:(id)arg4;

@end

