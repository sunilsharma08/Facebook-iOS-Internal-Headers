//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MNMQTTTopicHandling-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MNMQTTMessagingEventDispatcher : NSObject <MNMQTTTopicHandling>
{
    NSMutableDictionary *_handlers;
}

- (void).cxx_destruct;
- (void)_receivedPayload:(id)arg1;
- (void)setHandler:(id)arg1 forEvent:(id)arg2;
- (id)topicListener;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

