//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBEventsComposerFieldControllerProtocol-Protocol.h"
#import "FBMediaAttachmentPickerControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBEventAnalyticTracker, FBEventsComposerCoverPhotoCell, FBMediaAttachmentPickerController, FBMemFocusedPhoto, FBPopoverActionSheet, FBUserSession, NSString, UIViewController;
@protocol FBEventsComposerCoverPhotoFieldControllerDelegate, FBPhotoAttachmentProtocol;

@interface FBEventsComposerCoverPhotoFieldController : NSObject <FBMediaAttachmentPickerControllerDelegate, UITextFieldDelegate, FBEventsComposerFieldControllerProtocol>
{
    FBEventsComposerCoverPhotoCell *_cell;
    FBUserSession *_session;
    NSString *_initialTitleText;
    UIViewController *_photoPickerViewController;
    FBMemFocusedPhoto *_initialCoverPhoto;
    FBEventAnalyticTracker *_tracker;
    id <FBPhotoAttachmentProtocol> _updatedCoverPhoto;
    id <FBEventsComposerCoverPhotoFieldControllerDelegate> _delegate;
    unsigned int _fieldType;
    int _coverPhotoSize;
    FBMediaAttachmentPickerController *_photoPickerController;
    FBPopoverActionSheet *_popoverActionSheet;
}

@property(retain, nonatomic) FBPopoverActionSheet *popoverActionSheet; // @synthesize popoverActionSheet=_popoverActionSheet;
@property(retain, nonatomic) FBMediaAttachmentPickerController *photoPickerController; // @synthesize photoPickerController=_photoPickerController;
@property(nonatomic) int coverPhotoSize; // @synthesize coverPhotoSize=_coverPhotoSize;
@property(nonatomic) unsigned int fieldType; // @synthesize fieldType=_fieldType;
@property(nonatomic) __weak id <FBEventsComposerCoverPhotoFieldControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)mediaAttachmentPickerController:(id)arg1 openURL:(id)arg2;
- (void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1;
- (void)mediaAttachmentPickerControllerPermissionDenied:(id)arg1;
- (void)mediaAttachmentPickerControllerDidCancel:(id)arg1;
- (void)mediaAttachmentPickerController:(id)arg1 didSelectMediaAttachments:(id)arg2 fromSource:(int)arg3;
- (void)setCoverPhotoSize:(int)arg1 animated:(BOOL)arg2;
- (id)photoPickerViewController;
- (void)_showPhotoPickerViewControllerAnimated:(BOOL)arg1;
- (void)didSelectRemoveThemeItem:(id)arg1;
- (void)didSelectUploadPhotoItem:(id)arg1;
- (void)didSelectCameraButton:(id)arg1;
- (BOOL)hasChanged;
- (id)cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (void)registerCellsWithCollectionView:(id)arg1;
- (float)heightForItemCellInCollectionView:(id)arg1;
- (id)partialEventEditInputDataSet;
- (id)partialEventCreateInputDataSet;
- (void)_resetCoverPhotoPickerController;
- (void)_configureCoverPhotoWithImage:(id)arg1 animated:(BOOL)arg2;
- (void)_configureCoverPhotoViewWithPhotoAttachment:(id)arg1 animated:(BOOL)arg2;
- (void)_configureInitialCoverPhotoIfNecessary;
- (void)focusTitleTextField;
- (id)initWithSession:(id)arg1 tracker:(id)arg2 initialTitleText:(id)arg3 coverPhoto:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

