//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAvatarPickerControllerDelegate-Protocol.h"
#import "FBCoverImagePickerControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBCoverImagePickerController, FBGroupMemberPickViewController, FBGroupMutationInfo, FBUserSession, NSString, UIActionSheet, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UITextField, UIView;
@protocol FBGroupCreationFlowEventsDelegate;

@interface FBGroupCreationViewController : UIViewController <FBAvatarPickerControllerDelegate, FBCoverImagePickerControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate>
{
    FBUserSession *_session;
    BOOL _memberRequired;
    UITextField *_nameField;
    UIView *_sectionSeparator;
    FBGroupMemberPickViewController *_memberPicker;
    UIActivityIndicatorView *_spinnerView;
    UIImage *_placeholderImage;
    UIImageView *_coverPhotoImageView;
    UIButton *_coverPhotoButton;
    UIActionSheet *_coverPhotoActionSheet;
    int _coverPhotoActionSheetUploadPhotoIndex;
    int _coverPhotoActionSheetTakePictureIndex;
    FBCoverImagePickerController *_coverPhotoPicker;
    id <FBGroupCreationFlowEventsDelegate> _delegate;
    FBGroupMutationInfo *_groupMutationInfo;
}

@property(nonatomic) __weak FBGroupMutationInfo *groupMutationInfo; // @synthesize groupMutationInfo=_groupMutationInfo;
@property(nonatomic) __weak id <FBGroupCreationFlowEventsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCreationValidity;
- (void)_textFieldDidChange:(id)arg1;
- (void)_coverPhotoButtonTapped:(id)arg1;
- (void)_showCoverPhotoPickerWithSourceType:(int)arg1;
- (void)relaunchCoverImagePicker:(id)arg1 withSourceType:(int)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_fetchPrefilledMemberInfo:(CDUnknownBlockType)arg1;
- (void)_setupMemberPicker;
- (void)_hideSpinner;
- (void)_showSpinner:(struct CGPoint)arg1;
- (void)_didTapBack;
- (void)_didTapNext;
- (void)_orientationUpdated:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)analyticsModule;
- (BOOL)avatarPicker:(id)arg1 shouldSelectAvatar:(id)arg2;
- (void)avatarPickerWillRemoveObject:(id)arg1;
- (void)avatarPickerValueDidChange:(id)arg1;
- (void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1 memberRequired:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

