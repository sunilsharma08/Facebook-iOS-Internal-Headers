//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBPersistentKeyValueStore;

@interface FBOOMArchiverThreadUnsafe : NSObject
{
    FBPersistentKeyValueStore *_store;
}

- (void).cxx_destruct;
- (id)getAllOOMEventsStored;
- (void)archiveOOMEventWithStates:(id)arg1 applicationStatusSnapshot:(id)arg2;
- (id)init;
- (id)initWithStore:(id)arg1;

@end

