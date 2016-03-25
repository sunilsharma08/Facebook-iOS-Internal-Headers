//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPublishingBackgroundTaskScheduler-Protocol.h"

@class FBBackgroundTaskHandler, NSMutableDictionary, NSString;

@interface FBPublishingApplicationBackgroundTaskScheduler : NSObject <FBPublishingBackgroundTaskScheduler>
{
    FBBackgroundTaskHandler *_backgroundTaskHandler;
    NSMutableDictionary *_backgroundTaskIdentifiersByIdentifier;
}

- (void).cxx_destruct;
- (void)endBackgroundTaskWithIdentifier:(id)arg1;
- (void)startBackgroundTaskWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

