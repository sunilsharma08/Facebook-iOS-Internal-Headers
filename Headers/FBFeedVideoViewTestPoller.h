//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedVideoViewPoller-Protocol.h"

@class NSString;
@protocol FBFeedVideoViewPollerTarget;

@interface FBFeedVideoViewTestPoller : NSObject <FBFeedVideoViewPoller>
{
    unsigned int _suspensionReasons;
    id <FBFeedVideoViewPollerTarget> _target;
}

@property(nonatomic) __weak id <FBFeedVideoViewPollerTarget> target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)poll;
- (void)removeSuspensionReason:(unsigned int)arg1;
- (void)addSuspensionReason:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

