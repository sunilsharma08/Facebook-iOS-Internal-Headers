//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface FBEventsDashboardWrapperTableViewCell : UITableViewCell
{
    UIView *_wrappedView;
    float _topMargin;
    float _bottomMargin;
}

@property(nonatomic) float bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) float topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIView *wrappedView; // @synthesize wrappedView=_wrappedView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

