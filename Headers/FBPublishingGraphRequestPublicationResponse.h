//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBPublishingGraphRequestPublicationResponse : FBValueObject <NSCopying>
{
    NSString *_postGraphQLID;
}

@property(readonly, copy, nonatomic) NSString *postGraphQLID; // @synthesize postGraphQLID=_postGraphQLID;
- (void).cxx_destruct;
- (id)initWithPostGraphQLID:(id)arg1;

@end

