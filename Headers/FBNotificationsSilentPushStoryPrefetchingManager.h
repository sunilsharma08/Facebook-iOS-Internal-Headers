//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPushNotificationStoryPrefetcherDelegate-Protocol.h"

@class FBPushNotificationStoryPrefetcher, FBUserSession, NSDictionary, NSString;
@protocol FBNotificationsSilentPushStoryPrefetchingManagerDelegate, FBNotificationsSilentPushStoryPrefetchingManagerLogging;

@interface FBNotificationsSilentPushStoryPrefetchingManager : NSObject <FBPushNotificationStoryPrefetcherDelegate>
{
    FBUserSession *_session;
    id <FBNotificationsSilentPushStoryPrefetchingManagerLogging> _logger;
    FBPushNotificationStoryPrefetcher *_prefetcher;
    NSDictionary *_notification;
    BOOL _startedPrefetching;
    id <FBNotificationsSilentPushStoryPrefetchingManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBNotificationsSilentPushStoryPrefetchingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_canPrefetchStoryForNotification:(id)arg1;
- (void)pushNotificationStoryPrefetcherFailed:(id)arg1;
- (void)pushNotificationStoryPrefetcher:(id)arg1 succeededWithStory:(id)arg2;
- (void)prefetchNotification:(id)arg1;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

