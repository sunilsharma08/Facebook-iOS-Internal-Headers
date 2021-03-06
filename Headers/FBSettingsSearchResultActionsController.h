//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol FBSettingsSearchResponderProtocol;

@interface FBSettingsSearchResultActionsController : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_searchedKeywordInLowerCase;
    NSArray *_searchResultActions;
    id <FBSettingsSearchResponderProtocol> _responder;
}

@property(nonatomic) __weak id <FBSettingsSearchResponderProtocol> responder; // @synthesize responder=_responder;
@property(retain, nonatomic) NSArray *searchResultActions; // @synthesize searchResultActions=_searchResultActions;
@property(retain, nonatomic) NSString *searchedKeywordInLowerCase; // @synthesize searchedKeywordInLowerCase=_searchedKeywordInLowerCase;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

