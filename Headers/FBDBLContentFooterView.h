//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface FBDBLContentFooterView : UIView
{
    UIView *_content;
    UIView *_footer;
    struct UIEdgeInsets _minimumEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets minimumEdgeInsets; // @synthesize minimumEdgeInsets=_minimumEdgeInsets;
@property(readonly, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(readonly, nonatomic) UIView *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContent:(id)arg1 footer:(id)arg2;

@end

