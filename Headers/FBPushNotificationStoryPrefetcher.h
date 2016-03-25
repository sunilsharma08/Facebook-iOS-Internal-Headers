//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;
@protocol FBPushNotificationStoryPrefetcherDelegate;

@interface FBPushNotificationStoryPrefetcher : NSObject
{
    FBUserSession *_session;
    id <FBPushNotificationStoryPrefetcherDelegate> _delegate;
}

+ (CDUnknownBlockType)_failureBlockForDownloadRequest:(id)arg1;
+ (CDUnknownBlockType)_successBlockForDownloadRequest:(id)arg1;
@property(nonatomic) __weak id <FBPushNotificationStoryPrefetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prefetchNotificationWithLegacyStoryId:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

