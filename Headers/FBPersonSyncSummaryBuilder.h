//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface FBPersonSyncSummaryBuilder : NSObject
{
    NSDate *_timeSyncStarted;
    NSString *_cursorForFetchingDeltasSinceSyncTookPlace;
}

+ (id)personSyncSummaryFromExistingPersonSyncSummary:(id)arg1;
+ (id)personSyncSummary;
- (void).cxx_destruct;
- (id)withCursorForFetchingDeltasSinceSyncTookPlace:(id)arg1;
- (id)withTimeSyncStarted:(id)arg1;
- (id)build;

@end

