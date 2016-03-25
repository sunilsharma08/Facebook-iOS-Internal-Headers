//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComponentTableViewCellProviding-Protocol.h"

@class FBReactionUnitAdapterCache, NSString;

@interface FBReactionTableViewCellProvider : NSObject <FBComponentTableViewCellProviding>
{
    FBReactionUnitAdapterCache *_adapterCache;
}

+ (void)layoutCardView:(id)arg1;
+ (void)configureCellForOverlays:(id)arg1;
+ (id)tableView:(id)arg1 dequeueAndConfigureContentCellForAdapter:(id)arg2 atIndexPath:(id)arg3;
+ (id)tableView:(id)arg1 dequeueAndConfigureLoadingCellAtIndexPath:(id)arg2;
+ (void)configureTableView:(id)arg1;
@property(retain, nonatomic) FBReactionUnitAdapterCache *adapterCache; // @synthesize adapterCache=_adapterCache;
- (void).cxx_destruct;
- (id)_cardAdapterFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (float)dataSource:(id)arg1 tableView:(id)arg2 heightForRowAtIndexPath:(id)arg3;
- (id)dataSource:(id)arg1 tableView:(id)arg2 cellForRowAtIndexPath:(id)arg3;
- (id)initWithAdapterDelegate:(id)arg1 reactionContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

