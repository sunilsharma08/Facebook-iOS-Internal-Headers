//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBLocationAccessManagerDelegate-Protocol.h"
#import "FBPresenceComposerDataSourceListener-Protocol.h"
#import "FBPresenceComposerSearchTypeaheadListener-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FBLocationAccessManager, FBNearbyPlace, FBPresenceBuiltInPlace, FBPresenceComposerData, FBPresenceComposerPlaceDataSource, FBPresenceComposerPlacePickerLocationView, FBPresenceStatusViewFactory, FBUserSession, NSMutableDictionary, NSString, UITableView;
@protocol FBPresenceComposerPickerListener, FBPresenceComposerPlacePickerListener;

@interface FBPresenceComposerPlacePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FBPresenceComposerDataSourceListener, FBLocationAccessManagerDelegate, UITextFieldDelegate, FBPresenceComposerSearchTypeaheadListener>
{
    FBUserSession *_session;
    FBPresenceStatusViewFactory *_statusViewFactory;
    UITableView *_tableView;
    FBPresenceComposerPlaceDataSource *_placeDataSource;
    FBNearbyPlace *_place;
    FBPresenceComposerData *_homeComposerData;
    FBPresenceBuiltInPlace *_homeBuiltInPlace;
    id <FBPresenceComposerPickerListener> _pickerListener;
    NSMutableDictionary *_loggedBootstrapResults;
    NSMutableDictionary *_loggedSearchResults;
    NSString *_searchTerm;
    BOOL _loggedTextEntry;
    FBLocationAccessManager *_locationAccessManager;
    FBPresenceComposerPlacePickerLocationView *_locationPermissionView;
    BOOL _scrollLogged;
    id <FBPresenceComposerPlacePickerListener> _listener;
    NSString *_composerSessionID;
}

@property(copy, nonatomic) NSString *composerSessionID; // @synthesize composerSessionID=_composerSessionID;
@property(nonatomic) __weak id <FBPresenceComposerPlacePickerListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)locationAccessManager:(id)arg1 accessDenied:(unsigned int)arg2;
- (void)locationAccessManager:(id)arg1 accessGranted:(id)arg2;
- (void)logImpressionOfCell:(id)arg1 atIndexPath:(id)arg2;
- (void)searchFieldDidChange:(id)arg1;
- (void)dataChanged;
- (void)_didTapTurnOnLocation:(id)arg1;
- (void)_setVisibleLocationPermissionView:(BOOL)arg1;
- (void)_performSearchQuery:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 cellWithLocalImageForResult:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)activityTypeChanged:(id)arg1;
- (void)searchFieldWillReturnForActivityType:(id)arg1;
- (void)searchFieldFocusedWithSearchTerm:(id)arg1 forActivityType:(id)arg2;
- (void)searchFieldTextChanged:(id)arg1 filteredSearchTerm:(id)arg2 forActivityType:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)stopUpdating;
- (void)fetchSearchResults;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithSession:(id)arg1 pickerListener:(id)arg2 statusViewFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

