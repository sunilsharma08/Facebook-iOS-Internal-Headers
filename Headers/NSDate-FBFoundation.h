//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (FBFoundation)
+ (id)dateWithFacebookEventTimestamp:(double)arg1;
+ (double)timeIntervalSince1970;
- (id)startOfHour;
- (id)roundUpToNextMinuteInterval:(unsigned int)arg1;
- (id)startOfDay;
- (BOOL)isSameDayAsDate:(id)arg1;
@end

