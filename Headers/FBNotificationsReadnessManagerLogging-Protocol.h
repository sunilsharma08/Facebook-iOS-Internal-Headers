//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError;

@protocol FBNotificationsReadnessManagerLogging <NSObject>
- (void)readnessManagerFailedToUpdateStoriesWithError:(NSError *)arg1;
- (void)readnessManagerUpdateSucceededWithStoryNodes:(NSArray *)arg1 updatedStoryNodes:(NSArray *)arg2;
- (void)readnessManagerUpdateStarted;
@end

