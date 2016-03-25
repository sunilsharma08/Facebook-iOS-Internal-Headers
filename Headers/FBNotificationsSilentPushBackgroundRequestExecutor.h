//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNotificationsBackgroundNotificationListRefresherDelegate-Protocol.h"
#import "FBNotificationsSilentPushStoryPrefetchingManagerDelegate-Protocol.h"

@class FBUserSession, NSMutableArray, NSString;
@protocol FBNotificationsSilentPushBackgroundRequestExecutorDelegate, FBNotificationsSilentPushStoryPrefetchingManagerLogging><FBNotificationsBackgroundNotificationListRefresherLogging;

@interface FBNotificationsSilentPushBackgroundRequestExecutor : NSObject <FBNotificationsSilentPushStoryPrefetchingManagerDelegate, FBNotificationsBackgroundNotificationListRefresherDelegate>
{
    id <FBNotificationsSilentPushBackgroundRequestExecutorDelegate> _delegate;
    FBUserSession *_session;
    BOOL _requestOngoing;
    NSMutableArray *_ongoingRequests;
    BOOL _gotData;
    NSString *_requestIdentifier;
    id <FBNotificationsSilentPushStoryPrefetchingManagerLogging><FBNotificationsBackgroundNotificationListRefresherLogging> _logger;
}

@property(readonly, nonatomic) id <FBNotificationsSilentPushStoryPrefetchingManagerLogging><FBNotificationsBackgroundNotificationListRefresherLogging> logger; // @synthesize logger=_logger;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (void).cxx_destruct;
- (void)_finishIfApplicable;
- (void)silentPushStoryPrefetchingManager:(id)arg1 finishedWithResult:(unsigned int)arg2;
- (void)backgroundNotificationListRefresher:(id)arg1 finishedWithResult:(unsigned int)arg2;
- (void)startExecutingRequest:(id)arg1;
- (id)initWithSession:(id)arg1 logger:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

