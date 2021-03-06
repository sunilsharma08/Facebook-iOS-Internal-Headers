//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBHomeMigrateInputDataPrivacy, NSString;

@interface FBHomeMigrateInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_pageId;
    NSString *_residenceId;
    NSString *_name;
    NSString *_cityId;
    NSString *_neighborhoodName;
    NSString *_address;
    FBHomeMigrateInputDataPrivacy *_privacy;
}

@property(copy, nonatomic) FBHomeMigrateInputDataPrivacy *privacy; // @synthesize privacy=_privacy;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *neighborhoodName; // @synthesize neighborhoodName=_neighborhoodName;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *residenceId; // @synthesize residenceId=_residenceId;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

