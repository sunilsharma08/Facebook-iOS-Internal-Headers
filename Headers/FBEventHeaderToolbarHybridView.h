//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBActionBar, FBEventHeaderView, FBEventPermalinkToolbox;

@interface FBEventHeaderToolbarHybridView : UIView
{
    FBEventHeaderView *_headerView;
    FBActionBar *_toolbar;
    FBEventPermalinkToolbox *_toolbox;
}

@property(readonly, nonatomic) FBActionBar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) FBEventHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithHeaderModel:(id)arg1 toolbarModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 toolbox:(id)arg2;

@end

