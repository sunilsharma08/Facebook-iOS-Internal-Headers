//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextView;

@interface FBReactionCenteredHeaderView : UIView
{
    FBRichTextView *_messageView;
    FBRichTextView *_summaryView;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_sizeOfTextView:(id)arg1 forSize:(struct CGSize)arg2;
- (id)_newCenteredHeaderTextViewWithStyle:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 message:(id)arg2 summary:(id)arg3 padding:(struct UIEdgeInsets)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

