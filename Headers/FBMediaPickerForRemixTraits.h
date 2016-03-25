//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMediaPickerBaseTraits.h"

@class FBUserSession;

@interface FBMediaPickerForRemixTraits : FBMediaPickerBaseTraits
{
    FBUserSession *_session;
    BOOL _unifiedMediaGalleryEnabled;
}

+ (id)traitsWithSession:(id)arg1 isUnifiedMediaGalleryEnabled:(BOOL)arg2;
- (void).cxx_destruct;
- (BOOL)showBackButton;
- (unsigned int)initialToolForMediaGallery;
- (BOOL)tapToBringUpGalleryView;
- (BOOL)unifiedMediaGalleryEnabled;
- (BOOL)autoNavigationEnabled;
- (BOOL)requireSquarePhoto;
- (unsigned int)maxPhotosSelected;
- (BOOL)allowFaceDetection;
- (BOOL)allowTagging;
- (id)init;
- (id)initWithSession:(id)arg1 isUnifiedMediaGalleryEnabled:(BOOL)arg2;

@end

