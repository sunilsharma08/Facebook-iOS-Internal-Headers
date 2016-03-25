//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSNumber;

@interface FBGravityNegativeFeedbackInputDataLocationData : FBGraphQLInput
{
    NSNumber *_pulsarRssi;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_horizontalAccuracy;
    NSNumber *_verticalAccuracy;
    NSNumber *_clientLocationTime;
    NSNumber *_clientCurrentTime;
}

@property(copy, nonatomic) NSNumber *clientCurrentTime; // @synthesize clientCurrentTime=_clientCurrentTime;
@property(copy, nonatomic) NSNumber *clientLocationTime; // @synthesize clientLocationTime=_clientLocationTime;
@property(copy, nonatomic) NSNumber *verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(copy, nonatomic) NSNumber *horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSNumber *pulsarRssi; // @synthesize pulsarRssi=_pulsarRssi;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

