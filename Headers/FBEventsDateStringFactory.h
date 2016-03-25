//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBEventsDateStringFactory : NSObject
{
}

+ (id)endOfWeekForDate:(id)arg1;
+ (id)longDateStringWithDate:(id)arg1;
+ (id)shortDateStringWithDate:(id)arg1;
+ (id)timeStringForDate:(id)arg1;
+ (id)multiDayEventDateStringWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)afterThisWeekDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)thisWeekDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)tomorrowDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)todayDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)todayTomorrowSpecificDateString:(id)arg1;
+ (BOOL)isMultiDayEventWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3;
+ (BOOL)isAfterThisWeekWithStartDate:(id)arg1 endDate:(id)arg2;
+ (BOOL)isThisWeekWithStartDate:(id)arg1 endDate:(id)arg2;
+ (BOOL)isTomorrowWithStartDate:(id)arg1 endDate:(id)arg2;
+ (BOOL)isTodayWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)stringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3;
+ (id)stringWithDate:(id)arg1;

@end

