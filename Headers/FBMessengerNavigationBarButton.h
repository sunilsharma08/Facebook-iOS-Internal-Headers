//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class FBBadgeView, FBKVOController;

@interface FBMessengerNavigationBarButton : UIButton
{
    CDUnknownBlockType _didTapBlock;
    FBKVOController *_KVOController;
    FBBadgeView *_badgeView;
}

- (void).cxx_destruct;
- (void)messagesJewelCountChanged:(id)arg1 inJewelController:(id)arg2;
- (void)didTapButton;
- (void)layoutSubviews;
- (id)initWithJewelController:(id)arg1 didTapBlock:(CDUnknownBlockType)arg2;

@end

