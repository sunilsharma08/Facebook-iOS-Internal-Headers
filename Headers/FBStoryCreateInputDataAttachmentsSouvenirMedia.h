//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBStoryCreateInputDataAttachmentsSouvenirMedia : FBGraphQLInput
{
    NSString *_mediaType;
    NSArray *_mediaIds;
    NSString *_highlightedState;
}

@property(copy, nonatomic) NSString *highlightedState; // @synthesize highlightedState=_highlightedState;
@property(copy, nonatomic) NSArray *mediaIds; // @synthesize mediaIds=_mediaIds;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

