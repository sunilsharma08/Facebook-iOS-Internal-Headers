//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPhoto, FBPhotoCollectionDataSource, FBPhotoOverlayActionController, FBPhotoViewController, NSString, UIView;

@protocol FBPhotoViewControllerDelegate <NSObject>

@optional
- (void)overlayActionControllerCustomShareButtonTap:(FBPhotoOverlayActionController *)arg1 photoCollectionDataSource:(FBPhotoCollectionDataSource *)arg2;
- (BOOL)photoViewControllerShouldAllowPhotoDeletion:(FBPhotoViewController *)arg1;
- (BOOL)photoViewController:(FBPhotoViewController *)arg1 shouldShowTagGuideForUser:(NSString *)arg2;
- (void)photoViewControllerDidAppear:(FBPhotoViewController *)arg1;
- (void)photoViewController:(FBPhotoViewController *)arg1 willDismissAfterDeletingPhoto:(FBMemPhoto *)arg2;
- (void)photoViewController:(FBPhotoViewController *)arg1 didDismissPhoto:(FBMemPhoto *)arg2;
- (void)photoViewControllerWillDismiss:(FBPhotoViewController *)arg1;
- (struct CGRect)photoViewController:(FBPhotoViewController *)arg1 animationBoundsForView:(UIView *)arg2;
@end

