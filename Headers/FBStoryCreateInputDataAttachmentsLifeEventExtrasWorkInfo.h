//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate, NSString;

@interface FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfo : FBGraphQLInput
{
    FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate *_endDate;
    NSString *_current;
    NSString *_employerId;
}

@property(copy, nonatomic) NSString *employerId; // @synthesize employerId=_employerId;
@property(copy, nonatomic) NSString *current; // @synthesize current=_current;
@property(copy, nonatomic) FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate *endDate; // @synthesize endDate=_endDate;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

