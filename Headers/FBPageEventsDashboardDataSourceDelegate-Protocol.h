//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemEvent;

@protocol FBPageEventsDashboardDataSourceDelegate <NSObject>
- (void)didTapInviteOnEvent:(FBMemEvent *)arg1;
- (void)didTapEditOnEvent:(FBMemEvent *)arg1;
- (void)eventsDidFailToLoadWithSection:(unsigned int)arg1;
- (void)eventsDidUpdateWithSection:(unsigned int)arg1 freshDownload:(BOOL)arg2;
@end

