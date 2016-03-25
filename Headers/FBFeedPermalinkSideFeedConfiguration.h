//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSideFeedConfiguration-Protocol.h"

@class FBUserSession, MNOnlineStatusManager, NSString;
@protocol FBContactsSearch;

@interface FBFeedPermalinkSideFeedConfiguration : NSObject <FBSideFeedConfiguration>
{
    FBUserSession *_session;
    unsigned int _type;
    id <FBContactsSearch> _contactsSearch;
    MNOnlineStatusManager *_onlineStatusManager;
    NSString *_storyID;
}

@property(readonly, copy, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void).cxx_destruct;
- (unsigned int)_modelToPermalinkSideFeedType:(id)arg1;
- (id)_chatUnit;
- (id)unitControllersFromData:(id)arg1;
- (id)graphQLQueries;
- (id)initWithSession:(id)arg1 storyID:(id)arg2 contactsSearch:(id)arg3 onlineStatusManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

