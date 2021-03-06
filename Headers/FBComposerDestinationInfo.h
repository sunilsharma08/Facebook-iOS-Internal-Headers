//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBComposerNavigationDestination, UIViewController;
@protocol FBComposerPickerController;

@interface FBComposerDestinationInfo : NSObject
{
    UIViewController *_presentedViewController;
    id <FBComposerPickerController> _pickerController;
    FBComposerNavigationDestination *_parentDestination;
}

@property(readonly, nonatomic) FBComposerNavigationDestination *parentDestination; // @synthesize parentDestination=_parentDestination;
@property(readonly, nonatomic) id <FBComposerPickerController> pickerController; // @synthesize pickerController=_pickerController;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void).cxx_destruct;
- (id)initWithPresentedViewController:(id)arg1 pickerController:(id)arg2 parentDestination:(id)arg3;

@end

