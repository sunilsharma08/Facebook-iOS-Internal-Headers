//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBEventSuggestionTakeNegativeActionInputDataContext : FBGraphQLInput
{
    NSString *_source;
    NSString *_ref;
    NSString *_refNotifType;
    NSArray *_eventActionHistory;
}

@property(copy, nonatomic) NSArray *eventActionHistory; // @synthesize eventActionHistory=_eventActionHistory;
@property(copy, nonatomic) NSString *refNotifType; // @synthesize refNotifType=_refNotifType;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

