//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataAttachmentsLinkExternal, NSString;

@interface FBStoryCreateInputDataAttachmentsLink : FBGraphQLInput
{
    NSString *_internalLinkableId;
    FBStoryCreateInputDataAttachmentsLinkExternal *_external;
}

@property(copy, nonatomic) FBStoryCreateInputDataAttachmentsLinkExternal *external; // @synthesize external=_external;
@property(copy, nonatomic) NSString *internalLinkableId; // @synthesize internalLinkableId=_internalLinkableId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

