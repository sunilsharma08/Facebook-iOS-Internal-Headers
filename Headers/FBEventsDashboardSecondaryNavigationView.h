//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBHorizontalButton;

@interface FBEventsDashboardSecondaryNavigationView : UIView
{
    UIView *_verticalSeparatorView;
    UIView *_bottomSeparatorView;
    FBHorizontalButton *_filterButton;
    FBHorizontalButton *_createButton;
}

@property(readonly, nonatomic) FBHorizontalButton *createButton; // @synthesize createButton=_createButton;
@property(readonly, nonatomic) FBHorizontalButton *filterButton; // @synthesize filterButton=_filterButton;
- (void).cxx_destruct;
- (void)removeCreateEventButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

