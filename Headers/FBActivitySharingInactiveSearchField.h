//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface FBActivitySharingInactiveSearchField : UITableViewCell
{
    UIImageView *_searchGlyph;
    BOOL _shouldLeftAlignIcon;
}

@property(readonly, nonatomic) UIImageView *searchGlyph; // @synthesize searchGlyph=_searchGlyph;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 shoudUseBiggerIcon:(BOOL)arg2 shouldLeftAlignIcon:(BOOL)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

