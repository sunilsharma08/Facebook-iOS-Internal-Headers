//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextView, NSAttributedString, UIButton;
@protocol FBHeadPublisherNuxTableViewCellDelegate;

@interface FBHeadPublisherNuxCell : UIView
{
    FBRichTextView *_richTextView;
    UIButton *_dismissButton;
    id <FBHeadPublisherNuxTableViewCellDelegate> _delegate;
}

+ (id)backgroundColor;
+ (float)heightForText:(id)arg1 width:(float)arg2;
@property(nonatomic) id <FBHeadPublisherNuxTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapDismissButton:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSAttributedString *nuxText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

