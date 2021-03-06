//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBSegmentedContainerViewController.h"

#import "FBFullScreenTransitionBoundsProvider-Protocol.h"
#import "FBReactionAvailablePhotoCategoriesDownloaderDelegate-Protocol.h"

@class FBReactionAvailablePhotoCategoriesDownloader, FBUserSession, NSMapTable, NSString, UIActivityIndicatorView;

@interface FBReactionSegmentedPhotoCategoryViewController : FBSegmentedContainerViewController <FBReactionAvailablePhotoCategoriesDownloaderDelegate, FBFullScreenTransitionBoundsProvider>
{
    FBUserSession *_session;
    NSString *_targetID;
    NSString *_entryPoint;
    FBReactionAvailablePhotoCategoriesDownloader *_downloader;
    NSMapTable *_viewControllerPhotoStoreMap;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _didSetInitialIndex;
    BOOL _didScrollPhotoViewer;
}

- (void).cxx_destruct;
- (BOOL)shouldUpdateTitle;
- (void)setSelectedIndex:(int)arg1;
- (void)_hideSpinner;
- (id)_viewControllersFromAvailableCategories:(id)arg1;
- (BOOL)fb_showNavBarSearchField;
- (void)categoryDownloader:(id)arg1 didFail:(id)arg2;
- (void)categoryDownloader:(id)arg1 didFetchAvailableCategories:(id)arg2 primaryCategory:(id)arg3;
- (struct CGRect)fullScreenTransitionBoundsForView:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 scenePathContext:(id)arg3 session:(id)arg4 targetId:(id)arg5 entryPoint:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

