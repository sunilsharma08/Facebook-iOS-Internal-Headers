//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSNumber, NSString;

@interface FBSearchSuggestionSetInputQuery : FBGraphQLInput
{
    NSArray *_fragments;
    NSNumber *_lockedFragments;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSNumber *lockedFragments; // @synthesize lockedFragments=_lockedFragments;
@property(copy, nonatomic) NSArray *fragments; // @synthesize fragments=_fragments;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

