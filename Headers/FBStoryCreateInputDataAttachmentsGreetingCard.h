//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBStoryCreateInputDataAttachmentsGreetingCard : FBGraphQLInput
{
    NSString *_templateId;
    NSString *_theme;
    NSArray *_slides;
}

@property(copy, nonatomic) NSArray *slides; // @synthesize slides=_slides;
@property(copy, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

