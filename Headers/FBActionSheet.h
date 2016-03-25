//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIActionSheet.h>

@class FBActionSheetCoordinator, FBDelegateForwarder;
@protocol UIActionSheetDelegate;

@interface FBActionSheet : UIActionSheet
{
    FBActionSheetCoordinator *_coordinator;
    FBDelegateForwarder *_forwarder;
    int _fbFirstOtherButtonIndex;
    id <UIActionSheetDelegate> _mainDelegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <UIActionSheetDelegate> mainDelegate; // @synthesize mainDelegate=_mainDelegate;
- (void).cxx_destruct;
- (void)_resetForwarder;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (int)firstOtherButtonIndex;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 coordinator:(id)arg6;

@end

