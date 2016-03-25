//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCompositionOwnershipTracker-Protocol.h"

@class FBPreferences, NSMutableDictionary, NSString;

@interface FBPreferenceBackedCompositionOwnershipTracker : NSObject <FBCompositionOwnershipTracker>
{
    NSMutableDictionary *_compositionIDs;
    NSString *_cacheKey;
    BOOL _hasReadCompositionIDsFromPreferences;
    FBPreferences *_preferences;
}

- (void).cxx_destruct;
- (id)retrieveCompositionIDs;
- (void)successfullyPublishedCompositionWithCompositionID:(id)arg1;
- (id)unpublishedOwnedCompositionIDs;
- (void)willStartPublishingOwnedPublicationWithCompositionID:(id)arg1;
- (id)initWithPreferences:(id)arg1 moduleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

