//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITableView;

@interface FBPaymentMethodNUXView : UIView
{
    UITableView *_creditCardView;
    UITableView *_paypalButtonView;
    UIView *_disclaimerView;
}

@property(retain, nonatomic) UIView *disclaimerView; // @synthesize disclaimerView=_disclaimerView;
@property(retain, nonatomic) UITableView *paypalButtonView; // @synthesize paypalButtonView=_paypalButtonView;
@property(retain, nonatomic) UITableView *creditCardView; // @synthesize creditCardView=_creditCardView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

