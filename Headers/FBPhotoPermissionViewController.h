//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBPresentableViewController-Protocol.h"

@class NSString;
@protocol FBPhotoPermissionViewControllerDelegate;

@interface FBPhotoPermissionViewController : UIViewController <FBPresentableViewController>
{
    id <FBPhotoPermissionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPhotoPermissionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapDone:(id)arg1;
- (BOOL)fb_showNavigationJewels;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopover;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

