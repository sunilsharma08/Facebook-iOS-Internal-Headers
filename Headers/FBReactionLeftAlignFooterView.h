//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FBRichTextView, UIView;

@interface FBReactionLeftAlignFooterView : UIControl
{
    UIView *_borderView;
    UIView *_actionView;
    FBRichTextView *_textView;
    float _horizontalMargin;
}

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithHorizontalMargin:(float)arg1 actionView:(id)arg2 text:(id)arg3 hasTopBorder:(BOOL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

