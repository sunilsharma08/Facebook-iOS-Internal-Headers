//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;
@protocol FBPageCustomPostsPublishRequestDelegate;

@interface FBPageCustomPostsPublishRequest : FBNetworkerRequest
{
    NSString *_legacyAPIStoryID;
    id <FBPageCustomPostsPublishRequestDelegate> _delegate;
}

- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)networkRequest;
- (void)_didFailWithError:(id)arg1;
- (void)_didSucceed;
- (id)initWithLegacyAPIStoryID:(id)arg1 callbackPerformer:(id)arg2 callPath:(id)arg3 actorFBID:(id)arg4 priority:(int)arg5 name:(id)arg6 delegate:(id)arg7;

@end

