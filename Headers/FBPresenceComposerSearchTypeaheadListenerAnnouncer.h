//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBPresenceComposerSearchTypeaheadListener-Protocol.h"

@class NSString;

@interface FBPresenceComposerSearchTypeaheadListenerAnnouncer : FBAnnouncerBase <FBPresenceComposerSearchTypeaheadListener>
{
}

- (void)activityTypeChanged:(id)arg1;
- (void)searchFieldWillReturnForActivityType:(id)arg1;
- (void)searchFieldFocusedWithSearchTerm:(id)arg1 forActivityType:(id)arg2;
- (void)searchFieldTextChanged:(id)arg1 filteredSearchTerm:(id)arg2 forActivityType:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

