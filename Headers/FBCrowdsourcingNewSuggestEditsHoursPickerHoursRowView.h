//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellViewDelegate-Protocol.h"

@class CALayer, FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView, FBMemTimeRange, NSString, UIButton;
@protocol FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate;

@interface FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowView : UIView <FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellViewDelegate>
{
    UIButton *_rightButton;
    FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView *_fromHoursView;
    FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView *_toHoursView;
    CALayer *_fromBorder;
    CALayer *_toBorder;
    FBMemTimeRange *_hoursRange;
    int _cellType;
    id <FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) FBMemTimeRange *hoursRange; // @synthesize hoursRange=_hoursRange;
- (void).cxx_destruct;
- (void)_didTapAccessory;
- (void)hoursCellView:(id)arg1 didTapCellOfType:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

