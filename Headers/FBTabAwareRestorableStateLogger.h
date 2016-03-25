//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBTabAwareRestorableStateChangeListener-Protocol.h"

@class FBUserSession, NSMutableDictionary, NSString;

@interface FBTabAwareRestorableStateLogger : NSObject <FBTabAwareRestorableStateChangeListener>
{
    FBUserSession *_session;
    NSMutableDictionary *_tabIDToCache;
}

- (void).cxx_destruct;
- (void)clearAllState;
- (void)_logRemovedRestorableState:(id)arg1 forTabID:(id)arg2;
- (void)tabWithID:(id)arg1 didRemoveRestorableState:(id)arg2;
- (void)_logNewRestorableState:(id)arg1 forTabID:(id)arg2;
- (void)tabWithID:(id)arg1 didCreateRestorableState:(id)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

