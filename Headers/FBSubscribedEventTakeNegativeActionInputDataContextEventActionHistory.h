//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSString;

@interface FBSubscribedEventTakeNegativeActionInputDataContextEventActionHistory : FBGraphQLInput
{
    NSString *_surface;
    NSString *_mechanism;
    NSString *_extraData;
    NSString *_eventTracking;
}

@property(copy, nonatomic) NSString *eventTracking; // @synthesize eventTracking=_eventTracking;
@property(copy, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *mechanism; // @synthesize mechanism=_mechanism;
@property(copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

