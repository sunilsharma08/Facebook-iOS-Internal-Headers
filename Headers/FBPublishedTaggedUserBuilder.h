//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBPublishedTaggedUserBuilder : NSObject
{
    NSString *_graphQLID;
    NSString *_graphQLTypeName;
    NSString *_name;
}

+ (id)publishedTaggedUserFromExistingPublishedTaggedUser:(id)arg1;
+ (id)publishedTaggedUser;
- (void).cxx_destruct;
- (id)withName:(id)arg1;
- (id)withGraphQLTypeName:(id)arg1;
- (id)withGraphQLID:(id)arg1;
- (id)build;

@end

