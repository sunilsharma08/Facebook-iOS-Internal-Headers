//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataAttachmentsPhotoMessageRangesEntity, NSNumber;

@interface FBStoryCreateInputDataAttachmentsPhotoMessageRanges : FBGraphQLInput
{
    NSNumber *_offset;
    NSNumber *_length;
    FBStoryCreateInputDataAttachmentsPhotoMessageRangesEntity *_entity;
}

@property(copy, nonatomic) FBStoryCreateInputDataAttachmentsPhotoMessageRangesEntity *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(copy, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

