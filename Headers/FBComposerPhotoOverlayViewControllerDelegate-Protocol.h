//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, UIViewController;
@protocol FBComposerPhotoOverlayAttachmentsViewController;

@protocol FBComposerPhotoOverlayViewControllerDelegate <NSObject>
- (void)composerPhotoOverlayAttachmentsViewControllerDidHitCancel:(UIViewController<FBComposerPhotoOverlayAttachmentsViewController> *)arg1;
- (void)composerPhotoOverlayAttachmentsViewControllerDidHitDone:(UIViewController<FBComposerPhotoOverlayAttachmentsViewController> *)arg1 didHitNavBarDone:(BOOL)arg2 didChangePhotoOverlay:(BOOL)arg3 imageWithPhotoOverlayApplied:(UIImage *)arg4;
@end

