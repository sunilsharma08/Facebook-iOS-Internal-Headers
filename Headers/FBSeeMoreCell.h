//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBLoadingIndicatorView, UIView;

@interface FBSeeMoreCell : UITableViewCell
{
    FBLoadingIndicatorView *_spinner;
    int _loadStyle;
    UIView *_topBorderView;
    struct UIEdgeInsets _edgeInsets;
}

+ (float)height;
@property(retain, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int loadStyle; // @synthesize loadStyle=_loadStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

