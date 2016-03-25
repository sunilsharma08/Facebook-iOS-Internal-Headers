//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBTimelineFriendButton, FBTimelineManageButton, FBTimelineSubscribeButton, FBUserSession, NSArray, NSMutableArray, UIButton, UIImage, UIImageView;

@interface FBPersonTimelineActionsView : UIView
{
    UIImageView *_card;
    UIImageView *_friendCard;
    struct UIEdgeInsets _cardInsets;
    UIImage *_separatorImage;
    NSMutableArray *_separators;
    FBTimelineSubscribeButton *_subscribeButton;
    FBTimelineFriendButton *_friendButton;
    FBTimelineManageButton *_manageButton;
    FBUserSession *_session;
    unsigned int _numberOfButtons;
    NSArray *_actions;
}

+ (float)desiredHeight;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *manageButton;
- (void)configureWithPerson:(id)arg1;
- (float)widthOfLowerButtons:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_newSeparatorView;
- (void)_updateActionsWithPerson:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

