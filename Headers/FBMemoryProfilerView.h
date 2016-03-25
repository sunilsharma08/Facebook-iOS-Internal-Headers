//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemoryProfilerStepperView, FBTextField, NSDictionary, UILabel, UITableView;

@interface FBMemoryProfilerView : UIView
{
    UILabel *_warningLabel;
    NSDictionary *_attributes;
    UILabel *_residentMemory;
    UITableView *_tableView;
    FBMemoryProfilerStepperView *_persistedRange;
    FBMemoryProfilerStepperView *_accuracy;
    FBTextField *_subwordFilter;
}

@property(retain, nonatomic) FBTextField *subwordFilter; // @synthesize subwordFilter=_subwordFilter;
@property(retain, nonatomic) FBMemoryProfilerStepperView *accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) FBMemoryProfilerStepperView *persistedRange; // @synthesize persistedRange=_persistedRange;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)pushAboveTopLine:(float)arg1;
- (void)setResidentMemory:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

