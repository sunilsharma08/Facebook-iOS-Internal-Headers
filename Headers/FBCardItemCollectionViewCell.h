//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBItemCollectionViewCell.h"

@class UIView;

@interface FBCardItemCollectionViewCell : FBItemCollectionViewCell
{
    struct UIEdgeInsets _edgeInsets;
    UIView *_highlightView;
}

- (void).cxx_destruct;
- (void)configureHighlightView;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithInset:(int)arg1 option:(int)arg2;

@end

