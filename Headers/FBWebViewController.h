//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAnimatedProgressBarViewDelegate-Protocol.h"
#import "FBFullScreenErrorViewDelegate-Protocol.h"
#import "FBMobileCanvasDialog-Protocol.h"
#import "FBNuxBannerControllerDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBWebAppLinkBannerViewControllerDelegate-Protocol.h"
#import "FBWebNativeThirdPartyURLControllerDelegate-Protocol.h"
#import "FBWebToolbarViewDelegate-Protocol.h"
#import "NJKWebViewProgressDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"
#import "NSUserActivityDelegate-Protocol.h"
#import "PKAddPassesViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "ZRTariffedUxSentryDelegate-Protocol.h"

@class FBAnimatedProgressBarView, FBBrowserAnalytics, FBContentInsetTracker, FBExceptionHandler, FBExperimentManager, FBInsetWrappingView, FBMobileCanvasWilde, FBPopoverInfo, FBScenePath, FBSystemMoviePlayerAudioSessionAdaptor, FBUIWebViewDelegateAdaptor, FBUserSession, FBWebAppLink, FBWebAppLinkBannerViewController, FBWebNativeThirdPartyURLController, FBWebRedirectTracker, FBWebToolbarView, FBWebViewRequestLoader, NJKWebViewProgress, NSMutableData, NSString, NSTimer, NSURL, NSURLConnection, NSURLRequest, PKPass, UIActionSheet, UIBarButtonItem, UIColor, UIToolbar, UIView;
@protocol FBModalWebFlowDelegate, FBNuxBannerViewController, FBWebView, FBWebViewControllerDelegate, FBWebViewLinkHandler;

@interface FBWebViewController : UIViewController <FBAnimatedProgressBarViewDelegate, FBFullScreenErrorViewDelegate, FBMobileCanvasDialog, FBNuxBannerControllerDelegate, FBPresentableViewController, FBWebAppLinkBannerViewControllerDelegate, FBWebNativeThirdPartyURLControllerDelegate, FBWebToolbarViewDelegate, NJKWebViewProgressDelegate, NSURLConnectionDelegate, NSUserActivityDelegate, PKAddPassesViewControllerDelegate, UIActionSheetDelegate, UIScrollViewDelegate, ZRTariffedUxSentryDelegate>
{
    NSURLRequest *_request;
    NSTimer *_errorTimer;
    NSTimer *_enforceMinViewTimeTimer;
    BOOL _shouldSwitchToWebView;
    double _lastViewSwitchTime;
    BOOL _isViewVisible;
    UIBarButtonItem *_actionItem;
    UIActionSheet *_actionSheet;
    NSTimer *_loadingTimer;
    NSTimer *_OOMCrashDetectionTimer;
    FBInsetWrappingView *_wrappingView;
    UIView *_wrappedView;
    FBWebToolbarView *_toolbar;
    UIBarButtonItem *_toolbarItem;
    NSURL *_originalURL;
    FBWebRedirectTracker *_redirectTracker;
    struct {
        unsigned int barsLoaded:1;
        unsigned int didAppearOnce:1;
        unsigned int didFinishLoadOnce:1;
        unsigned int didLoadTitleOnce:1;
        unsigned int forwardOrientation:1;
        unsigned int isModal:1;
        unsigned int loading:1;
        unsigned int didFirstScroll:1;
    } _flags;
    unsigned int _alertViewToken;
    UIBarButtonItem *_forcedLeftBarButtonItem;
    UIBarButtonItem *_forcedRightBarButtonItem;
    FBUIWebViewDelegateAdaptor *_delegateAdaptor;
    FBSystemMoviePlayerAudioSessionAdaptor *_audioSessionAdaptor;
    FBWebViewRequestLoader *_requestLoader;
    FBWebAppLinkBannerViewController *_appLinkBanner;
    FBScenePath *_scenePath;
    UIView *_progressBarSuperView;
    BOOL _preventAccessToLoginPage;
    BOOL _disableJewels;
    BOOL _disablePullToRefresh;
    BOOL _disableSendAsMessageAction;
    BOOL _disableShareLinkAction;
    BOOL _shouldSupportLandscapeOrientation;
    BOOL _isTabBarVisible;
    BOOL _hasToolbar;
    BOOL _enableQuickPromotion;
    BOOL _isModalFlow;
    BOOL _disableDismissModalFlowAutomatically;
    BOOL _cancelButtonReplaced;
    BOOL _progressBarEnabled;
    BOOL _showingExternalContent;
    BOOL _useWKWebView;
    BOOL _enableOOMDetection;
    FBUserSession *_session;
    int _policy;
    FBWebAppLink *_appLink;
    NSString *_shareLinkLabelString;
    int _parentApp;
    CDUnknownBlockType _contentInsetsProvider;
    FBAnimatedProgressBarView *_progressBar;
    UIColor *_webToolbarColor;
    UIColor *_webToolbarItemsColor;
    UIColor *_progressBarColor;
    UIToolbar *_customToolBar;
    unsigned int _titleSource;
    FBWebNativeThirdPartyURLController *_nativeURLController;
    NSString *_modalCancelButtonTitle;
    id <FBWebViewControllerDelegate> _delegate;
    id <FBModalWebFlowDelegate> _modalFlowDelegate;
    FBExceptionHandler *_exceptionHandler;
    FBBrowserAnalytics *_browserAnalytics;
    int _usePrefetchPolicy;
    UIView<FBWebView> *_fbWebView;
    int _openInSafariButtonIndex;
    int _openInAppButtonIndex;
    int _shareLinkButtonIndex;
    int _appLinkButtonIndex;
    int _copyLinkButtonIndex;
    int _sendAsMessageButtonIndex;
    PKPass *_pass;
    NSURLConnection *_passbookConnection;
    NSMutableData *_passbookConnectionData;
    FBPopoverInfo *_popoverInfo;
    FBExperimentManager *_experimentManager;
    FBContentInsetTracker *_contentInsetTracker;
    UIBarButtonItem *_shareButtonItem;
    NJKWebViewProgress *_webViewProgressManager;
    FBMobileCanvasWilde *_canvas;
    id <FBWebViewLinkHandler> _linkHandler;
    UIViewController<FBNuxBannerViewController> *_bannerViewController;
    FBWebAppLinkBannerViewController *_appLinkBannerViewController;
    double _timeoutInterval;
}

+ (BOOL)isSafeUserActivityURL:(id)arg1;
+ (id)safeURLFromUserActivity:(id)arg1 inSession:(id)arg2;
+ (int)policyForURL:(id)arg1;
+ (id)fb_webViewControllerConfiguredForSideFeedWithSession:(id)arg1;
@property(nonatomic) BOOL enableOOMDetection; // @synthesize enableOOMDetection=_enableOOMDetection;
@property(nonatomic) BOOL useWKWebView; // @synthesize useWKWebView=_useWKWebView;
@property(retain, nonatomic) FBWebAppLinkBannerViewController *appLinkBannerViewController; // @synthesize appLinkBannerViewController=_appLinkBannerViewController;
@property(retain, nonatomic) UIViewController<FBNuxBannerViewController> *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
@property(retain, nonatomic) id <FBWebViewLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
@property(retain, nonatomic) FBMobileCanvasWilde *canvas; // @synthesize canvas=_canvas;
@property(nonatomic) BOOL showingExternalContent; // @synthesize showingExternalContent=_showingExternalContent;
@property(nonatomic) BOOL progressBarEnabled; // @synthesize progressBarEnabled=_progressBarEnabled;
@property(retain, nonatomic) NJKWebViewProgress *webViewProgressManager; // @synthesize webViewProgressManager=_webViewProgressManager;
@property(retain, nonatomic) UIBarButtonItem *shareButtonItem; // @synthesize shareButtonItem=_shareButtonItem;
@property(retain, nonatomic) FBContentInsetTracker *contentInsetTracker; // @synthesize contentInsetTracker=_contentInsetTracker;
@property(retain, nonatomic) FBExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(nonatomic) BOOL cancelButtonReplaced; // @synthesize cancelButtonReplaced=_cancelButtonReplaced;
@property(retain, nonatomic) FBPopoverInfo *popoverInfo; // @synthesize popoverInfo=_popoverInfo;
@property(copy, nonatomic) NSMutableData *passbookConnectionData; // @synthesize passbookConnectionData=_passbookConnectionData;
@property(retain, nonatomic) NSURLConnection *passbookConnection; // @synthesize passbookConnection=_passbookConnection;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) int sendAsMessageButtonIndex; // @synthesize sendAsMessageButtonIndex=_sendAsMessageButtonIndex;
@property(nonatomic) int copyLinkButtonIndex; // @synthesize copyLinkButtonIndex=_copyLinkButtonIndex;
@property(nonatomic) int appLinkButtonIndex; // @synthesize appLinkButtonIndex=_appLinkButtonIndex;
@property(nonatomic) int shareLinkButtonIndex; // @synthesize shareLinkButtonIndex=_shareLinkButtonIndex;
@property(nonatomic) int openInAppButtonIndex; // @synthesize openInAppButtonIndex=_openInAppButtonIndex;
@property(nonatomic) int openInSafariButtonIndex; // @synthesize openInSafariButtonIndex=_openInSafariButtonIndex;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIBarButtonItem *actionItem; // @synthesize actionItem=_actionItem;
@property(retain, nonatomic) UIView<FBWebView> *fbWebView; // @synthesize fbWebView=_fbWebView;
@property(nonatomic) int usePrefetchPolicy; // @synthesize usePrefetchPolicy=_usePrefetchPolicy;
@property(retain, nonatomic) FBBrowserAnalytics *browserAnalytics; // @synthesize browserAnalytics=_browserAnalytics;
@property(nonatomic) __weak FBExceptionHandler *exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(nonatomic) __weak id <FBModalWebFlowDelegate> modalFlowDelegate; // @synthesize modalFlowDelegate=_modalFlowDelegate;
@property(nonatomic) __weak id <FBWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL disableDismissModalFlowAutomatically; // @synthesize disableDismissModalFlowAutomatically=_disableDismissModalFlowAutomatically;
@property(copy, nonatomic) NSString *modalCancelButtonTitle; // @synthesize modalCancelButtonTitle=_modalCancelButtonTitle;
@property(nonatomic) BOOL isModalFlow; // @synthesize isModalFlow=_isModalFlow;
@property(retain, nonatomic) FBWebNativeThirdPartyURLController *nativeURLController; // @synthesize nativeURLController=_nativeURLController;
@property(nonatomic) BOOL enableQuickPromotion; // @synthesize enableQuickPromotion=_enableQuickPromotion;
@property(nonatomic) unsigned int titleSource; // @synthesize titleSource=_titleSource;
@property(retain, nonatomic) UIToolbar *customToolBar; // @synthesize customToolBar=_customToolBar;
@property(retain, nonatomic) UIColor *progressBarColor; // @synthesize progressBarColor=_progressBarColor;
@property(retain, nonatomic) UIColor *webToolbarItemsColor; // @synthesize webToolbarItemsColor=_webToolbarItemsColor;
@property(retain, nonatomic) UIColor *webToolbarColor; // @synthesize webToolbarColor=_webToolbarColor;
@property(nonatomic) BOOL hasToolbar; // @synthesize hasToolbar=_hasToolbar;
@property(retain, nonatomic) FBAnimatedProgressBarView *progressBar; // @synthesize progressBar=_progressBar;
@property(copy, nonatomic) CDUnknownBlockType contentInsetsProvider; // @synthesize contentInsetsProvider=_contentInsetsProvider;
@property(nonatomic) BOOL isTabBarVisible; // @synthesize isTabBarVisible=_isTabBarVisible;
@property(nonatomic) int parentApp; // @synthesize parentApp=_parentApp;
@property(nonatomic) BOOL shouldSupportLandscapeOrientation; // @synthesize shouldSupportLandscapeOrientation=_shouldSupportLandscapeOrientation;
@property(copy, nonatomic) NSString *shareLinkLabelString; // @synthesize shareLinkLabelString=_shareLinkLabelString;
@property(retain, nonatomic) FBWebAppLinkBannerViewController *appLinkBanner; // @synthesize appLinkBanner=_appLinkBanner;
@property(retain, nonatomic) FBWebAppLink *appLink; // @synthesize appLink=_appLink;
@property(nonatomic) BOOL disableShareLinkAction; // @synthesize disableShareLinkAction=_disableShareLinkAction;
@property(nonatomic) BOOL disableSendAsMessageAction; // @synthesize disableSendAsMessageAction=_disableSendAsMessageAction;
@property(nonatomic) BOOL disablePullToRefresh; // @synthesize disablePullToRefresh=_disablePullToRefresh;
@property(nonatomic) BOOL disableJewels; // @synthesize disableJewels=_disableJewels;
@property(nonatomic) BOOL preventAccessToLoginPage; // @synthesize preventAccessToLoginPage=_preventAccessToLoginPage;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) int policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_logNavigationStart:(id)arg1;
- (void)_removeAppLinkBannerAndBannerController:(id)arg1;
- (void)nuxBannerControllerDidDismissBanner:(id)arg1;
- (void)_updateBannerViewIfNeeded;
- (void)_removeBannerAndBannerController:(id)arg1;
- (void)_setBannerViewController:(id)arg1;
- (void)nonZeroRatedSessionUxMustDeactivate:(id)arg1;
- (void)nonZeroRatedSessionDidFailToStart:(id)arg1;
- (void)nonZeroRatedSessionUxMayActivate:(id)arg1;
- (void)notifyExternalContentDisplayChangeTo:(id)arg1;
- (float)progressBarHeight;
- (void)_startFinalProgressBarAnimation;
- (void)webViewProgress:(id)arg1 didUpdateProgress:(float)arg2;
- (void)updateProgressBar:(float)arg1;
- (void)_logTapEvent:(id)arg1 withSource:(id)arg2;
- (void)_logTapEventFromActionSheet:(id)arg1;
- (void)_logTapEventFromChrome:(id)arg1;
- (void)_logWebNavigationFromURL:(id)arg1 toURL:(id)arg2;
- (id)analyticsDestinationURL;
- (id)analyticsModule;
- (void)dialogDidLoad:(id)arg1;
- (void)setActionButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setCancelButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)closeDialog:(id)arg1;
- (id)openDialogWithURL:(id)arg1;
- (void)close;
- (id)webView;
- (id)popoverInfoForRequest:(id)arg1;
- (void)_updateSourceRectForPopover:(id)arg1;
- (void)webToolbar:(id)arg1 shareButtonPressed:(id)arg2;
- (void)_addShareActions:(id)arg1;
- (void)webToolbar:(id)arg1 appLinkInstallButtonPressed:(id)arg2;
- (void)webToolbar:(id)arg1 appLinkOpenButtonPressed:(id)arg2;
- (void)webToolbar:(id)arg1 actionButtonPressed:(id)arg2;
- (void)webToolbar:(id)arg1 refreshButtonPressed:(id)arg2;
- (void)webToolbar:(id)arg1 forwardButtonPressed:(id)arg2;
- (void)webToolbar:(id)arg1 backButtonPressed:(id)arg2;
- (void)_updatePullToRefresh;
- (void)_configureToolbarAndIndicatorsForPolicy;
- (void)_updateIPadToolbar;
- (void)_updateToolbarAndIndicatorsForLoadingState;
- (BOOL)shouldAllowWKWebView;
- (BOOL)shouldAllowPullToRefreshForInternalPages;
- (void)setNavigationItemTitle:(id)arg1;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *forcedRightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *forcedLeftBarButtonItem;
- (void)webAppLinkBannerViewController:(id)arg1 didTapActionButton:(id)arg2;
- (void)webAppLinkBannerViewController:(id)arg1 didTapDismissButton:(id)arg2;
- (BOOL)isPageSecure;
- (BOOL)_isModalFlowAtDoneState;
- (void)_setModalFlowToolbarItems;
- (id)_initiateOpenActionSheet;
- (void)_didTapShareButtonItem;
- (void)_setToolbarItems;
- (void)_WKWebViewOOMCrashDetector;
- (void)_loadingTimerFired:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isMobileAdsManagerURL:(id)arg1;
- (BOOL)_isAutoplayableContent:(id)arg1;
- (void)_updateLoadingState;
- (void)_confirmExternalNavigationRequest:(id)arg1;
- (void)modalFlowDone;
- (void)modalFlowCancel;
- (void)cancelModal;
- (void)_appLinkTapped;
- (void)configureActionButtonForAppLink;
- (id)_appLinkButtonTextFormatString;
- (void)_createBannerForAppLinkIfNeeded;
- (BOOL)_isAppLinkEnabled;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_sendLinkInMessageFromSource:(id)arg1 item:(id)arg2;
- (void)_shareLinkFromSource:(id)arg1 item:(id)arg2;
- (BOOL)fb_hidesTabBar;
- (BOOL)fb_showNavBarSearchField;
- (BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1;
- (BOOL)fb_showNavigationJewels;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)fullScreenErrorViewActionButtonTapped:(id)arg1;
- (void)_swapViewsAfterMinTimeHasPassed;
- (void)_switchToWeb;
- (void)_handleSwitchingViewsForSuccess:(BOOL)arg1;
- (void)showErrorPageWithMessage:(id)arg1 extraTextForEmployee:(id)arg2;
- (void)showErrorPage:(id)arg1;
- (void)showErrorPageForUnsupportedMimeType:(id)arg1;
- (void)_resetActionSheetButtonIndices;
- (void)_willEnterForeground:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)_showPass;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)_startLoadToCheckMIMEType:(id)arg1;
- (void)webNativeThirdPartyURLController:(id)arg1 didUpdateAppLinkButtonEnabled:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)userActivityWasContinued:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)updateUserActivityForRequest:(id)arg1;
- (void)_didFinishLoadRequest:(id)arg1;
- (void)_FBLogWebViewError:(id)arg1 URLString:(id)arg2;
- (void)request:(id)arg1 _didFailLoadWithError:(id)arg2;
- (BOOL)_shouldHandleInternalURL:(id)arg1;
- (BOOL)_shouldStartLoadWithRequest:(id)arg1 navigationType:(int)arg2;
- (BOOL)_handleInternalURLRequest:(id)arg1;
- (unsigned int)_loadRequestPolicy;
- (void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2;
- (void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartNavigationRequest:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 loadingStateChanged:(BOOL)arg2;
- (void)webView:(id)arg1 progressChanged:(double)arg2;
- (id)pageURLForWebPivots;
- (id)pageTitleForWebPivots;
- (void)scrollToTop;
- (void)goForward;
- (void)goBack;
- (void)reload;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (void)loadURL:(id)arg1 trackingCodes:(id)arg2;
- (void)loadURL:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)willBecomeActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)_willEndPlayingFullScreenVideo:(id)arg1;
- (void)_didStartPlayingFullScreenVideo:(id)arg1;
- (void)setZeroRatingSentry:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotate;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dismissActionSheet;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_loadRequestIfReady;
- (void)loadView;
- (void)_initializeWebView;
- (void)_initializeFBWKWebView;
- (void)_initializeFBWebView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setLoadingTimer:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initModalWithPolicy:(int)arg1 session:(id)arg2;
- (id)initModalFullScreenWithPolicy:(int)arg1 session:(id)arg2;
- (id)initWithPolicy:(int)arg1 session:(id)arg2 scenePathContext:(id)arg3;
- (id)initWithPolicy:(int)arg1 session:(id)arg2;
- (void)_ios8Initialize;
- (void)configureForSideFeedWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

