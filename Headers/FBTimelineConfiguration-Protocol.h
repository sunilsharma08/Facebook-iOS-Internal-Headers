//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FBTimelineConfiguration <NSObject>
@property(readonly, nonatomic) BOOL beginSyncingDataInInit;
@property(readonly, nonatomic) BOOL hasPullToRefreshView;
- (BOOL)isEntityCard;
- (NSString *)actionType;
- (NSString *)analyticsEventSource;
- (NSString *)analyticsUUID;
- (NSString *)topItemType;
- (unsigned int)initialDisplayOptions;
@end

