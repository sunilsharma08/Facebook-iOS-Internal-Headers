//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCollationManagerDelegate-Protocol.h"
#import "FBEventsInviteDataSourceProtocol-Protocol.h"

@class FBUserSession, NSArray, NSString, UITableView;
@protocol FBEventsInviteDataSourceDelegateProtocol;

@interface FBEventsInviteReviewDataSource : NSObject <FBCollationManagerDelegate, FBEventsInviteDataSourceProtocol>
{
    FBUserSession *_session;
    UITableView *_tableView;
    NSString *_localizedSectionHeader;
    id <FBEventsInviteDataSourceDelegateProtocol> _delegate;
    NSArray *_inviteCandidates;
}

@property(copy, nonatomic) NSArray *inviteCandidates; // @synthesize inviteCandidates=_inviteCandidates;
@property(nonatomic) __weak id <FBEventsInviteDataSourceDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)inviteCandidateAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithSession:(id)arg1 inviteCandidates:(id)arg2 localizedSectionHeader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

