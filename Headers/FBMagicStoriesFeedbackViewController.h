//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFeedbackViewController.h"

#import "FBComposerFlowDelegate-Protocol.h"
#import "FBMagicStoriesFeedbackDataSourceDelegate-Protocol.h"
#import "FBMagicStoriesVerveControllerDelegate-Protocol.h"
#import "FBMagicStoryHeaderViewDelegate-Protocol.h"
#import "FBModalContainerViewControllerDelegate-Protocol.h"
#import "FBModalContentViewController-Protocol.h"
#import "FBPhotoViewControllerDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"

@class FBFeedUFIButtonCellAdapter, FBKVOController, FBMagicStoriesConsumptionLogger, FBMagicStoriesPushBehindPresentationHandler, FBMagicStoriesVerveController, FBMagicStoryHeaderView, FBMemSouvenir, NSString;

@interface FBMagicStoriesFeedbackViewController : FBFeedbackViewController <FBPresentableViewController, FBMagicStoriesFeedbackDataSourceDelegate, FBMagicStoriesVerveControllerDelegate, FBMagicStoryHeaderViewDelegate, FBPhotoViewControllerDelegate, FBComposerFlowDelegate, FBModalContentViewController, FBModalContainerViewControllerDelegate>
{
    FBMagicStoryHeaderView *_headerView;
    FBFeedUFIButtonCellAdapter *_ufiCell;
    FBMagicStoriesConsumptionLogger *_consumptionLogger;
    FBMagicStoriesPushBehindPresentationHandler *_composerPresentationHandler;
    FBMemSouvenir *_souvenir;
    FBMagicStoriesVerveController *_verveController;
    FBKVOController *_kvoController;
    NSString *_photoViewingSessionID;
}

+ (id)modalViewControllerWithSouvenirGraphQLID:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3;
@property(copy, nonatomic) NSString *photoViewingSessionID; // @synthesize photoViewingSessionID=_photoViewingSessionID;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) FBMagicStoriesVerveController *verveController; // @synthesize verveController=_verveController;
@property(retain, nonatomic) FBMemSouvenir *souvenir; // @synthesize souvenir=_souvenir;
- (void).cxx_destruct;
- (void)_updateSocialButtonCell;
- (id)_socialButtonCell;
- (void)composerCompletedWithResult:(id)arg1;
- (void)feeedbackDataSourceDidTapUpsellButton:(id)arg1;
- (void)feeedbackDataSourceWillDisplayUpsellButton:(id)arg1;
- (void)feedbackContentDataSourceDidUpdateData:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)verveViewDidCreatePageModel;
- (void)verveView:(id)arg1 failedToFetchTemplateWithError:(id)arg2;
- (void)verveViewDidFetchTemplate:(id)arg1;
- (void)verveViewShouldPresentPhotoControllerWithPhotos:(id)arg1 selectedIndex:(unsigned int)arg2 photoViewProvider:(id)arg3;
- (void)_handleNetworkError;
- (void)_fetchFullSouvenirWithGraphQLID:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)photoViewController:(id)arg1 didDismissPhoto:(id)arg2;
- (BOOL)photoViewControllerShouldAllowPhotoDeletion:(id)arg1;
- (void)headerViewDidTapCloseButton:(id)arg1;
- (id)scrollViewForDismissingModalContainerViewController:(id)arg1;
- (id)headerViewForModalContainerViewController:(id)arg1;
- (void)dismissModalContainerViewController:(id)arg1;
- (BOOL)analyticsRequiresNetworkContent;
- (BOOL)analyticsHasCachedNetworkContent;
- (id)analyticsModule;
- (BOOL)analyticsAutomaticallyLogContent;
- (void)updateVisibleVerveRect;
- (void)updateHeaderView;
- (void)feedbackViewContentDidChange;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSouvenirGraphQLID:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly) Class superclass;

@end

