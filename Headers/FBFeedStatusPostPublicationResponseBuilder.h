//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBFeedStatusPostPublicationResponseBuilder : NSObject
{
    NSString *_postGraphQLID;
    BOOL _willResultantFeedStoryContainPublicationIdentifier;
}

+ (id)feedStatusPostPublicationResponseFromExistingFeedStatusPostPublicationResponse:(id)arg1;
+ (id)feedStatusPostPublicationResponse;
- (void).cxx_destruct;
- (id)withWillResultantFeedStoryContainPublicationIdentifier:(BOOL)arg1;
- (id)withPostGraphQLID:(id)arg1;
- (id)build;

@end

