//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber, NSString;

@interface FBStoryCreateInputDataPastTimeBackdatedTime : FBGraphQLInput
{
    NSNumber *_time;
    NSString *_granularity;
}

@property(copy, nonatomic) NSString *granularity; // @synthesize granularity=_granularity;
@property(copy, nonatomic) NSNumber *time; // @synthesize time=_time;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

