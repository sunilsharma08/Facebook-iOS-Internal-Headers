//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBTableViewController.h"

#import "FBFNSettingsTableHeaderFooterDelegate-Protocol.h"
#import "FBLocationAccessManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBFNSettingsAppearanceConfiguration, FBFNSettingsDataController, FBFNSettingsTableHeaderFooterView, FBKVOController, FBLocationAccessManager, FBUserSession, NSString, UIAlertView, UIImage;
@protocol FBFNSettingsDelegate;

@interface FBFNSettingsLocationHistoryTableViewController : FBTableViewController <FBFNSettingsTableHeaderFooterDelegate, FBLocationAccessManagerDelegate, UIAlertViewDelegate>
{
    FBKVOController *_kvoController;
    FBLocationAccessManager *_locationAccessManager;
    UIImage *_compassBlueIcon;
    UIImage *_compassGreyIcon;
    UIImage *_locationServiceIcon;
    BOOL _didStartTTIMeasurementOnce;
    BOOL _didShowNux;
    FBFNSettingsAppearanceConfiguration *_configuration;
    BOOL _iOSLocationServicesOffAlertDidShow;
    BOOL _locationHistoryToggleLoading;
    BOOL _locationHistoryToggleSwitchOn;
    id <FBFNSettingsDelegate> _delegate;
    FBFNSettingsDataController *_dataController;
    FBUserSession *_session;
    FBFNSettingsTableHeaderFooterView *_locationHistoryFooter;
    FBFNSettingsTableHeaderFooterView *_locationServicesFooter;
    UIAlertView *_iOSLocationServicesOffAlert;
}

@property(retain, nonatomic) UIAlertView *iOSLocationServicesOffAlert; // @synthesize iOSLocationServicesOffAlert=_iOSLocationServicesOffAlert;
@property(nonatomic) BOOL didShowNux; // @synthesize didShowNux=_didShowNux;
@property(nonatomic) BOOL locationHistoryToggleSwitchOn; // @synthesize locationHistoryToggleSwitchOn=_locationHistoryToggleSwitchOn;
@property(nonatomic) BOOL locationHistoryToggleLoading; // @synthesize locationHistoryToggleLoading=_locationHistoryToggleLoading;
@property(retain, nonatomic) FBFNSettingsTableHeaderFooterView *locationServicesFooter; // @synthesize locationServicesFooter=_locationServicesFooter;
@property(retain, nonatomic) FBFNSettingsTableHeaderFooterView *locationHistoryFooter; // @synthesize locationHistoryFooter=_locationHistoryFooter;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBFNSettingsDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) BOOL iOSLocationServicesOffAlertDidShow; // @synthesize iOSLocationServicesOffAlertDidShow=_iOSLocationServicesOffAlertDidShow;
@property(nonatomic) __weak id <FBFNSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationAccessManager:(id)arg1 accessDenied:(unsigned int)arg2;
- (void)locationAccessManager:(id)arg1 accessGranted:(id)arg2;
- (void)_dataDirty;
- (void)_presentNearbyInfoSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_customizeNearbyInfoCell:(id)arg1;
- (void)_customizeLocationServiceCell:(id)arg1;
- (void)_customizeLocationHistoryCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)_areGravitySettingsAvailable;
- (BOOL)_isNearbyInfoCellSection:(unsigned int)arg1;
- (BOOL)_isLocationServiceCellSection:(unsigned int)arg1;
- (BOOL)_isHistoryCellSection:(unsigned int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didTapManageYourLocationServicesHeaderFooterView:(id)arg1;
- (void)didTapLearnMoreHeaderFooterView:(id)arg1;
- (void)_setLocationTrackingEnabled:(BOOL)arg1;
- (void)_didToggleLocationTracking:(id)arg1;
- (void)_settingsDataChanged;
- (void)_settingsDataLocationServiceChanged;
- (void)_refreshFromServer;
- (BOOL)fb_showNavigationJewels;
- (BOOL)fb_showBackArrowButton;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 configuration:(id)arg2 dataController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

