//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface FBAppInviteSettingsTableViewCell : UITableViewCell
{
    UISwitch *_toggleSwitch;
    unsigned int _identifier;
}

+ (id)cellWithIdentifier:(unsigned int)arg1 text:(id)arg2 image:(id)arg3 accessory:(int)arg4 selectionStyle:(int)arg5;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
- (void).cxx_destruct;
- (void)showToggleSwitch:(BOOL)arg1;

@end

