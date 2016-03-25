//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBCommentPublishTarget : FBValueObject <NSCopying>
{
    NSString *_graphQLID;
    NSString *_legacyAPIPostID;
}

@property(readonly, copy, nonatomic) NSString *legacyAPIPostID; // @synthesize legacyAPIPostID=_legacyAPIPostID;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
- (void).cxx_destruct;
- (id)initWithGraphQLID:(id)arg1 legacyAPIPostID:(id)arg2;

@end

