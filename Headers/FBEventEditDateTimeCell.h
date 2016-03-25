//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBEventEditTableViewCell.h"

@class UILabel;

@interface FBEventEditDateTimeCell : FBEventEditTableViewCell
{
    UILabel *_startTimeLabel;
    UILabel *_startTimeDetailLabel;
    UILabel *_endTimeLabel;
    UILabel *_endTimeDetailLabel;
    BOOL _expanded;
}

@property(readonly, nonatomic) UILabel *endTimeDetailLabel; // @synthesize endTimeDetailLabel=_endTimeDetailLabel;
@property(readonly, nonatomic) UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(readonly, nonatomic) UILabel *startTimeDetailLabel; // @synthesize startTimeDetailLabel=_startTimeDetailLabel;
@property(readonly, nonatomic) UILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (id)_newDetailLabel;
- (id)_newTitleLabel;
- (struct CGRect)_endTimeDetailLabelFrameForContentBounds:(struct CGRect)arg1;
- (struct CGRect)_endTimeLabelFrameForContentBounds:(struct CGRect)arg1;
- (struct CGRect)_startTimeDetailLabelFrameForContentBounds:(struct CGRect)arg1;
- (struct CGRect)_startTimeLabelFrameForContentBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

