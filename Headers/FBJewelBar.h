//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBJewelContainer-Protocol.h"

@class FBJewelButton, NSString;

@interface FBJewelBar : UIView <FBJewelContainer>
{
    FBJewelButton *_friendRequestsButton;
    FBJewelButton *_groupsButton;
    FBJewelButton *_messagesButton;
    FBJewelButton *_notificationsButton;
    struct CGSize _hitSlop;
}

@property(nonatomic) struct CGSize hitSlop; // @synthesize hitSlop=_hitSlop;
@property(readonly, nonatomic) FBJewelButton *notificationsButton; // @synthesize notificationsButton=_notificationsButton;
@property(readonly, nonatomic) FBJewelButton *messagesButton; // @synthesize messagesButton=_messagesButton;
@property(readonly, nonatomic) FBJewelButton *groupsButton; // @synthesize groupsButton=_groupsButton;
@property(readonly, nonatomic) FBJewelButton *friendRequestsButton; // @synthesize friendRequestsButton=_friendRequestsButton;
- (void).cxx_destruct;
- (void)cancelTouches;
- (void)_configureButton:(id)arg1 withNormalStateImageName:(id)arg2 activeStateImageName:(id)arg3 badgeViewOffset:(struct CGPoint)arg4;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)bounceJewel:(int)arg1;
- (id)jewelButtonForJewelType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(struct FBJewelBarConfiguration)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

