//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface FBComposerDatePickerDateCell : UITableViewCell
{
    BOOL _hasDateInfo;
    UILabel *_dateCellTextLabel;
    UILabel *_dateCellDetailTextLabel;
}

@property(nonatomic) BOOL hasDateInfo; // @synthesize hasDateInfo=_hasDateInfo;
@property(retain, nonatomic) UILabel *dateCellDetailTextLabel; // @synthesize dateCellDetailTextLabel=_dateCellDetailTextLabel;
@property(retain, nonatomic) UILabel *dateCellTextLabel; // @synthesize dateCellTextLabel=_dateCellTextLabel;
- (void).cxx_destruct;
- (void)setUpDetailTextLabelPosition:(BOOL)arg1;
- (void)setUpTextLabelPosition;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

