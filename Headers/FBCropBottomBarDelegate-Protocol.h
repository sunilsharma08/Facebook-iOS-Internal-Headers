//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBCropBottomBar;

@protocol FBCropBottomBarDelegate <NSObject>
- (void)cropBottomBarDidTapCropOptionsButton:(FBCropBottomBar *)arg1;
- (void)presetRotationButtonTapped:(FBCropBottomBar *)arg1;
- (void)aspectRatioLockButtonTapped:(FBCropBottomBar *)arg1;

@optional
- (void)doneButtonTapped:(FBCropBottomBar *)arg1;
- (void)cancelButtonTapped:(FBCropBottomBar *)arg1;
@end

