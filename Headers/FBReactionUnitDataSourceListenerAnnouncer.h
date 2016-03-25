//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBReactionUnitDataSourceListener-Protocol.h"

@class NSString;

@interface FBReactionUnitDataSourceListenerAnnouncer : FBAnnouncerBase <FBReactionUnitDataSourceListener>
{
}

- (void)unitDataSourceLoadDidFail;
- (void)unitDataSourceUnitInvalidated:(id)arg1 withReason:(id)arg2;
- (void)unitDataSourceUnitValidated:(id)arg1;
- (void)unitDataSourceUnitsTitleSet:(id)arg1;
- (void)unitDataSourceAdapterReplaced:(id)arg1 byAdapter:(id)arg2 atIndexPath:(id)arg3;
- (void)unitDataSourceAdapterRemoved:(id)arg1 atIndexPath:(id)arg2;
- (void)unitDataSourceAdaptersLoaded:(id)arg1 atIndexPaths:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

