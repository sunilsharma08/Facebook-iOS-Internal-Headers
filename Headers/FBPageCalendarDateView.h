//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, UILabel;

@interface FBPageCalendarDateView : UIView
{
    UILabel *_monthLabel;
    UILabel *_dayLabel;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_reload;
- (void)_adjustLabel:(id)arg1 atSize:(float)arg2 forWidth:(float)arg3;
- (void)_createSubviewsIfNeeded;

@end

