//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray;

@interface FBGeocodeAddressInputQueryParams : FBGraphQLInput
{
    NSArray *_addresses;
}

@property(copy, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

