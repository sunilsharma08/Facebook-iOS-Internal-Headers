//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBReactionAdapterContext, NSArray;

@interface FBReactionHorizontalListView : UIView
{
    NSArray *_contentViews;
    NSArray *_dividerViews;
    UIView *_topDividerView;
    float _topDividerSidePadding;
    FBReactionAdapterContext *_reactionContext;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentViews:(id)arg2 reactionContext:(id)arg3 topDividerSidePadding:(float)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

