//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBLongTextExpandableView, NSAttributedString, UILabel;

@interface FBPageVideoHubVideoListDetailView : UIView
{
    UILabel *_videoCountLabel;
    FBLongTextExpandableView *_longTextView;
    NSAttributedString *_bodyText;
}

@property(copy, nonatomic) NSAttributedString *bodyText; // @synthesize bodyText=_bodyText;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *videoCountLabel;
@property(readonly, nonatomic) UILabel *textLabel;
@property(nonatomic, getter=isExpanded) BOOL expanded;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

