//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class FBFriendCenterBadgeView, NSString;

@interface FBFriendCenterMenuItemButton : UIButton
{
    NSString *_badgeNumber;
    FBFriendCenterBadgeView *_badgeView;
    unsigned int _menuItem;
}

@property(nonatomic) unsigned int menuItem; // @synthesize menuItem=_menuItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBadgeNumber:(id)arg1;
- (void)setPressedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

