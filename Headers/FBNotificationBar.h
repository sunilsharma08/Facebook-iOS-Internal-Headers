//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface FBNotificationBar : UIControl
{
    UIImageView *_shadowView;
    UIImageView *_backgroundImageView;
    BOOL _showsIcon;
    BOOL _showsSecondaryIcon;
    BOOL _showsRightIcon;
    UILabel *_textLabel;
    UIImageView *_iconView;
    UILabel *_secondaryLabel;
    UIImageView *_secondaryIconView;
    UIImageView *_rightIconView;
    NSString *_secondaryNotificationString;
}

+ (id)_stretchableShadowImage;
@property(copy, nonatomic) NSString *secondaryNotificationString; // @synthesize secondaryNotificationString=_secondaryNotificationString;
@property(nonatomic) BOOL showsRightIcon; // @synthesize showsRightIcon=_showsRightIcon;
@property(nonatomic) BOOL showsSecondaryIcon; // @synthesize showsSecondaryIcon=_showsSecondaryIcon;
@property(nonatomic) BOOL showsIcon; // @synthesize showsIcon=_showsIcon;
@property(retain, nonatomic) UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) UIImageView *secondaryIconView; // @synthesize secondaryIconView=_secondaryIconView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (id)_labelForText;
- (void)_layoutText:(id)arg1 WithIcon:(id)arg2 showingIcon:(BOOL)arg3;
- (void)_layoutRightIcon;
- (float)_sizeOfRightIcon;
- (void)_layoutTextLabelsAndIcon;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *notificationString;
- (void)_performSecondaryAnimation:(BOOL)arg1 withInitialDelay:(BOOL)arg2;
- (void)showSecondaryNotification:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showSecondaryNotification:(BOOL)arg1;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) UIImageView *backgroundImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

