//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDelayedWorkPerformer-Protocol.h"

@class NSString;

@interface FBObjectDelayedWorkPerformer : NSObject <FBDelayedWorkPerformer>
{
}

- (void)cancelDelayedWorkItem:(id)arg1;
- (void)delayTriggeredForDelayedWorkItem:(id)arg1;
- (void)scheduleDelayedWorkItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

