//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBCropViewControllerDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBRemotePhotoSelectionDelegate-Protocol.h"

@class FBCropViewController, FBMemPhoto, FBProfilePicturePickerStatusView, FBRemotePhotoSelectionController, FBUserSession, NSString;
@protocol FBProfilePicRemotePhotoSelectionDelegate;

@interface FBProfilePicRemotePhotoSelectionController : UIViewController <FBRemotePhotoSelectionDelegate, FBCropViewControllerDelegate, FBPresentableViewController>
{
    FBUserSession *_session;
    FBRemotePhotoSelectionController *_selectionController;
    FBProfilePicturePickerStatusView *_profilePictureStatusView;
    FBMemPhoto *_selectedPhoto;
    FBCropViewController *_cropViewController;
    id <FBProfilePicRemotePhotoSelectionDelegate> _delegate;
}

@property(nonatomic) __weak id <FBProfilePicRemotePhotoSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showProfilePictureStatusView:(CDUnknownBlockType)arg1;
- (void)_sendCropRequest:(struct CGRect)arg1;
- (void)_didFinish;
- (void)cropViewControllerDidCancelCrop:(id)arg1;
- (void)cropViewControllerDidConfirmCrop:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)remotePhotoSelectionControllerDidCancel:(id)arg1;
- (void)remotePhotoSelectionController:(id)arg1 didSelectPhoto:(id)arg2 view:(id)arg3;
- (BOOL)fb_showNavigationJewels;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (int)preferredStatusBarStyle;
- (id)analyticsModule;
- (id)initWithSession:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

