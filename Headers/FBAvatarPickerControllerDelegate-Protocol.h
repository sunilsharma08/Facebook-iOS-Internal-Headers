//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAvatarPickerController, FBEntityPickerTextField, NSArray;
@protocol FBAvatarProtocol;

@protocol FBAvatarPickerControllerDelegate <NSObject>
- (void)avatarPicker:(FBAvatarPickerController *)arg1 didFinishWithSelection:(NSArray *)arg2;

@optional
- (void)avatarPicker:(FBAvatarPickerController *)arg1 searchFieldDidChangeHeight:(FBEntityPickerTextField *)arg2;
- (void)avatarPickerValueDidChange:(FBAvatarPickerController *)arg1;
- (void)avatarPickerWillRemoveObject:(FBAvatarPickerController *)arg1;
- (BOOL)avatarPicker:(FBAvatarPickerController *)arg1 shouldSelectAvatar:(id <FBAvatarProtocol>)arg2;
- (void)avatarPickerDidCancel:(FBAvatarPickerController *)arg1;
@end

