//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBMediaSourceChooserProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBMediaPickerSession, NSString;
@protocol FBMediaDataSourceProtocol, FBMediaSourceChooserDelegate;

@interface FBMediaSourceChooser : UITableViewController <UITableViewDelegate, UITableViewDataSource, FBMediaSourceChooserProtocol>
{
    FBMediaPickerSession *_session;
    id <FBMediaDataSourceProtocol> _currentDataSource;
    id <FBMediaSourceChooserDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMediaSourceChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_dataSourceForIndexPath:(id)arg1;
- (id)analyticsModule;
- (void)_didChangeDataSources:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) float height;
- (void)dealloc;
- (id)initWithSession:(id)arg1 selectedDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

