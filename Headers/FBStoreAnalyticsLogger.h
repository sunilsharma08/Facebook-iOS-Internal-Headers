//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol FBStoreAnalyticsConfiguring, OS_dispatch_source;

@interface FBStoreAnalyticsLogger : NSObject
{
    id <FBStoreAnalyticsConfiguring> _configuration;
    NSObject<OS_dispatch_source> *_applicationStatusTimer;
}

- (void).cxx_destruct;
- (void)stopLoggingPeriodically;
- (void)startLoggingPeriodically;
- (void)logStoreStatus;
- (void)dealloc;
- (id)init;
- (id)initWithStoreAnalyticsConfiguration:(id)arg1;

@end

