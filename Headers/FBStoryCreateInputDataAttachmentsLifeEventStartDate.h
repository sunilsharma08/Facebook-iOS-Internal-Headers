//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber;

@interface FBStoryCreateInputDataAttachmentsLifeEventStartDate : FBGraphQLInput
{
    NSNumber *_year;
    NSNumber *_month;
    NSNumber *_day;
}

@property(copy, nonatomic) NSNumber *day; // @synthesize day=_day;
@property(copy, nonatomic) NSNumber *month; // @synthesize month=_month;
@property(copy, nonatomic) NSNumber *year; // @synthesize year=_year;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

