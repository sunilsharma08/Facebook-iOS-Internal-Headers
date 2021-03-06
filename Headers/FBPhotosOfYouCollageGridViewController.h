//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPhotosCollageInsetsTrackingViewController.h"

#import "FBAddPhotosComposerHandlerDelegate-Protocol.h"
#import "FBNuxBannerControllerDelegate-Protocol.h"

@class FBAddPhotosComposerHandler, FBMemPerson, FBUserSession, NSString, UIViewController;
@protocol FBNuxBannerViewController;

@interface FBPhotosOfYouCollageGridViewController : FBPhotosCollageInsetsTrackingViewController <FBAddPhotosComposerHandlerDelegate, FBNuxBannerControllerDelegate>
{
    FBAddPhotosComposerHandler *_addPhotosComposerHandler;
    FBMemPerson *_person;
    FBUserSession *_session;
    UIViewController<FBNuxBannerViewController> *_bannerViewController;
    BOOL _viewHasAppeared;
}

- (void).cxx_destruct;
- (void)_onAddPhotoButtonItemTap;
- (void)_setBannerViewController:(id)arg1;
- (void)nuxBannerControllerDidDismissBanner:(id)arg1;
- (void)composerHandlerDidFinishUpload:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithMediaStore:(id)arg1 session:(id)arg2 referrer:(id)arg3 analyticsModule:(id)arg4;
- (id)initWithPerson:(id)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

