//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

#import "FBComposerAudiencePickerControllerDelegate-Protocol.h"
#import "FBLightweightPrivacyPickerViewControllerDelegate-Protocol.h"

@class FBComposerAudiencePickerViewController, FBLightweightPrivacyPickerViewController, FBPopoverController, FBPrivacyCheckupToolbox, NSString;
@protocol FBNavigationCoordinator;

@interface FBPrivacyCheckupPrivacyActionComponentController : CKComponentController <FBLightweightPrivacyPickerViewControllerDelegate, FBComposerAudiencePickerControllerDelegate>
{
    FBPopoverController *_lightweightPopover;
    FBLightweightPrivacyPickerViewController *_lightweightPicker;
    FBComposerAudiencePickerViewController *_composerPicker;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBPrivacyCheckupToolbox *_toolbox;
}

- (void).cxx_destruct;
- (void)audiencePickerControllerDidTapDoneNavigationButton:(id)arg1 finishedWithAvailablePrivacySettings:(id)arg2 selectedAudience:(id)arg3;
- (void)audiencePickerControllerDidTapCancelNavigationButton:(id)arg1;
- (void)lightweightPrivacyPicker:(id)arg1 userDidSelectPrivacy:(id)arg2;
- (void)willRemount;
- (void)presentComposerPicker:(id)arg1;
- (void)presentLightweightPicker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

